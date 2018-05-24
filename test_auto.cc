#include<iostream>
#include<vector>
void func(int &&a){
	std::cout << "rvalue"<<a<<std::endl;
}
void func(int &a){
	std::cout << "lvalue"<<a<<std::endl;
}
template<class T>
void F(T&& t){
	func(std::forward<T>(t));
}
std::vector<int>
test(const std::vector<int>& f )
{        std::cout<<"const lref" <<std::endl;
	return f;
}
std::vector<int>
test(std::vector<int>&& f)
{
    std::cout<<"rref" <<std::endl;
    return f;
}
int test(int r)
{ 
	return r;
}
int main(){
	int b = 9;
	auto &r = b;
	auto &&t = 9;
	t = 7;// 通过右值引用修改
	int && e = test(4);
	e = 5;// 通过右值引用可以把一个临时值 或者 字面量变成一个真正的变量
        int *ff = &e; // 也可以取地址
	std::cout << *ff << std::endl;
       
        const int& eee = test(5);
	const int *fff = &eee;// const 左值引用也可以达到类似效果但是无法修改值
        
 	/* 总体来说 右值引用和const 左值引用都是续命*/
        F(9);
	F(b); //完美转发

	F(b);
	F(t);// 依然调用左值引用版本，此处可以看到具名的右值引用本身是个左值
         
        //int &&g = t; t具名是个左值 此处报错
	int &&gg = std::move(b); // 匿名右值引用是个右值
        int &g = gg;
	g = 55;//几次引用传递依然可以修改真正指向的值
	std::cout << b << std::endl;

	for(auto &&d : test(std::vector<int>{1,2,3})) // 此处推导出来的是一个左值引用版本
	{// test 参数为const 型绑定到右值 或者重载一个右值引用版本的test函数
	 // auto &&x T &&x 通用引用类型加上一点修饰之后就变成右值引用比如加上const 此处会报错
		std::cout << d  <<std::endl;
		d = 4;
	}
	return 0;
}

