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
    int sum[number_of_digits] = {0};        /* they won't cause any problem                                                         */

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
    // Here is for debugging
    for(i = 0; i < number_of_digits; i++){
        printf("%d", numbers_l2[i]);
    }
    // **************************************************************//

    i = 0;

    while (i < number_of_digits){
        
    }

    return 0;
}