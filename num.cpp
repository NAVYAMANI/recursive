#include<iostream>
using namespace std;
void print(int n)
{
	if(n==0)
	return;
	cout<<n<<"  ";
	return print(n-1);
}
void print1(int n,int k=0)
{
	if(n==0)
	return;
	cout<<k<<"  ";
	return print(n-1,k+1);
}
int main()
{
	int n;
	cin>>n;
	print1(n);
}
