#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct student
{
	string id;
	int js,ks;
};

int main()
{
	std::ios::sync_with_stdio(false);
	vector<student> vec;
	vector<int> vec2;
	
	int n;
	cin >>n;
	
	for(int i=0;i<n;i++)
	{
		student stu;
		cin >> stu.id >> stu.js >> stu.ks;
		vec.push_back(stu);
	}
	int m;
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin >> x;
		vec2.push_back(x);
	}
	
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(vec[j].js==vec2[i])
			{
				cout << vec[j].id << " " <<vec[j].ks << '\n';
				break;
			}
		}
	}
	
}
