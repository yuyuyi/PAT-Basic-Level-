#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x1,y1,z1,x2,y2,z2;
	long long int s1=0,s2=0,s=0;
	scanf("%lld.%lld.%lld",&x1,&y1,&z1); 
	scanf("%lld.%lld.%lld",&x2,&y2,&z2);
	s1=s1+x1*17+y1;         
	s1=s1*29+z1;
	s2=s2+x2*17+y2;
	s2=s2*29+z2;
	s=s2-s1;
	if(s<0)
	{
		s=abs(s);
		cout<<"-"; 
	}
	int r=s/493;
	int t=s%493;
	int y=t/29;
	int k=t%29;
	printf("%lld.%lld.%lld",r,y,k);
	return 0;
}
