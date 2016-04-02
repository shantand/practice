#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int bsrch(int a[], int val, int start, int end)
{
	if(start > end) return -1;

	int mid = (start+end)/2;
	if(a[mid] == val) return mid;

	else if(a[mid] < val) return bsrch(a,val,mid+1,end);

	else return bsrch(a,val,start,mid-1);
}


int main()
{
	int a[] = {1,2,4,6,7};
	int n = 5;
	printf("%d\n", bsrch(a, 7, 0, n ) ); 
	return 0;

}