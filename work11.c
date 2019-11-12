#include <stdio.h>
#include <stdlib.h>
int main(){
        char *p = (char*)malloc(sizeof(char)*5);
        char *q = p;
        printf("整数値を5つ入力してください。ひとつ入力するごとに改行を押してください。：\n");
        for(p; p < q + 5; p++){
          scanf("%s", p);
        }
        printf("配列の中身は以下の通りです。\n");
        p = q;
        for(p; p < q + 5; p++){
          printf("値：%d ", *p);
          printf("アドレス：%p\n", p);
        }
}
