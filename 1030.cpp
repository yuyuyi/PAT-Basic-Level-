#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100010;
int arr[maxn];
int main(){
	int n, p; 
	scanf("%d%d", &n, &p);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);
	int i=0, j=0;
	int ans=1;
	while(i<n&&j<n){       //ע������ת������������
		while(j<n&&arr[j]<=(long long)arr[i]*p) j++;
   		 ans=max(ans, j-i);
   		 i++;
	} 
	printf("%d",ans);
    return 0;
}
