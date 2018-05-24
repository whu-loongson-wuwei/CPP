int a;
int&& F(){
return a;
}
int main()
 {      
	F() = 3;
	return 0;
}
