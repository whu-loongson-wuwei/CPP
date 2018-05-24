#include<iostream>
int main()
{
	int a = 5;
	int &b = a;
	int &&c = 6;
	b = c;
	// 右值引用本身是个左值
	int &&d =(int&&)(c);
	std::cout << b << c << d << std::endl;
}
