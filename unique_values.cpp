#include <iostream>
#include <stack>
#include <vector>



size_t unique(const char* text){
    
    if(text == nullptr)
        throw "No avaible string";
    
    std::string copy(text);
    
    std::sort(copy.begin(), copy.end());
    auto last = std::unique(copy.begin(), copy.end());
    
    return std::distance(copy.begin(), last);
    
}



int main(int argc, const char * argv[]) {
    
   
    std::cout<<unique("1112");
    
    return 0;
}

