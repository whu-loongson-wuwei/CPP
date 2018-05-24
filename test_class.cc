#include<iostream>
#include<new>
class A;
class A
{
 public:
	 A(int n):m(n){}
	 int m;
};

int main(){
A *z = (A*)operator new(sizeof(A));
new(z)A(2); 
std::cout<<z->m<<std::endl;
return 0;
}
