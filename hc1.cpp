#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{

int t,n,k,i;
scanf("%d",&t);

while(t--)
{
scanf("%d%d",&n,&k);


int a[n],b[n];

for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++) scanf("%d",&b[i]);

sort(a,a+n);
sort(b,b+n);

for(i=0;i<n;i++)
{
	if(a[i]+b[n-i-1]<k) break;
}

if(i==n) printf("YES\n");
else printf("NO\n");
}
return 0;
}
