#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	string str1,str2,res1="";
	vector<int> vec1;
	vec1.assign(127,0);
	
	getline(cin,str1);
	getline(cin,str2);
	
	str1.append(str2);
	
	for(int i=0;i<str1.length();i++)
	{
		if(vec1[(int)str1[i]]==0)
		{
			vec1[(int)str1[i]]=1;
			res1.append(str1.substr(i,1));
		}
	}
	
	cout << res1;
	
}
