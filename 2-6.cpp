#include <iostream>
#include <cstring>
using namespace std;

int main(void) 
{
   	char address[100];
   	cout << "input the address";
   	cin.getline(address,100,'\n');
   	cout <<"address is "<<address<<endl;
	return 0;
}
