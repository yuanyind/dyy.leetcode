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
        
        int count=0;
        std::vector<int> DigNum;
        
        for(int i=0;x!=0;i++){
            DigNum.push_back(x%10);
            x=x/10;
            count++;
        }
        
        for(int i=0;i<=count/2;i++){
            
            if (!(DigNum[i]==DigNum[count-1-i])) {
                return false;
            }
        }
        DigNum.clear();
        return true;
    }
};