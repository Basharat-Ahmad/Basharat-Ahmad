#include <iostream>
using namespace std;
int recurtion(int n)
{
	if ( n == 1)
       return 1;
	else
	return n*recurtion(n-1);
}
int main() 
{
	int a,b;
	cin >>a;
	b=recurtion(a);
	cout<<b;
	return 0;
}
