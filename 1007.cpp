#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	int n;
	int ts=3,tt=2;
	int all = 0;
	
	cin >> n;
	
	for(int i=5;i<=n;i++)
	{
		int flag =0;
		
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			tt = ts;
			ts = i;
			
			if(ts-tt == 2)
			{
				all++;
			}
		}
	}
	
	cout << all;
}
