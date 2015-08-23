//
//  solution.cpp
//  Palindrome
//
//  Created by 杜袁茵 on 15/8/23.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include<vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        if(x==0){
            return true;
        }
        
        int tempX=x;
        int count=1;
        
        
        while(tempX>=10){
            tempX/=10;
            count*=10;
        }
        
        int leftDig=0;
        while (count>=10) {
            leftDig=x/count;
            if (leftDig!=x%10) {
                return false;
            }
            x-=leftDig*count;
            x/=10;
            count/=100;
        }
        
        return true;
    }
};