//
//  solution.cpp
//  remove Nth node
//
//  Created by 杜袁茵 on 15/8/26.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <list>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        
        ListNode *p1=head;
        ListNode *p2=head;
        
        for(int i=0;i<n;i++){
            p1=p1->next;
        }
        
        while(p1==NULL){
            return head->next;
        }
        
        while(p1->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }
        p2->next=p2->next->next;
    
        return head;
    }
};
