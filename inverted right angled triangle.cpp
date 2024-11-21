#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//2. inverted right angled triangled
int i,j;
for(i=5;i>=1;i--)//no of rows
{
for(j=1;j<=i;j++)//for printing *
{
		cout<<"*";
}
cout<<"\n";
}
return 0;
}
