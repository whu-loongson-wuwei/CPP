#include<iostream>
using namespace std;
class A{
	public:
		A() = default;
		int c;
		mutable int a; static int b;
		void show() const{
			cout << a;
		}
		void s(){}
		void set1(int b) const {
			a = b;
		}
		void set2(int bb) const{
			b = bb;
		}
	//	void set3(int cc) const{
	//		c = cc;
	//	}  const 成员函数修改非static 非mutable的成员变量
};
int A::b  = 4;
int main(){

	const A as{};//此处就是 mutable的用法，如果一个类中很多不可变的 少数是可变的 就直接定义const 类和 const 成员函数 把那些不可变的标记为mutable.
	as.set2(3);
	as.a = 44;
	as.b = 55;
	//as.c = 66; 通过const对象修改了一般成员
	//as.s();//const 对象调用非const成员函数 调用出错；
	as.set1(4);
	cout << as.a <<endl;

}
