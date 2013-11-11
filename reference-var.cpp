#include<iostream>
using namespace std;
int main()
{
	int total =0;
	int &sum = total;
	
	sum = sum+5;
	cout << sum << " "<< total << endl;
	return 0;
}
