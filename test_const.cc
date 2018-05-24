#include<iostream>
int main()
{

	int t;
std::cin >> t;
const int d = t;
int *r =(int*) &d;
*r = 6;
int f = d;
std::cout << d << f <<std::endl;
return 0;
}
