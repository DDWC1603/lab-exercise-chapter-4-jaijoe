#include <iostream>
using namespace std;
int main()
{
	int num1,factorial=1;
	cout<<"\n\n find the factorial of a numnber:\n";
	cout<<"_ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _  _ _\n";
	cout<<" input a number to fimd the factorial : ";
	cin>> num1;
	for(int a=1; a<=num1;a++)
	{
		factorial=factorial*a;
	}
	cout<<"the factorial of the given number is: "<<factorial<<endl;
	return 0;
}
