#include "aos5_protos.h"
#include <assert.h>
#include <stdarg.h>

extern int aos5_rt_load_image(const void *, size_t, const uint32_t *, size_t);
void aos5_log(const char *fmt, ...) { (void)fmt; }
static void *readall(const char *path, size_t *length) {
    FILE *f=fopen(path,"rb"); assert(f);
    fseek(f,0,SEEK_END); *length=(size_t)ftell(f); rewind(f);
    void *p=malloc(*length); assert(fread(p,1,*length,f)==*length); fclose(f); return p;
}
static uint64_t str(const char *s) {
    uint64_t result=0; FUN_009d4eac(GH_ARG(&result),GH_ARG(s),0,0,0,0,0,0); return result;
}
static void release(uint64_t value) {
    uint8_t *rep=(uint8_t *)(uintptr_t)value-24;
    if (rep!=IMG(0xd40300) && --*(int32_t *)(rep+16)<0) free(rep);
}
static void currency(uint8_t *game, const char *id, const char *expected) {
    uint64_t product=str(id), out=0;
    bzStateGame__getCurCode_0039fa6c(GH_ARG(&out),GH_ARG(game),GH_ARG(&product));
    assert(strcmp((char *)(uintptr_t)out,expected)==0);
    release(out); release(product);
}
static void format(const char *code,int value,const char *expected) {
    uint64_t currency=str(code), result=0;
    bzStateGame__convertMoneyStr_003fcd68(GH_ARG(&result),0,(uint64_t)value,GH_ARG(&currency));
    assert(strcmp((char *)(uintptr_t)result,expected)==0);
    release(result); release(currency);
}
int main(int argc, char **argv) {
    assert(argc == 3);
    size_t n,rn;
    void *image=readall(argv[1],&n);
    uint32_t *rel=readall(argv[2],&rn);
    assert(aos5_rt_load_image(image,n,rel,rn/4)==0); free(image); free(rel);
    assert(strcmp(*(char **)IMG(0xd23c70), "aos5.g001")==0);
    assert(strcmp(*(char **)IMG(0xd23d18), (char *)IMG(0xa4d6df))==0);
    assert(strcmp(*(char **)IMG(0xd23d20), "")==0);
    for (int i=0;i<23;++i) {
        uint64_t copy=0;
        FUN_009d881c(GH_ARG(&copy),GH_ARG(IMG(0xd23c70+i*8)),0,0,0,0,0,0);
        assert(strcmp((char *)(uintptr_t)copy,*(char **)IMG(0xd23c70+i*8))==0);
        release(copy);
    }
    uint8_t game[0x398]={0}, rows[0xa8]={0};
    currency(game,"aos5.g001",""); // Offline SDK: empty product cache.
    *(uint8_t **)(game+0x388)=rows; *(uint8_t **)(game+0x390)=rows+sizeof(rows);
    const char *ids[]={"aos5.g001","aos5.g002","aos5.g003"};
    const char *codes[]={"KRW","USD","EUR"};
    for(int i=0;i<3;++i){*(uint64_t *)(rows+i*0x38)=str(ids[i]);*(uint64_t *)(rows+i*0x38+0x30)=str(codes[i]);}
    for(int i=0;i<3;++i)currency(game,ids[i],codes[i]);
    currency(game,"unknown","");
    format("KRW",1234567,"1,234,567"); format("USD",1234567,"12,345.67");
    format("USD",99,"99"); format("KRW",0,"0"); format("",100,"1.00");
    // Repeat the ownership/copy path to expose dangling/shared string errors.
    for(int i=0;i<1000;++i){currency(game,"aos5.g002","USD");format("USD",987654,"9,876.54");}
    for(int i=0;i<3;++i){release(*(uint64_t *)(rows+i*0x38));release(*(uint64_t *)(rows+i*0x38+0x30));}
    puts("PASS: empty/missing/cached currencies, price separators, 1000 repeated ownership cycles.");
    return 0;
}
