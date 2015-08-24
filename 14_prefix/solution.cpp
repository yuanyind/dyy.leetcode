//
//  solution.cpp
//  prefix
//
//  Created by 杜袁茵 on 15/8/23.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if(strs.empty()){
        return "";
    }
    for(int i=0;i<strs[0].length();i++){
        for(int j=1;j<strs.size();j++){
            if(strs[0][i]!=strs[j][i]){
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}
};
