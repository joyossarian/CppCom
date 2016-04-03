template<int N>
struct tricky 
{
	int f (int i = 0)
	{
		// i is not a constant
		// if replace i with N, it will be error
		return (i / N);
	}
};

int main()
{
	// potential divide by 0
	tricky<0> t;
	return t.f();
}


