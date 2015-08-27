//
//  main.cpp
//  validParenthess
//
//  Created by 杜袁茵 on 15/8/27.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include "solution.cpp"

int main(int argc, const char * argv[]) {
    
    Solution *s=new Solution();
    bool result=s->isValid("{)[]");
    std::cout<<result<<std::endl;
    
    return result;
}
