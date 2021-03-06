//
//  main.cpp
//  BiggerEveryDay
//
//  Created by Miszo on 02.10.2017.
//  Copyright © 2017 Miszo. All rights reserved.
//

#include <iostream>
#include <stack>


bool check(const std::string& input){
    
    std::stack<char> stack;
    
    for (int i = 0; i!=input.size(); ++i) {
        char temp = input[i];
        if (temp == '(' || temp == '[' || temp == '{')
            stack.push(temp);
        else if(stack.empty()) return false; else

            switch (temp) {
                case ')':
                    if(stack.top() != '(') return false; else stack.pop();
                    break;
                case ']':
                    if(stack.top() != '[') return false; else stack.pop();
                    break;
                case '}':
                    if(stack.top() != '{') return false; else stack.pop();
                    break;
                    
                default:
                    break;
            }
        
        
    }
    
    if(stack.empty())
        return true;
    
    return false;
}

int main(int argc, const char * argv[]) {
    
    std::cout<<check("[()]{}{}");
    
    
    return 0;
}
