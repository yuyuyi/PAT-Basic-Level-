#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int n,m;
	vector<int>vec1,vec2;
	vec1.assign(101,0);
	
	cin >>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		vec1[x]++;
	 } 
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		vec2.push_back(x);
    }
    cout << vec1[vec2[0]];
    for(int i=1;i<m;i++)
	{
		cout << " "<<vec1[vec2[i]];
    }
}
