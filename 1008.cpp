#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int num[100];
	int n,m;
	cin >> n >> m;
	
	for(int i=0;i<n;i++)
	{
		cin >> num[i];
	}
	int k;
	int z=n;
	if(m!=0 && n-m>0) k = n-m;
	else if(n-m <0)
	{
		while(n-m <0)
		{
			n+=z;
		}
		k=n-m;
	}
	else k =0;
	
	for(int i=0;i<z-1;i++)
	{
		cout << num[k]<< " ";
		k++;
		if(k>z-1)k=0;
	}
	cout << num[k];
}
