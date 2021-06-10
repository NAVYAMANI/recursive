#include<iostream>
#include<vector>
using namespace std;
void printcombinationsum(int N, vector<int>&ds)
{
	if(N==0)
	{
		for(auto it:ds)
		{
		 cout<<it<<"  ";
	   }
		cout<<endl; 
	}
	for(int i=1;i<=N;i++)
	{
		ds.pushback(i);
		printcombinationsum(N-1,ds);
		ds.pop_back();
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>ans;
	printcombinationsum(n,ans);
	return 0;
}
