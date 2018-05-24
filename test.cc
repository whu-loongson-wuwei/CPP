#include<iostream>
class T{
	public:
 T(const T& t){
		a = t.a;
	}
	void Print(){
		std::cout << a <<std::endl;
	}
	private:

	int a;
};

int main(){
	int f = 4;
	T *d = (T*)&f;
	T n = *d;
	n.Print();
}
