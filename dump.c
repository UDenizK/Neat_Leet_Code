

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** letterCombinations(char * digits, int* returnSize){
    int num_of_comb = 0;
    int len = 0;
                //n -2
    char sources[8][5] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    for(int i = 0; i != '\0', i++){
        len++;
    }
    tri_count = 0;
    four_count = 0;
    for(int i = 0; digits[i] = '\0'; i++){
        if(digits[i] == '7' || digits[i] == '9'){
            four_count += 1;
        }
        else{
            tri_count += 1;
        }
    }
    num_of_comb = (3^tri_count)*(4^four_count);
    char combinations[num_of_comb][len+1];
    
    for(int d = 0; d < len; d++){
        for(int i = 0; sources[(atoi(digits[d])-2)][i] !='\0')
        combinations[]
    }
}