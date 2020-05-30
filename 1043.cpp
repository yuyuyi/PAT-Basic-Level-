#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	
	string str;
	
	cin >> str;
	
	int num[6]={0,0,0,0,0,0};
	int all=0;
	
	for(int i=0;i<str.length();i++)
	{
		switch(str[i])
		{
		case 'P':num[0]++;all=(num[0]>all)?num[0]:all;break;
		case 'A':num[1]++;all=(num[1]>all)?num[1]:all;break;
		case 'T':num[2]++;all=(num[2]>all)?num[2]:all;break;
		case 'e':num[3]++;all=(num[3]>all)?num[3]:all;break;
		case 's':num[4]++;all=(num[4]>all)?num[4]:all;break;
		case 't':num[5]++;all=(num[5]>all)?num[5]:all;break;
		default:break;
		}
	}
	
	for(int i=0;i<all;i++)
	{
		if(num[0]>0)
		{
			cout << "P";
			num[0]--;
		}
		if(num[1]>0)
		{
			cout << "A";
			num[1]--;
		}
		if(num[2]>0)
		{
			cout << "T";
			num[2]--;
		}
		if(num[3]>0)
		{
			cout << "e";
			num[3]--;
		}
		if(num[4]>0)
		{
			cout << "s";
			num[4]--;
		}
		if(num[5]>0)
		{
			cout << "t";
			num[5]--;
		}
		
	}
}
