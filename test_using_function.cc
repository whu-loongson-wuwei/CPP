#include<iostream>
void func()
{
	std::cout <<"test" <<std::endl;
}

int main(){
	using Func = void();
	Func* n = func;
        decltype(func)* m = func;
	n();
}
