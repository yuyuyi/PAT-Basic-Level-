#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	vector<int>vec;
	for(int i=0;i<10;i++)
	{
		int x;
		cin >>x;
		for(int j=0;j<x;j++)
		{
			vec.push_back(i);
		}
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
	{
		if(vec[0]!=0)break;
		if(vec[i]!=0)
		{
			int k=vec[0];
			vec[0]=vec[i];
			vec[i]=k;
		}
	}
	
	for(int i=0;i<vec.size();i++)
	{
		cout << vec[i];
	}
	
}
