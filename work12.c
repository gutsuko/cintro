#include <stdio.h>
#include <stdlib.h>
int main(){
        char *str = (char *)malloc(sizeof(char)*100);
        char *p;
        printf("文字列を入力してください（最大100文字）。入力を終えたら改行を押してください。：\n");
        scanf("%s", str);
        p = str;
        printf("配列の中身は以下の通りです。\n");
        for(p; p < str + 100; p++){
            if(*p == '\0'){
              printf("\n");
              break;
            }
          printf("%c", *p);
        }
}
