#include<iostream>
void ff()
{
  std::cout<<"fff"<<std::endl;
}
int main()
{
void(&f)() = ff;
f();
return 0;

}
