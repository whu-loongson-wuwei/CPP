#include<iostream>
using namespace std;
int main()
{
 int a[4]{1,2,3,4};
 int (*b)[4] = &a;
 int *c = a;
 cout <<c<<c+1<< b << b + 1 << endl;
 cout << *c++ <<endl;
 return 0;

}
