#include <vector>
#include <iostream>

using namespace std;

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

template<typename T>
struct instance_of
{
	typedef T type;

	instance_of(int = 0)
	{
		
	}
};

// selector
template<bool PARAMETER>
struct selector
{
};

typedef selector<true> true_type;
typedef selector<false> false_type;

template<typename T, int pow = 1>
struct SelFunc
{
	static void f(const T& v)
	{
		cout << v << endl;
	}
};

template<typename T>
struct SelFunc<T, 2>
{
	static void f(const T& v)
	{
		cout << v * v << endl;
	}
};

int main()
{
	// potential divide by 0
	//tricky<0> t;

	vector<bool> bitset_t(32);
	bitset_t[10] = true;

	const instance_of<int> I_INT = instance_of<int>();
	const instance_of<double> I_DOUBLE = 0;

	//return t.f();

	double d = 3.14;
	SelFunc< double>::f(d);
	SelFunc< double, 2>::f(d);

	
}


