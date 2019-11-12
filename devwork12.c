#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fout;
  fout = fopen("goods2.txt", "w");
  int c;
  while((c = getc(stdin)) != -1){
    putc((char)c, fout);
  }
}
