#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* in a for loop, check first element of all strings,
** by saving the first element of second string and comparing it to first element of other strings, and concatenate it to a str to save it.
** Then repeat the process for second element of first string if first element is common among strings.
*/

char * longestCommonPrefix(char ** strs, int strsSize){
    int i = 0;
    char retstr[100];
    static char *stat_ret;

    
    int el_index = 0;
    for(el_index = 0; strs[1][el_index] != '\0'; el_index++){
        for(int i = 0; i < strsSize; i++){                 
            if (strs[i][el_index] != strs[1][el_index]){
                goto finish;
            }
        }
        retstr[i] = strs[1][el_index];
        i++;
    }
    finish:
    retstr[i] = '\0';
    stat_ret = malloc(sizeof(char)*100);
    strcpy(stat_ret, retstr);
    return stat_ret;
}

int main(){

    char strs[3][10];
    strs[1] = "flower";
    strs[2] = "flow";
    strs[3] = "flight";

    printf("%s",longestCommonPrefix(strs,3));
    return 1;
}