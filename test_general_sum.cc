#include<sstream>
#include<iostream>
#include<string>
using namespace std;

template<class T>
T str2other(const string& str){
	stringstream ss;
	ss << str;
	T t;
	ss >> t;
       return t;
}

int main()
{
  string str;
  cout << ">>> ";
  while(getline(cin,str)){
	 stringstream ss;
	 ss << str;
	 string single;
	 int sum = 0;
	 while(getline(ss,single,',')){
		 stringstream strs;
		 strs << single;
		 int d;
		 strs >> d;
		 sum += d;
	 }
	 cout <<">>> "<< sum << endl <<">>> ";
  }
  return 0;
}
	 
