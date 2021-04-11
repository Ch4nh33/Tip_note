#include <iostream>
using namespace std;
double Circle(int r);

double Circle(int r)
{
		return r*r*3.14;
}

int main(void) 
{
	
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << "hello" << true << endl;
	cout << "n+5" << '=' << n+5 << endl;
	cout << "Widtn"<<Circle(n)<<endl; 
	return 0;
}
