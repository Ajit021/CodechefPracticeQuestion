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
		stack<int>s;
		s.empty();
		int a[n];

		int index=0;
		
		for(int i=0;i<n;i++)
		   {
		   	  cin>>a[i];
		   	  s.push(a[i]);
		   	  
		   	  if(a[i]==7)
		   	   index=i;
		   }
		   int flag=0;
		   int k=1;
		   if(s.top()==a[0]&&s.top()==1&&a[0]==1&&index!=0)
		   {
		   	s.pop();
		   for(int i=0;i<index;i++)
		   {
		   	  if(s.top()==a[k]&&(a[k]==a[k-1]+1||a[k]==a[k-1]))
		   	  {
		   	  	//cout<<s.top()<<" "<<a[k]<<"  "<<a[k-1]<<"\n";
		   	  	k++;
		   	  	flag=1;
		   	  	s.pop();
			  }
			  else
			  {
			  	//cout<<s.top()<<" "<<a[k]<<"  "<<a[k-1]<<"\n";
			  	flag=0;
			  	break;
			  }
		   	
		   	
		   	
		   }
		   
		   if(n%2!=0&&flag==1)
			{
				 if(a[n/2]==a[(n/2)-1]+1||a[n/2]==a[(n/2)-1])
		           {
		     	//cout<<a[n/2]<<" "<<a[(n/2)-1];
		     	flag=1;
			     }
			 else
			  flag=0;
			}
		   
		   
	}
			
			if(flag==1)
			  cout<<"yes\n";
			else
			 cout<<"no\n";
		
	}
}
