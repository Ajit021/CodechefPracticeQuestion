#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k;
		scanf("%lld%lld",&n,&k);
		vector<long long> v;
		
	     long long l;
		    l=(n+1)/k;
		    //cout<<l<<" ";
	
		 long long s=0;
		 
		  if(n-l==l)
		  {
		  	v.push_back(l-1);
		  	v.push_back(l+1);
		  	
		  	s=s+l+l;
		  	//cout<<"s="<<s;
		  }
		  else
		  {
		    v.push_back(l);
		    while(l>2)
		     {
		 	    l--;
		 	    s+=l;
		 	    v.push_back(l);
		      }
		 
	      }
	
		 
		 
		 if(n-s!=0)
		 {
		 	//cout<<n<<" "<<s<<" ";
		   v.push_back(n-s);	
		 }
		 	 s=1;
		 
		 for(long long i=0;i<v.size();i++)
		 {
		 
		 s*=(v[i]*v[i]-v[i]);
		  cout<<v[i]<<" ";
		 
	      }
	      
	      
		 cout<<s<<"\n";	
	}
}
