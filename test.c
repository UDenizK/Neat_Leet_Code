#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x){
    if(x < 0)
        return false;
    if(x == 0)
        return true;
    int digits = x, len = 0;

    while(digits){
    digits /= 10;
    len++;
    }
    len++;

    char* str, *str_2   ;
    str = (char*)malloc(sizeof(char*)*len);
    sprintf(str,"%d",x);

    str_2 = (char *)malloc((sizeof(char*)*len/2)+1);

    for(int i = 0; i < (len-1)/2; i++){
        str_2[i] = str[len -2 -i];
    }
    str[(len-1)/2] = '\0';
    if(strcmp(str, str_2))
        return false;
    else
        return true;
}

int main(){
    printf("%d", isPalindrome(121));
}

int mannin(){
    char str[] = "634252";
    char str_2[7] = "000000";
    int len = 7;
    for (int i = 0; i < len-1; i++){
        str_2[i] = str[len-2-i];
    }
    printf("%s\n%s\n", str, str_2);
    printf("%d", strcmp(str, str_2));
}

int manin(){
    int len = 0, digits = 321123, x = 321123;
    char* str, *str_2;

    while(digits){
    digits /= 10;
    len++;
    }
    len++;

    str = (char*)malloc(sizeof(char)*len);
    str_2 = (char*)malloc(sizeof(char)*len);
    sprintf(str, "%d", x);

    printf("%s\n%s",str, str_2);

}