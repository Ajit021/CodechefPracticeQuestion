#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		cin>>m>>x>>y;
		int a[m];
		bool h[101];
		for(int i=0;i<m;i++)
		 cin>>a[i];
		 
		memset(h,true,sizeof(h));
		
		for(int i=0;i<m;i++)
		{
			 int lower=a[i]-(x*y);
			 int upper=a[i]+(x*y);
			 if(lower<0)
			  {
			  	lower=0;
			  }
			  if(upper>100)
			    upper=100;
			    
			    //cout<<lower<<" "<<upper<<"\n";
			 for(int j=lower;j<=upper;j++)
			 {
			 	if(h[j]==true)
			 	     h[j]=false;
			 }
		}
		
		int count=0;
		for(int i=1;i<101;i++)
		{
			if(h[i]==true)
			  count++;
		}
		cout<<count<<"\n";
		
	     
	}
}
