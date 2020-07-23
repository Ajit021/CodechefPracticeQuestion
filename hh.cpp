#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int f,int l)
{
	
	int j=l-1;
	while(f<j)
	  {
	  	swap(a[f++],a[j--]);
	  }
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		
		sort(b,b+n);
		int j=0;
		
		for(int i=1;i<n;i++)
		{
		  if(a[i]>a[i-1])
		  {
		  	 j++;
			 }	 
			 else
			 {
			 	//cout<<a[i];
			 	break;
			   }  
		  	
		}
		j=j+1;
	  rev(a,0,j);
	  rev(a,j,n);
	  rev(a,0,n);
	  
	  int f=0;
	  for(int i=0;i<n;i++)
	  {
	  	if(a[i]!=b[i])
	  	  {
	  	  	f=1;
	  	  	break;
			}
	  }
	  
	  if(f==1)
	   cout<<"NO\n";
	 else
	  cout<<"YES\n";
	  
	  
		//cout<<
		
		
		
		
		
		
	}
}
