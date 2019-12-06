#include<iostream>
using namespace std;
int recurtion(int n)
{
	if (n<2)
	return n;
	else 
	return recurtion(n-1)+recurtion(n-2);
}
int main()
{
	int a,b;
	cin>>a;
	for(b=0;b<a;b++)
	{
		cout<<recurtion(b)<<endl;
	}
	return 0;
}







