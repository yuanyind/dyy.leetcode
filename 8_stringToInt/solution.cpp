//
//  solution.cpp
//  stringToInt
//
//  Created by 杜袁茵 on 15/8/21.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include  <iostream>

class Solution {
public:
    int myAtoi(std::string str) {
        
        for(int i=0;i<str.length();i++){
            if(!isspace(str[i])){               //if not white space, into loop
                if(!('0'<=(str[i])&&str[i]<='9')){
                    if(str[i]=='+'||str[i]=='-'){
                        i++;
                        if(!('0'<=str[i]&&str[i]<='9')){
                            break;
                        }
                    }
                }
                
                int flag=1;                 //minus or plus
                if (str[i-1]=='-') {
                    flag=-1;
                }
                
                //my atoi
                long int cvertInt=0;
                while('0'<=str[i]&&str[i]<='9' && INT32_MIN<=cvertInt && cvertInt<=INT32_MAX){
                    cvertInt=cvertInt*10+flag*(str[i]-'0');
                    i++;
                }
                if(cvertInt<INT32_MIN){
                    return INT32_MIN;
                }
                else if (cvertInt>INT32_MAX){
                    return INT32_MAX;
                }
                else{
                    return cvertInt;
                }
            }
        }
        
        return 0;
    }
};