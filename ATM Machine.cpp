#include<bits/stdc++.h>
using namespace std;
main()
{
	int t ;
	cin>>t;
	while(t--)
     {
     	int n,k;
     	cin>>n;
     	cin>>k;
     	int a[n];
     	for(int i=0;i<n;i++)
     	{
     		cin>>a[i];
     		if(k>=a[i])
     		{
     			k=k-a[i];
     			a[i]=1;
     		}
     		else
     		{
     		  a[i]=0;	
     		}
     		
     		
     		
     	}
     	
     	for(int i=0;i<n;i++)
     	 cout<<a[i];
     	cout<<"\n";
     	
     }
}
