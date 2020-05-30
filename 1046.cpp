#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int n,js=0,ys=0;
	int jhan,jhua,yhan,yhua,sum;
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> jhan >> jhua >> yhan >> yhua;
		sum = jhan+yhan;
		if(jhua == sum && yhua !=sum)ys++;
		else if(jhua != sum && yhua ==sum)js++;
	 } 
	 
	 cout << js << " " << ys;
}
