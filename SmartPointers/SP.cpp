#include <memory>
#include <iostream>

using namespace std;

class Foo
{
public:
	Foo()
	{
		++FooCount;
	}

	~Foo()
	{
		cout << "destroy Foo object " << FooCount << endl;
	}

	static int FooCount;
};

int Foo::FooCount = 0;

int main()
{
	unique_ptr<Foo> up1 = make_unique<Foo>();
	shared_ptr<Foo> sp = shared_ptr<Foo>(std::move(up1));
	

}