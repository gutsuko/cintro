#include <stdio.h>
#include <stdlib.h>
int main(){
        int *p = (int*)malloc(sizeof(int)*5);
        int *q = p;
        printf("整数値を5つ入力してください。ひとつ入力するごとに改行を押してください。：\n");
        int i;
        for(p; p < q + 5; p++){
          scanf("%d", p);
        }
        printf("配列の中身は以下の通りです。\n");
        p = q;
        for(p; p < q + 5; p++){
          printf("値：%d\n", *p);
          printf("アドレス：%d\n", p);
        }
}
