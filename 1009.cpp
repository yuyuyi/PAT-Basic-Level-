#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int all=0;
	string str;
	
	getline(cin,str);
	
	int num[100][2];
	num[0][0] = 0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] ==' ')
		{
			all++;
			num[all][0] = i+1;
			num[all-1][1] = i-1;
		}
	}
	num[all][1]=str.length()-1;
	
	
	for(int i=all;i>0;i--)
	{
		for(int j=num[i][0];j<=num[i][1];j++)
		{
			cout << str[j];
		}
		cout << " ";
	}
	for(int j=num[0][0];j<=num[0][1];j++)
		{
			cout << str[j];
		}
}
