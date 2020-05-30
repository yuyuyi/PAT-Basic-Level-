#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int P=0;
	long long PA=0; 
	
	string str;
	
	cin >>str;
	long long res=0;
	for(int i=0;i<str.length();i++)
	{
		switch(str[i])
		{
			case 'P':P++;break;
			case 'A':PA+=P;break;
			case 'T':res+=PA;break;
			default: break;	
		}
	}
	if(res>=1000000007)res%=1000000007;
	cout << res;
}
