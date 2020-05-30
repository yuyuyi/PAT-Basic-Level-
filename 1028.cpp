#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct men
{
	string name;
	string age;	
};

bool com(men m1,men m2)
{
	return m1.age < m2.age;
}

int main()
{
	std::ios::sync_with_stdio(false);
	
	int n;
	vector<men> vec;
	cin >> n;
	int sum=0;
	if(n==0)
	{
		cout << 0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		men aman;
		cin >>  aman.name >> aman.age;
		if(aman.age >="2014/09/07" || aman.age <="1814/09/05")continue;
		vec.push_back(aman);
		sum++;
	}
	
	sort(vec.begin(),vec.end(),com);
	
	cout << sum << " " << vec[0].name << " " << vec[sum-1].name;
}
