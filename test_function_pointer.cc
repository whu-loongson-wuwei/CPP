void call(void)
{
}
int main()
{
	void (*c)(void)  = call;

	c();
}
