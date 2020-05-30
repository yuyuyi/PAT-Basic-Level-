#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	int n,m;
	
	cin >> n >> m;
	int j=0;
	int yh=0;
	int fir =0;
	for(int i=1;j<=m+1;i++)
	{
		int flag =1;
		for(int k=2;k<=sqrt(i);k++)
		{
			if(i%k==0)
			{
				flag = 0;
				break;
			}
			
		}
		if(flag == 1)
		{
			j++;
			if(j>n && j<=m+1)
			{
				if(fir==0)
				{
					fir =1;
					cout << i;
					yh++;
					
				}
				else if(yh >9)
				{
					yh=0;
					cout << endl;
					cout << i;
					yh++;
				}
				else
				{
					yh++;
					cout << " " << i;
				}
			}
			
			
		}
		
		
		
		
	 } 
}
