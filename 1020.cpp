#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;

struct sp
{
	double num,dj;
};

bool com(sp s1,sp s2)
{
	return s1.dj > s2.dj;
}

int main()
{
	std::ios::sync_with_stdio(false);
	
	vector<sp> vec;
	
	int n;
	double m;
	double x;
	cin>>n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		sp sh;
		sh.num=x;
		vec.push_back(sh);
	}
	for(int i=0;i<n;i++)
	{
		cin >> x;
		vec[i].dj=x/vec[i].num;
	}
	
	sort(vec.begin(),vec.end(),com);
	
	double res=0;
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i].num > m)
		{
			res+= m*vec[i].dj;
			break;
		}
		else
		{
			m-=vec[i].num;
			res+=vec[i].num*vec[i].dj;
		}
	}
	
	printf("%.2f",res);
	
}
