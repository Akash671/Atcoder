/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int a;
   int b;
   int c;
   cin>>a>>b>>c;
   if(a==b)
   {
   	cout<<c;
   }
   else if(a==c)
   {
   	cout<<b;
   }
   else if(b==c)
   {
   	cout<<a;
   }
   else
   {
   	cout<<0;
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
