#include <iostream>
using namespace std;
void recurtion(int n)
{
	if ( n < 1)
       return ;
	else
 {
  	cout<<n<<"\n";
	recurtion(n-1);
	cout<<n<<"\n";
	return ;
 }
  	
}
int main() 
{
	int a;
	cin >>a;
	recurtion(a);
	return 0;
}
