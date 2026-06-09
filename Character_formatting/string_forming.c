#include <stdio.h>
#include <string.h>
int main()
{
    FILE* fp;
    char fname[];
    char chr;
    int i=0,n;

    fp = fopen(fname, "r");
    if(fp == NULL) {
        printf("%s file not open!\n", fname);
        return -1;
    }
/*
    while((chr = fgrtc(fp)) != EOF) {
        putchar(chr);
    }
*/
    fclose(fp);
  
    // 01234...と表示
    for (i = 1; i < n; i++) {
        printf("%d", i % 10);
    }

    return 0;
}