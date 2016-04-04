#include<iostream>
using namespace std;
 
int &fun()
{
    int x;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun() << endl;
    fun() = 25;
    cout << fun() << endl;
	
    return 0;
}
