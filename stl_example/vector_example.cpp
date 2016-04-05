#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
	//define a vector of integer type with size = 5
	// All elements will be initialized to 0
	printf("Declared a vector of size 5\n");
	vector<int> myvector(5);
	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	//Dynamic assignment
	printf("\n\nAssign default value 5 to all elements\n");	
	myvector.assign(myvector.size(),5); // first 100 value to 5
	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	// can directly access vector by index
	printf("\n\nUsing Direct Access\n");
	for(int i=0;i<myvector.size();i++)
		myvector[i] = i;

	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	//Also can be used as stack
	myvector.push_back(101);
	printf("\n\nLast pushed element : %d\n", myvector.back());
	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	myvector.pop_back(); // Remove last element
	printf("\n\nLast element Removed\n");
	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	//can erase/insert at any  point
	vector<int>::iterator it = myvector.begin();
	printf("\n\ninserting value at the begining\n");
	myvector.insert(it,40); 

	//size() will give number of elements present
	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	printf("\n\nErasing value at the begining\n");
	myvector.erase(it); 

	for(int i=0;i<myvector.size();i++)
		printf("%d ",myvector[i]);

	printf("\n\nUsing iterator\n");
	//using iterator for sequential access
	for(it=myvector.begin();it!=myvector.end();it++)
		printf("%d ",*it);

	if(!myvector.empty())
		printf("\n\nVector is not empty. checked using myvector.empty()\n");

	//Defining 2 dimensional vector
	printf("\nDefining 5x5 matrix using vectors\n");
	vector < vector<int> > vector_2d(5,vector <int>(5));
	for(int i=0;i<vector_2d.size();i++)
	{
		for(int j=0;j<vector_2d[i].size();j++)
		{
			vector_2d[i][j] = i + j;
			printf("%d ",vector_2d[i][j]);
		}
			
		printf("\n");
	}

	printf("\n");

	return 0;
}