//
//  solution.cpp
//  zigzag
//
//  Created by 杜袁茵 on 15/8/19.
//  Copyright (c) 2015年 杜袁茵. All rights reserved.
//

#include <iostream>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        int slen=s.length();
        if(slen<=1||numRows<=1){
            return s;
        }

        std::string *outstr=new std::string[numRows];

        int row=0;
        int drct=1;
        for (int i=0; i<slen; i++) {
            outstr[row].push_back(s[i]);
            row+=drct;
        
            if(row>=numRows){
                row=numRows-2;
                drct=-1;
            }
        
            if(row<0){
                row=1;
                drct=1;
            }
        }
        
        std::string restr="";
        for (int i=0; i<numRows; i++) {
          
            restr+=outstr[i];
        }
        delete []outstr;
        
        return restr;
        
    }
};
