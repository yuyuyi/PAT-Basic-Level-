#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> vec;
	int n;
	cin >> n;
	string str;
	
	for(int i=0;i<n;i++)
	{
		cin >> str;
		vec.push_back(str);
	}
	
	for(int i=0;i<n;i++)
	{
		int p=0,a1=0,a=0,a3=0,t=0;
		for(int j=0;j<vec[i].length();j++)
		{
			if(vec[i][j]=='P' && a==0 && t==0)p++;
			else if(vec[i][j]=='T'&& a>=1 && p==1)t++;
			else if(vec[i][j]=='A'&& t==0 && p==1)a++;
			else if(vec[i][j]=='A')
			{
				if(p==0)a1++;
				else if(p==1 && t==1)a3++;
			}
			else
			{
				p=100;
			}
		}
		if(p==1 && a>=1 && t==1 && a1*a==a3)
			cout << "YES"<<endl;
		else 
			cout << "NO"<<endl;
	}
}
