#include <stdio.h>
#include <stdlib.h>

typedef struct item {
  char code[10];
  char name[40];
  int price;
} item;

int main(){
  item goods[100];
  for(int i = 0; i < 4; i++){
    scanf("%s", goods[i].code);
    scanf("%s", goods[i].name);
    scanf("%d", &goods[i].price);
  }
  for(int i = 0; i < 4; i++){
    printf("商品コード:%s\n", goods[i].code);
    printf("商品名:%s\n", goods[i].name);
    printf("値段:%d\n\n", goods[i].price);
  }
}
