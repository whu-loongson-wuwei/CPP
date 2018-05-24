class S{

	public:
		int s;
};
void r(int b)
{
        int a = b;
	S d;
	d.s -= b;
}

void c()
{

	r(4);
}
