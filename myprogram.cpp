#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "functions.h"

auto main() -> decltype(1){

std::map<int, int > map;
map.insert(std::make_pair(1,2));
map[1] = 3;
sayHello();

for(const auto& it: map)
	std::cout<<it.first<<" "<<it.second<<"\n";

return 1;
}
