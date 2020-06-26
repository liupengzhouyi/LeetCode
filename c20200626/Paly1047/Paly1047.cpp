//
// Created by 刘鹏 on 2020/6/26.
//

#include "Paly1047.h"

::std::string Paly1047::removeDuplicates(::std::string S) {
    ::std::stack<char> myStack;
    for (auto i = 0; i < S.length(); i++) {
        if (myStack.empty()) {
            myStack.push(S[i]);
            continue;
        }
        if (myStack.top() == S[i]) {
            if (!myStack.empty()) myStack.pop();
        } else {
            myStack.push(S[i]);
        }
    }
    ::std::string returnStr = "";
    auto length = myStack.size();
    for (int i = 0; i < length; i++) {
        returnStr = myStack.top() + returnStr;
        myStack.pop();
    }
    return returnStr;
}


