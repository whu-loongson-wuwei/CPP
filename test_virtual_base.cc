class A{
	public:
		int a;
};
class B:virtual public A{
	public:
		int b;

};
void F()
{
  B b;
  A* a = &b;
}
