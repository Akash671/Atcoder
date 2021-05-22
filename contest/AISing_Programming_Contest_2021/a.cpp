/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int A,int b,int c)
{
	int a[6];
	a[1]=6;
	a[2]=5;
	a[3]=4;
	a[4]=3;
	a[5]=2;
	a[6]=1;
	cout<<a[A]+a[b]+a[c]<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
	return 0;
}
