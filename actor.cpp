#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,l,max=0;
		cin>>n>>m;
//		vector<int>a(n+1);
int a[n+1];

		memset(a,0,sizeof(a));
		for(int i=0;i<m;i++)
		{
			cin>>k>>l;
			a[l]=a[l]+1;
		}
		int f=0;
		
		for(int i=0;i<=n;i++)
		 {
		 	if(a[i]==n-1)
		 	{
//		 	cout<<a[i]<<" ";
//		 	cout<<"alive";
            max=i;
             
              f=1;
              break;
		    }
		 }
		 
		 if(f==1)
		   cout<<"alive"<<" "<<max<<"\n";
		   
		else 
		cout<<"dead\n";
		 
		 
	
		 
	}
}
