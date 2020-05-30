#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	char ch;
	
	cin >> n >> ch; 
	
	if(n%2!=0)
	{
		for(int i=0;i<n/2+1;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i==0||i==n/2) || (j==0||j==n-1))
				{
					cout << ch;
				}
				else
				{
					cout << " ";
				}
			}
			cout <<endl;
		} 
	}
	
	if(n%2==0)
	{
		for(int i=0;i<n/2;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i==0||i==n/2-1) || (j==0||j==n-1))
				{
					cout << ch;
				}
				else
				{
					cout << " ";
				}
			}
			cout <<endl;
		} 
	}
}
