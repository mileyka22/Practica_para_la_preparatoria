#include<iostream>
using namespace std;
int main()
{
	int c,n,a,b,A[100];
	char signo;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>signo>>b;
		A[i]=a+b;
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}