#include<iostream>
template<typename T>
void func(T param)
{
  std::cout << "non ref" <<std::endl;
}

template<typename T>
void func(T& param)
{
  std::cout << "ref" <<std::endl;
}

int main()
{
   int a;
   func(a);
   return 0;
}

