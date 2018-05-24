#include<iostream>
class A{
	public:
		int a;
		void d(){};
		void d(int,int) = delete;
	private:
		void* d(int) ;
};

int main()
{  
    int a;
    A *c = new(&a)A;
    A d;
    std::cout << d.a << std::endl;
    return 0;
}
