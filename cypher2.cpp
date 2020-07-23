#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
  	 string s;
  	 cin>>s;
  	 for(int i=0;i<s.length();i++)
  	   {
  	 	   int k=int(s[i]);
  	 	    int l=(k%26)+k;
  	 	  if(l>122)
  	 	   {
  	 	   	   s[i]=(l-122)+96;
			  }
			  else
			  {
			  	s[i]=l;
			  }
  	 	   
	   }
	   cout<<s<<"\n";
  	
  	
  	
	  }	
}
