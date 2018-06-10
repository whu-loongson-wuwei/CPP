#include<iostream>
using namespace std;
template<class T>
void test(const T& r){
 cout << r <<endl;
}

template<class T>
void test(T&& r){
 cout << r << "universal" << endl;
}

int main(){
test(2);
const int s = 5;
test(s);
return 0;
}
