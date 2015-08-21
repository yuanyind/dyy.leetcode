//
//  main.cpp
//  reverse integer
//
//  Created by 杜袁茵 on 15/8/20.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include "solution.cpp"

int main(int argc, const char * argv[]) {
    
    Solution *s = new Solution();
    int result=s->reverse(1534);
    std::cout<< result << std::endl;
    
    
    return 0;
}
