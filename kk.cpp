#include<bits/stdc++.h>
using namespace std;
const int c=0;
void findpair(int arr[], int len, int sum)
{
    std::sort(arr, arr+len);
    int i = 0;
    int j = len -1;
    while( i < j){
        while((arr[i] + arr[j]) <= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            i++;
        }
        j--;
        while((arr[i] + arr[j]) >= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                c++;
            j--;
        }
    }
}
int main(void)
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
	   }
	   int k;
	   cin>>k;
	    findpair(a, n, k);
   }
   
}
