#include<stdio.h>

typedef long long ll;

const ll  MAX=100000;
ll  seiv[MAX+1];
void  seive()
{
	for(ll  i=0;i<=MAX+1;i++)
	  seiv[i]=1;
	seiv[0]=0;
	seiv[1]=0;
	for(ll  i=2;i*i<=MAX+1;i++)
	{
		  if(seiv[i]==1)
		   {
		   	  for(ll  j=i*i;j<=MAX+1;j=j+i)
		   	  {
		   	  	seiv[j]=0;
				 }
		   }
	}
}

main()
{
	seive();
	ll  t;
	scanf("%lld",&t);
      int f=0;
		for(ll  i=1;i<t;i++)
		{
			if(seiv[i]==1)
			{
			//	cout<<i<<" ";
				printf("%lld ",i);
				f=1;
			}
		}
		
		if(f==0)
		printf("NO");
		
		
	
	
}
