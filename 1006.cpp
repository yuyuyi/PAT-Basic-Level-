#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int g=n%10;
	int s=n/10%10;
	int b=n/100;
	
	for(int i=0;i<b;i++)
	{
		cout << "B";
	}
	for(int i=0;i<s;i++)
	{
		cout << "S";
	}
	for(int i=1;i<=g;i++)
	{
		cout << i;
	}
}
