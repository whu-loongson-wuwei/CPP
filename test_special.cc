#include<iostream>
template<typename... T>
class Test;

template<typename T>
class Test<T*>
{
	public:
		void out(){
			std::cout << "pointer" << std::endl;
		}
};
template<>
class Test<>
{
	public:
		void out(){
			std::cout << "null" <<std::endl;
		}
};

/*class Test
{
    public:
	    void out(){
		    std::cout << "not template" <<std::endl;
	    }

};
*/
template<typename T = float>
void out();

template<typename T>
void out()
{
  std::cout <<"default float"<<std::endl;
}
template<>
void out<int>()
{
	std::cout <<"int" <<std::endl;
}
void out()
{
	std::cout <<"none" <<std::endl;
}
int main()
{
  Test<int*> m;
  m.out();
  Test<> n;
  n.out();
  out();//普通函数
  out<>();//普通模板版本 有一默认模板参数
  out<int>(); // 特化版本
 /* Test q;
  q.out();*/
}
