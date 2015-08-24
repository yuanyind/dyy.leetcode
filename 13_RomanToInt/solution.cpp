//
//  solution.cpp
//  RomanToInt
//
//  Created by 杜袁茵 on 15/8/23.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;


class Solution {
public:
    int romanToInt(std::string s) {
        
        map<char,int> rtoi;
        rtoi.insert(map<char,int>::value_type('I',1));
        rtoi.insert(map<char,int>::value_type('V',5));
        rtoi.insert(map<char,int>::value_type('X',10));
        rtoi.insert(map<char,int>::value_type('L',50));
        rtoi.insert(map<char,int>::value_type('C',100));
        rtoi.insert(map<char,int>::value_type('D',500));
        rtoi.insert(map<char,int>::value_type('M',1000));
        
        int strlen=s.length();
        int result=0;
        for(int i=0;i<strlen-1;i++){
            if(rtoi[s[i]]<rtoi[s[i+1]]){
                result-=rtoi[s[i]];
            }
            else{
                result+=rtoi[s[i]];
            }
        }
        result+=rtoi[s[strlen-1]];
        return result;
    }
};