#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string shoes[N], company, size, color,type;
	map <string, int> all_shoes;
	map<string,int>::iterator it;
	map<string,int>::iterator it2;

	for(int i=0;i<N;i++)
	{
		cin >> company >> size >> color >> type;
		shoes[i] = company + " " + size + " " + color + " " + type;

		if(all_shoes.find(shoes[i]) != all_shoes.end())
			all_shoes[shoes[i]] += 1;
		else
			all_shoes[shoes[i]] =1;
	}

	int pairs = 0;
	 for (it=all_shoes.begin(); it!=all_shoes.end(); ++it)
	 {
	 	string first_shoe = it->first;
	 	if(first_shoe[first_shoe.size()-1] == 'L')
	 		string matching_shoe = first_shoe.substr(0,first_shoe.size()-1) + "R";

	 	if(first_shoe[first_shoe.size()-1] == 'R')
	 		string matching_shoe = first_shoe.substr(0,first_shoe.size()-1) + "L";

	 	if(all_shoes.find(matching_shoe)!= all_shoes.end())
	 	{
	 		it2 = all_shoes.find(matching_shoe);
	 		pairs +=  min(it->second, it2->second);
	 		all_shoes.erase(it2);
	 	}

	 }
	 cout << pairs << endl;
	return 0;
}