#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		
		int count=0;
		for(int i=0;i<n;i++)
		{
			//cout<<count<<" "<<a[i]<<"\n";
		if(count>=a[i]){
				count+=1;
			}
			else{
				break;
			}
		}
		cout<<count<<"\n";
		
		
	}
}
