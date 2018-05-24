#include<iostream>
class A;

A dd();

A* func()
{
int a;
return (A*)&a;
}

int main()
{
	A* F = func();
	return 0;
}
