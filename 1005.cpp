#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>

using namespace std;



int main()
{
	
	vector<int> vec;
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin >> t;
		vec.push_back(t);
	}
	
	for(vector<int>::iterator it=vec.begin();it != vec.end();++it)
	{
		
	}
	
}

int _3n(int i)
{
	if(i%2 == 0)
	{
		return i/2;
	}
	return (i*3+1)/2;
}
