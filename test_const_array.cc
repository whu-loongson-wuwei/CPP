#include<vector>
int main(){

	const int a[3]={1,2,3};
	//a[2] = 1 // error
	const std::vector<int> b[3]{{1},{1,1},{1}};
	b[0].push_back(3);//error 传入push_back的this 指针是const 只能调用const 成员函数
	return 0;
}
