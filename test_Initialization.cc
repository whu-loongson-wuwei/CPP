#include<iostream>
class A{
	public:
		explicit A(int a)
		{
		   c = a;
	   	   std::cout << "constructor"<<std::endl;	   
		}
		A(const A& o){
		   c = o.c;
                   std::cout<< "copy constructor" << std::endl;
		}
	public:
		int c;

};

class A Foo(int a)
{
	A m(a);
	m.c = ++a;
	std::cout <<&m<<std::endl;
	return m;
}

int main()
{
  A t1 = Foo(2);
 std::cout<<"one"<<std::endl;
  A t2(4);
  t2 = Foo(3);
  return 0;
}
