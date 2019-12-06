#include <iostream>
using namespace std;
int recurtion(int n)
{
	if (n==1)
	return 1;
	else
	return n%2+10*recurtion(n/2);
}
int main() 
{
	int a,b;
	cin >> a;
	b=recurtion(a);
	cout << b;
	return 0;
}
