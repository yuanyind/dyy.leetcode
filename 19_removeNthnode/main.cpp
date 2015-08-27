//
//  main.cpp
//  remove Nth node
//
//  Created by 杜袁茵 on 15/8/26.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include "solution.cpp"

void creatList(ListNode* pHead){
    ListNode* p=pHead;
    
    for(int i=1;i<10;i++){
        ListNode* pNewNode=new ListNode(i);
        
        p->next=pNewNode;
        p=pNewNode;
        
    }
}

void destorylist(ListNode* pHead){
    assert(pHead!=NULL);
    ListNode *pNext=pHead->next;
    while(pNext!=NULL){
        delete pHead;
        pHead=pNext;
        pNext=pHead->next;
    }
    delete pHead;
    pHead=NULL;
    return;
}

int main(int argc, const char * argv[]) {
    
    ListNode* head;
    head=new ListNode(0);
    
    creatList(head);
    
    Solution *s=new Solution();
    s->removeNthFromEnd(head, 2);
    
    ListNode *pNext=head->next;
    while(pNext!=NULL){
        std::cout<<head->val<<std::endl;
        head=pNext;
        pNext=head->next;
    }
    std::cout<<head->val<<std::endl;
    
    destorylist(head);
    
    return 0;
}
