#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int romanToInt(char* s){

    int i = 0;

    char *checkstr = malloc(sizeof(char)*3);
    int ret_val = 0;
    checkstr[2] = '\0';
    checkstr[0] = s[0];
    checkstr[1] = s[1];
    char comb[][3] = {"IV","IX","XL","XC","CD","CM"};
    int comb_val[] = {4, 9, 40, 90, 400, 900};
    bool comb_exist = false;

    for(i = 0; s[i] != '\0'; i++){              //checks if combination exist, if exists adds combination's value, if not adds single roman's value.
        checkstr[0] = s[i];
        checkstr[1] = s[i+1];
        
        for(int j = 0; j < 6; j++){
            if( !strcmp(comb[j],checkstr) ){
                ret_val += comb_val[j];
                comb_exist = true;
                break;
            }
        }
        if(comb_exist){
            comb_exist = false;
            i++;
            continue;
        }
        else{
            int roman_val = 0;
                        switch(s[i]){
                case 'I':
                    roman_val = 1;
                    break;
                case 'V':
                    roman_val = 5;
                    break;
                case 'X':
                    roman_val = 10;
                    break;
                case 'L':
                    roman_val = 50;
                    break;
                case 'C':
                    roman_val = 100;
                    break;
                case 'D':
                    roman_val = 500;
                    break;
                case 'M':
                    roman_val = 1000;
                    break;
                }
            ret_val += roman_val;
        }
    }
    free(checkstr);
    return ret_val;
}


int main(){

    printf("%d", romanToInt(""));

    return 1;
}