#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n=0,max = 0,min=999;
	string mamc,maxh,mimc,mixh;
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		int cj;
		string mc,xh;
		
		cin >> mc >> xh >> cj;
		
		if(cj>=max)
		{
			max = cj;
			mamc = mc;
			maxh = xh;
		}
		
		if(cj<=min)
		{
			min = cj;
			mimc = mc;
			mixh = xh;
		}
	}
	
	cout << mamc << " " << maxh << endl << mimc << " " << mixh;
}
