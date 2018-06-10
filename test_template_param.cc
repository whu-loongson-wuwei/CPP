#include<iostream>
#include<vector>
#include<initializer_list>

using namespace std;

template<class T>
class Test;
template<class T>
class Test
{
	public:
	Test(initializer_list<T> r){
	  for(const T&& x : r){//此处会发生右值引用绑定到左值的错误
	   cout << x << endl;
	   }
	}
};
int main(){
        auto a = {1,2,3,4};
	Test<int> t(a);
        return 0;
}

