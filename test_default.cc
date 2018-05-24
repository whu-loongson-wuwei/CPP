#include<iostream>
struct A{
	int a;
	A() = default;
	A(const struct A&){std::cout<<"A copy construct"<<std::endl;}
	const A& operator =(const struct A&){
		std::cout<<"A assign"<<std::endl;
	      return *this;}
};
struct B{
	int b;
	struct A c;
};

int main(){
struct B m;
struct B n = m;
struct B q;
q = n;
}
