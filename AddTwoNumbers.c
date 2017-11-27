//
//  AddTwoNumbers.c
//  算法
//
//  Created by Apple on 2017/11/25.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = l1;
    while (l1 != NULL) {
        if (l1->val + l2->val < 10) {
            l1->val = l1->val + l2->val;
        }else {
            l1->val = (l1->val + l2->val) - 10;
            if (l1->next != NULL) {
                l1->next->val += 1;
            }else {
                
                
            }
        }
        if (l1->next == NULL && l2->next != NULL) {
            l1->next = l2->next;
            l2->next = NULL;
            break;
        }
        
        if (l2->next == NULL && l1->next != NULL) {
            l1 = l1->next;
            while (l1 != NULL) {
                if (l1->val >= 10) {
                    l1->val = l1->val - 10;
                    if (l1->next != NULL) {
                        l1->next->val += 1;
                    }else {
                        struct ListNode *l = (struct ListNode *)malloc(sizeof(struct ListNode));
                        l->val = 1;
                        l1->next = l;
                        l->next = NULL;
                    }
                }
                l1 = l1->next;
            }
            break;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    
    return head;
}



