//
//  solution.cpp
//  reverse integer
//
//  Created by 杜袁茵 on 15/8/20.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        
        long long rvsInt=0;
        while(x!=0){
            rvsInt=10*rvsInt+x%10;
            x=x/10;
        }
        
        int result=0;
        if(INT_MIN<= rvsInt && rvsInt<=INT_MAX){
            return rvsInt;
        }
        
        return result;
        
    }
};
