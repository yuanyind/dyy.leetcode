//
//  solution.cpp
//  validParenthess
//
//  Created by 杜袁茵 on 15/8/27.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(std::string s) {
       
        map<char,int> isPrt;
        isPrt.insert(map<char,int>::value_type('{',1));
        isPrt.insert(map<char,int>::value_type('[',2));
        isPrt.insert(map<char,int>::value_type('(',3));
        isPrt.insert(map<char,int>::value_type(')',-3));
        isPrt.insert(map<char,int>::value_type(']',-2));
        isPrt.insert(map<char,int>::value_type('}',-1));
        
        
        if(s[0]<0||s.length()%2==1){
            return false;
        }
        
        for(int i=0;i<s.length();i++){

            if(isPrt[s[i]]<0){
                if(isPrt[s[i-1]]+isPrt[s[i]]==0){
                    s.erase(i-1, 2);
                    i-=2;
                }
               
            }
        }
        if(s.length()!=0){
            return false;
        }
        
        return true;
    }
};
