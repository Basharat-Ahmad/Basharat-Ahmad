#include <iostream>
using namespace std;
int recurtion(int n)
{
	if (n>=10)
	return n%10+recurtion(n/10);
	else
	return n;
}
int main() 
{
	int a,s;
	cin>>a;
	s=recurtion(a);
	cout<<s;
	return 0;
}
