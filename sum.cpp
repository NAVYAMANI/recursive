#include<iostream>
using namespace std;
int getsumdigit(int n)
{
if(n==0)
return 0;
		return (n%10+getsumdigit(n/10));
}
int main()
{
	int n;
	cin>>n;
	cout<<getsumdigit(n);
	return 0;
}
