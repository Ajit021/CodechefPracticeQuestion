#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	 if(n<=1)
	  return false;
	if(n<=3)
	  {
	  	return true;
	  }
	  if(n%2==0||n%3==0)
	   return false;
	   
	   
	  for(int i=5;i*i<=n;i=i+6)
	  {
	  	if(n%i==0||n%(i+2)==0)
	  	 return false;
	   } 
	   
	   return true;
	   
}

int isSum(int n)
{
	int k=n,sum=0;
	while(k>0)
	{
	   int t=k%10;
	   sum=sum+t;
	   k=k/10;
	   	
	}
	return sum;
}







main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		int a[r];
		int c=0;
		for(int i=l;i<=r;i++)
		{
			if(isPrime(i))
			{
				a[c]=i;
				//cout<<" "<<i;
				c++;
			}
		}
		
		for(int i=0;i<c;i++)
		{
			while(a[i]>9)
			{
				a[i]=isSum(a[i]);
			}
			
			
			if(a[i]==1)
			 {
			 	a[i]=2;
			 }
			 else if(!isPrime(a[i]))
			 {
			 	int k=a[i];
			 	  while(!isPrime(k))
			 	  { 
			 	     k--;
			 	  	
				   }
			 	a[i]=k;
			 }
               			
			
		}
		
		
		
		
		
		
		
		for(int i=0;i<c;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		
		
	}

}
