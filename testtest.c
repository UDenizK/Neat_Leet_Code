#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int num = 1234;
    char str[10];
    sprintf(str,"%d",num);
    printf("%s",str);
}