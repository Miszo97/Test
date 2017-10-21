#include <iostream>
#include <vector>
#include <algorithm>
//Changes by master's branch
template <typename T, int i>
T Double(T num){
	return num +  i;
}


auto main() -> decltype(1){

std::vector<int> v {1,2,3};
std::vector<int> v2 (v.size());
std::transform(v.begin(),v.end(), v2.begin(), Double<int, 5>);

for(const auto& a: v2)
	std::cout<<a;

std::cout<<"\n";


return 1;
}
