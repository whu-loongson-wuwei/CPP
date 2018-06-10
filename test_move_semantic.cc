#include<iostream>
using namespace std;
class Test{
    private:
	int a;
	float b;
    public:
	Test(Test& other){
	    cout << "copy constructor" << endl;    
	}
	Test(Test&& other){
	    cout << "move constructor" << endl;
	}
	Test(int aa, float bb):a(aa),b(bb){
	    cout << "initialize constructor" << endl;
	}

};
Test
make(int a ,int b){

     Test n(a,b);
     return n;
}
void
make(Test t){
     cout <<"make test"<<endl;
}
int main(){
Test t(4,3);


cout <<"----------------"<<endl;
Test  q = t;
cout <<"----------------"<<endl;
Test  n = make(4,5);
cout <<"----------------"<<endl;
Test  rq(make(5,6));
cout <<"----------------"<<endl;
make(q);
cout <<"----------------"<<endl;
make(Test(8,9));
return 0;
}
/********************************************************
cpp git:(master) ✗ g++ -std=c++11 -fno-elide-constructors test_move_semantic.cc
➜  cpp git:(master) ✗ ./a.out
initialize constructor
----------------
copy constructor
----------------
initialize constructor
move constructor
move constructor
----------------
initialize constructor
move constructor
move constructor
----------------
copy constructor
make test
----------------
initialize constructor
move constructor
make test
➜  cpp git:(master) ✗ g++ -std=c++11  test_move_semantic.cc
➜  cpp git:(master) ✗ ./a.out
initialize constructor
----------------
copy constructor
----------------
initialize constructor
----------------
initialize constructor
----------------
copy constructor
make test
----------------
initialize constructor
make test
➜  cpp git:(master) ✗
*****************************************************/
