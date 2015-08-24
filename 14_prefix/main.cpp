//
//  main.cpp
//  prefix
//
//  Created by 杜袁茵 on 15/8/23.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <vector>
#include "solution.cpp"

int main(int argc, const char * argv[]) {
    Solution *s=new Solution();
    std::vector<std::string> strTest={"abc","a","a"};
    std::string result=s->longestCommonPrefix(strTest);
    std::cout<<result<<std::endl;
    return 0;
};