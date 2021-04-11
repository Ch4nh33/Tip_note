#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
	string song("Falling in love with you");
	string elvis("Elvis Presely");
	string singer;
	
	cout <<song + " who is it ?"<<endl;
	getline(cin,singer);
	
	if(singer==elvis){
		cout <<"correct!"<<endl;
	}else{
		cout<<"wrong singer is " + elvis << endl;
	}
	return 0;
}
