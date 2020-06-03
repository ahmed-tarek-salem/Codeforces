#include<bits/stdc++.h>
 
using namespace std;
 
 int main()
 { 
   int n,q;
   long long arr[2000050],CumSum[200050];
   cin>>n>>q;
   for(int i=0; i<n; i++)
   {
   	cin>>arr[i];
   }
   for(int i=0; i<q; i++)
   {
   	int x,y;
   	cin>>x>>y;
   	x--;
   	y--;
   	CumSum[x]++;
   	if(y<n-1)
   	CumSum[y+1]--; 	
   }
   for(int i=1; i<n; i++)
   {
   	CumSum[i]+=CumSum[i-1];
   }
   sort(arr,arr+n);
   sort(CumSum,CumSum+n);
   long long ans=0;
   for(int i=0; i<n; i++)
   {
   	ans+=(CumSum[i]*arr[i]);
   }
   cout<<ans;
 
    return 0; 
 	
}