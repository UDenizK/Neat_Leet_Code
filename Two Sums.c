#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *index;
    *returnSize = 2;
    index = (int *) malloc(sizeof(int)*2);

    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < i; j++){
            if((nums[i] + nums[j]) == target){
                index[0] = j;
                index[1] = i;
                goto done;
            }
        }
    } 

    done:
    return index;
}

int main(){

    int nums[4] = {2,7,11,15};
    int target = 9;
    int returnSize = 2;
    int* returned_val = NULL;
    returned_val = twoSum(nums, 4, target, &returnSize);

    printf("%d, %d\n", returned_val[0], returned_val[1]);

    return 0;
}