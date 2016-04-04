#include<iostream>

using namespace std;

class test
{
	static int count;
	public:
	static void showCount(void)
	{
	cout << "count "<< count <<"\n";
	}
};

int test::count;


int main()
{
	test t1,t2;
	test::showCount();

	return 0;
}



