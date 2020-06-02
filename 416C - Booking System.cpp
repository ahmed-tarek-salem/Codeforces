#include<bits/stdc++.h>

using namespace std;
struct Arr{
	int num, cost, index;
};

bool sortbyend(Arr s1, Arr s2)
{
    return s1.cost > s2.cost;
}
 
 int main()
 { vector<pair<int,int> > v;
   vector<pair<int,int> > ans;
   Arr arr[1002];
   int n,k;
   cin>>n;
   for(int i=1; i<=n; i++)
   {
   	cin>>arr[i].num>>arr[i].cost;
   	arr[i].index=i;
   }
   cin>>k;
   for(int i=1; i<=k; i++)
   {
   	int x;
   	cin>>x;
   	v.push_back(make_pair(x,i));
   }
  sort(arr+1,arr+n+1, sortbyend);
  sort(v.begin(),v.end());
  
  int sum=0,req=0;
 for(int i=1; i<=n; i++)
  {
  	for(int j=0; j<k; j++)
  	{
  			
  	if(arr[i].num<=v[j].first)
     	{
  		
  		sum+=arr[i].cost;
  		req++;
  		ans.push_back(make_pair(arr[i].index,v[j].second));
  		v[j].first=-1;
  		break;
	   } 	
	    
	}
  
  } 
  
  cout<<req<<" "<<sum<<endl;
  for(int i=0; i<ans.size(); i++)
  {
  	cout<<ans[i].first<<" "<<ans[i].second<<endl;
  }
  
 	 return 0; 
 	
}