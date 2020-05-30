#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> vec;
	int n;
	cin >>n;
	string str;
	
	for(int i=0;i<n;i++)
	{
		cin >>str;
		vec.push_back(str);
	}
	int nn=0;
	
	int num[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char ch[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int sum;
	for(int i=0;i<n;i++)
	{
		sum=0;
		bool sw =false;
		for(int j=0;j<17;j++)
		{
			if(vec[i][j]<'0' || vec[i][j]>'9')sw = true;
			sum += (vec[i][j]-48) * num[j];
		}
		sum%=11;
		if(vec[i][17] != ch[sum] || sw == true)
		{
			cout<<vec[i]<<endl;
			nn++;
		}
	}
	if(nn==0)cout << "All passed";
	
}
