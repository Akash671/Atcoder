/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }
  sort(a,a+n);
  int f=1;
  for(int i=1;i<=n;++i)
  {
  	if(i!=a[i-1])
  	{
  	    f=0;
  		break;
  	}
  }
  if(f)
  {
  	cout<<"Yes";
  }
  else
  {
  	cout<<"No";
  }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	cout<<"\n";
	return 0;
}

// time complexity of this algorithm is : T(n)=O(n)
