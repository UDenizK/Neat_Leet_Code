/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


#define number_of_digits 10

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    int numbers_l1[number_of_digits] = {0}; /* Initializing array elements with 0 so that when linkedlist are placed and linkedlist */
    int numbers_l2[number_of_digits] = {0}; /* ends, all the remaining elements will be 0 and when summed,                          */
    int sum[number_of_digits+1] = {0};      /* they won't cause any problem                                                         */
                                            /* Number of digits of the sum may be given numbers' digits +1, will be checked later   */

    struct ListNode* n = NULL;

    n = l1;
    int i = 0;

    while (n != NULL){
        numbers_l1[number_of_digits-1-i] = n->val;
        n = n->next;
        i++; 
    }

    n = l2;
    i = 0;

    while (n != NULL){
        numbers_l2[number_of_digits-1-i] = n->val;
        n = n->next;
        i++; 
    }

    // **************************************************************//
    // Here is for debugging
    for(i = 0; i < number_of_digits; i++){
        printf("%d", numbers_l1[i]);
    }
    printf("\n");
    // Here is for debugging
    for(i = 0; i < number_of_digits; i++){
        printf("%d", numbers_l2[i]);
    }
    printf("\n");
    // **************************************************************//

    i = 0;
    int temp_sum = 0;
    bool residue = false;
    while (i < number_of_digits){
        if (!residue){
        temp_sum = numbers_l1[number_of_digits-1-i] + numbers_l2[number_of_digits-1-i];
        }
        else{
        temp_sum = numbers_l1[number_of_digits-1-i] + numbers_l2[number_of_digits-1-i] + 1;
        residue = false;
        }

        if (temp_sum > 9){
            sum[i] = temp_sum - 10;
            residue = true;
        }
        else if (temp_sum <= 9 && temp_sum >= 0){
            sum[i] = temp_sum;
        }
        i++;
    }

    // **************************************************************//
    // Here is for debugging
    for(i = 0; i < number_of_digits; i++){
        printf("%d", sum[i]);
    }
    // **************************************************************//
    struct ListNode* ret_head;
    struct ListNode ret_list[number_of_digits+1];
    ret_head = &(ret_list[0]);

    for(i = 0; i < number_of_digits - 1; i++){
        (ret_list[i])->val = sum[i];
        (ret_list[i])->next = &(ret_list[i+1]);
    }
    ret_list[number_of_digits]->next = NULL;

    return ret_head;
}