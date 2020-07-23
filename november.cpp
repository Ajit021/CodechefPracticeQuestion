#include<bits/stdc++.h>
using namespace std;
main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		  cin>>a[i];
		  int flag=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]!=a[j])
				{
					if(a[a[i]]==a[a[j]])
					{
						cout<<"Truly Happy\n";
						flag=1;
						break;
					}
				}
				
			}
			
			if(flag==1)
			  break;
		}
		
		if(flag==0)
		  cout<<"Poor Chef\n";
		
	}
	
}
