#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char * intToRoman(int num){

    char comb[][3] = {"IV","IX","XL","XC","CD","CM"};
    int comb_val[] = {4, 9, 40, 90, 400, 900};

    int digits[len], mul_factor[len], temp = 0;
    char num_str[5], *temp_ptr;
    sprintf(num_str,"%d",num);

    int len = 0;
    for(int i = 0; num_str[i] != '\0'; i++){
        len++;
    }

    for(int i = 0, mul_factor[len-1] = 0; i < len-1; i++){
        mul_factor[len -2 -i] = mul_factor[len -1 -i] + 1;
    }

    for(int i = 0; i < len ; i++){
        strtol(num_str[i],&temp_ptr ,10) //*/*/*//**/*/*/*/*/**/*/*/*/*/*/*/*/*
        digits[i] = ;
    }

    for(int i = 0; i < len; i++){
        printf("%d -- %d"digits[i], mul_factor[i]);
    }
}

    for(int i = 0; i < len ; i++){
        if(digits[i] == 9 && mul_factor[i] 
    }


