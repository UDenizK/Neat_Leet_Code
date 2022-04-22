#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x){
    if(x < 0)
        return false;
    if(x == 0)
        return true;
    
    char* str = NULL;
    int len = 0, digits = x;

    while(digits){
    digits /= 10;
    len++;
    }

    str = (char*)malloc(sizeof(char)*len+1);
    sprintf(str, "%d", x);
    for (int i=0; i < len/2; i++){
        if(str[i] != str[(len-1-i)]){
            free(str);
            return false;
        }
    }
    free(str);
    return true;
}

int main(){

    printf("%d", isPalindrome(121));

    return 0;
}