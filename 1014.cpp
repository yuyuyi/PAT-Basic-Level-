#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string str[4];
	int in[3];
	int flag =1;
	
	for(int i=0;i<4;i++)
	{
		cin >> str[i];
	}
	
	for(int i=0;i<str[0].length();i++)
	{
		if((str[0][i]>='A' && str[0][i]<='G') && str[0][i]==str[1][i] && flag ==1)
		{
			switch(str[0][i])
			{
				case 'A':cout << "MON ";break;
				case 'B':cout << "TUE ";break;
				case 'C':cout << "WED ";break;
				case 'D':cout << "THU ";break;
				case 'E':cout << "FRI ";break;
				case 'F':cout << "SAT ";break;
				case 'G':cout << "SUN ";break;
				default:break;
			}
			flag =2;
			continue;
		}
		if(((str[0][i]>='A' && str[0][i]<='N' ) || (str[0][i]>='0' && str[0][i]<='9' ))&& str[0][i]==str[1][i] && flag ==2)
		{
			if(str[0][i]>='0' && str[0][i]<='9' )
			{
				in[1]=str[0][i] - 48;
			}
			else if(str[0][i]>='A' && str[0][i]<='N' )
			{
				in[1]=str[0][i] - 55;
			}
			
			if(in[1]<10)cout << "0" << in[1] << ":";
			else cout << in[1] << ":";
			
			break;
		}
	} 
	
	for(int i=0;i<str[3].length();i++)
	{
		if(((str[2][i]>='a' && str[2][i]<='z')||(str[2][i]>='A' && str[2][i]<='Z' )) && str[2][i]==str[3][i])
		{
			if(i<10)
			{
				cout << "0" << i;
			}
			else
			{
				cout << i;
			}
			break;
		}
	}
}
