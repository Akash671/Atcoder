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
   if(pow(a,c)<pow(b,c))
   {
   	cout<<"<";
   }
   else if(pow(a,c)>pow(b,c))
   {
   	cout<<">";
   }
   else
   {
   	cout<<"=";
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
