#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,b;
		cin>>n>>b;
		int a[n],d[n],c[n];
		vector<int>v;
		for(int i=0;i<n;i++)
		 cin>>a[i]>>d[i]>>c[i];
		int flag=0;		 
		 for (int i=0;i<n;i++)
		 {
		 	if(c[i]<=b){
		 		v.push_back(a[i]*d[i]);
	            flag=1;
			 }
		 }
		 if(flag==1)
		  {
		 int max = *max_element(v.begin(), v.end());
	     cout<<max<<"\n";}
	     
		 else{
		   cout<<"no tablet \n";	
		 }	
	}
}
