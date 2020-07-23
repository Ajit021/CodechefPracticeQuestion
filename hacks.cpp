#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[101];
ll fibb(int n)
{
	//int f[n+1];
	f[0]=0;
	f[1]=1;	
	
	
	if(n==0||n==1)
	 return n; 
	
	for(ll i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	//cout<<f[n-1]<<" ";
	
return f[n];	
}

//int fibb(int n)
//{
//  int a=pow((1+sqrt(5)),n);
//  int ba=pow((1-sqrt(5)),n);
//  int c=pow(2,n)*sqrt(5);
//  
//  int k=(a-ba)/c;
//  return k;
//  	
//}
ll gcd(ll a,ll b)
{
	if(b==0)
	 return a;
	return gcd(b,a%b);
}




main()
{
	ll t;
	cin>>t;
	while(t--)
	{  fibb(101);
	ll a,b;
		cin>>a>>b;
		cout<<f[gcd(a,b)]<<"\n";
		
		
	}
}
