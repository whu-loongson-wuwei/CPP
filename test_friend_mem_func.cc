#include<iostream>
template<typename T>
class Test;
template<typename T>
bool operator== (const Test<T>&,const Test<T>&);

template<typename T>
class Test{
	//friend bool operator== <>(const Test&,const Test&);
	template<class Ty>
	friend bool operator== (const Test<Ty>&,const Test<Ty>&);
	private:
		T a;
		T b;
	public:
		Test(const T& m, const T& n):a(m),b(n){}

};

template<typename T>
bool operator==(const Test<T>& t1, const Test<T>& t2){
return t1.a == t2.a && t1.b == t2.b;
}

int main()
{
	Test<int> t1{2,3};
	Test<int> t2{3,2};
	std::cout << (t1 == t2) << std::endl;
}
