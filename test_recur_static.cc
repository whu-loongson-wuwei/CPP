#include<sstream>
#include<iostream>

using namespace std;
template<typename T>
void print(const T& value){
	ostringstream ss;
	ss << value;
	cout << ss.str();
	print(value + 1);
}

int main(){
	print(3);
	}
