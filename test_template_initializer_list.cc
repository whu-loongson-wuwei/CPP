#include<iostream>
#include<initializer_list>
#include<utility>
using namespace std;

/*
template<class... T>
void test(T&&... Args);
*/

template<class T>
void test(T&&  arg){
cout << std::forward<T>(arg)<<endl;
}

template<class TT,class... T>
void test(TT&& Args,T&&... args){//注意变长参数放在最后
      cout << std::forward<TT>(Args)<<endl;
      test(std::forward<T>(args)...);
}

int main(){
test(1,2,3,4,5,6,6);
return 0;
}
