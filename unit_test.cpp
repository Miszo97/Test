#include <boost/test/minimal.hpp>
#include <vector>
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
    
    if(stack.empty()){
        return true;
        std::cout<<"True";
    }
    
    return false;
}

//____________________________________________________________________________//

int test_main( int argc, char * argv[] )             // note the name!
{
	
	for (int i = 1; i <= argc-1; ++i)
	{
		if(!(check(argv[i])))
			BOOST_ERROR("Order is not correct");
	}

	return 0;

}