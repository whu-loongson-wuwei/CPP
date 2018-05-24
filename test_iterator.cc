#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a{1,3,5,6};
	vector<int>::reverse_iterator ai = a.rbegin();
	cout <<*(++ai)<<*(--ai)<<endl;
	vector<int>::const_iterator ci = a.begin();
	cout <<*ci<<endl;
	return 0;
}
