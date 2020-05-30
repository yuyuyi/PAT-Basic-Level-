#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<stdio.h>
using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	map<int,int>mp;
	int maxd,max=0;
	int n;
	cin >> n;
	int d,cy,cj;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d-%d %d",&d,&cy,&cj);
		mp[d]+=cj;
		if(mp[d]>max)
		{
			max = mp[d];
			maxd = d;
		}
	}
	
	cout << maxd << " " << max; 
}
