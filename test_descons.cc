class Base{
	public:
		virtual ~Base(){}
};

class Derived:public Base{
	public:
		~Derived(){}
};
int main()
{
  Base *b = new Derived;
  delete b;
  return 0;
}
