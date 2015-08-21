//
//  main.cpp
//  zigzag
//
//  Created by 杜袁茵 on 15/8/19.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//


#include <iostream>
#include "solution.cpp"

int main(int argc, const char *argv[]){
    Solution *s= new Solution();
    std::string result=s->convert("a", 1);
    std::cout << result << std::endl;
    return '0';
};