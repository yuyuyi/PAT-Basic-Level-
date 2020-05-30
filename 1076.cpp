#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	
	int n;
	string str;
	cin >> n;
	vector<int>vec;
	for(int i=0;i<n;i++)
	{
		getline(cin,str);
		switch(str[str.find('T')-2])
		{
			case 'A':vec.push_back(1);break;
			case 'B':vec.push_back(2);break;
			case 'C':vec.push_back(3);break;
			case 'D':vec.push_back(4);break;
			default:break;
		}
	}
	getline(cin,str);
		switch(str[str.find('T')-2])
		{
			case 'A':vec.push_back(1);break;
			case 'B':vec.push_back(2);break;
			case 'C':vec.push_back(3);break;
			case 'D':vec.push_back(4);break;
			default:break;
		}
	for(int i=0;i<vec.size();i++)
	{
		cout << vec[i];
	}
}
