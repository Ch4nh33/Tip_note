#include <iostream>
#include <cstring>
using namespace std;

int main(void) 
{
    char password[11];
	cout << "input the password "<<endl;
	while(true)
	{
		cout <<"password :";
		cin >> password;
		if(strcmp(password,"C++")==0)
		{
			cout <<"this program is off"<<endl;
			break;
		}
		else 
		{
			cout<<"wrong password!"<<endl;
		}
	} 
	return 0;
}
