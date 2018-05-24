#include<iostream>
class A{
	public:
		int a;
		int b;
		void f(){
			std::cout<<a<<std::endl;
		}
};

int main(){
void (A::*f)() = &A::f;
int  A::*a  = &A::a;
int A::*b = &A::b;
std::cout <<a<<" "<<b<<f<<std::endl;
A m;
m.a = 5;
m.f();
return 0;
}
