/* author : Akash_1996 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	//a b c
	//a c b
	//b a c
	//b c a
	//c a b
	//c b a
	if(a-b==b-c)
	{
		cout<<"Yes"<<"\n";
	}
	else if(a-c==c-b)
	{
		cout<<"Yes"<<"\n";
	}
	else if(b-a==a-c)
	{
		cout<<"Yes"<<"\n";
	}
	else if(b-c==c-a)
	{
		cout<<"Yes"<<"\n";
	}
	else if(c-a==a-b)
	{
		cout<<"Yes"<<"\n";
	}
	else if(c-b==b-a)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
