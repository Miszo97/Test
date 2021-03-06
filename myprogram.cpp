#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "functions.h"

//Changes by hotfix 1 #1 #2
//Changes by master's branch

template <typename T, int i>
T Double(T num){
	return num +  i;
}

//changes ny hotfix2 #1 #2
//auto return sice c++11 by master
auto main() -> decltype(1){

std::map<int, int > map;
map.insert(std::make_pair(1,2));
map[1] = 3; //less efficient 
sayHello();

//Printing all values by hotfix
for(const auto& it: map)
	std::cout<<it.first<<" "<<it.second<<"\n";

return 1;
}
