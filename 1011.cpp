#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++) 
	{
		double a,b,c;
		cin >> a >> b >> c;
		if(a+b>c)
		{
			cout << "Case #" << i+1 << ": " << "true"<<endl;
		}
		else
		{
			cout << "Case #" << i+1 << ": " << "false"<<endl;
		}
	}
}
