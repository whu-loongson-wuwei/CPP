#include<iostream>
#include<string>
#include<vector>
int main(){
std::string first_line;
std::string second_line;
getline(std::cin,first_line);
getline(std::cin,second_line);
int N = first_line[0]-'0';
int K = first_line[2]-'0';
std::cout<<N<<" "<<K<<std::endl;
std::vector<int> nums;
for(int i=0;i<(2*N-1);++i){
  nums.push_back(second_line[i++]-'0');
  std::cout<<nums[i/2]<<std::endl;
}
}
