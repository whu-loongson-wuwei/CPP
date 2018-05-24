#include<iostream>
/// c++ 11 有unscoped scoped 两种形式的enum
enum NODE : unsigned{
A,
B = 0,
C
};

int main()
{

	std::cout <<A<< C<<std::endl;
	return 0;
}
