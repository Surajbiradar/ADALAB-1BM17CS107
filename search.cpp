#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ 
	int t;
	cout<<"enter no of test cares";
	cin>>t;
	for(int i=0;i<t;i++)
	{
    int n,s,f=-1;
   cout<<"enter size";
  cin>>n;
  cout<<"enter element to be searched";
  cin>>s;
  int a[n];
  for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int i=0;i<n;i++)
	   if(s==a[i])
		   f=1;
	 cout<<f;
	 }
}	 
	
	  