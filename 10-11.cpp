#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
class Book{
    int year;
    string b_name;
    string p_name;
public:
    void set(int year, string b_name, string p_name){
        this->year = year; this->b_name = b_name; this->p_name = p_name;
    }
    string getP(){
        return p_name;
    }
    int getY(){
        return year;    
    }
    void show(){
        cout << year << "년도, " << b_name << ", " << p_name << endl;
    }
};
 
int main() {
    vector<Book> v;
    Book b;
    int year;
    string b_name;
    string p_name; 
    
    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다.\n";
    
    while(true){
        cout << "년도>>";
        cin >> year;
        if(year==-1)
            break;
        fflush(stdin);
        cout << "책이름>>";
        getline(cin, b_name);
        cout << "저자>>";
        getline(cin, p_name);
        
        b.set(year, b_name, p_name);
        v.push_back(b);
    }
    
    cout << "총 입고된 책은 " << v.size() << "권 입니다.\n";
    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    fflush(stdin);
    getline(cin, p_name);
    for(int i=0; i<v.size(); i++){
        if(v[i].getP() == p_name)
            v[i].show();
    }
    cout << "검색하고자 하는 년도를 입력하세요>>";
    cin >> year;
    for(int i=0; i<v.size(); i++){
        if(v[i].getY() == year)
            v[i].show();
    }
}
