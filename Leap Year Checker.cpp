#include<iostream>

using namespace std;

int main(){

int year;

cout << "Enter A Year: ";
cin >> year;


if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
    cout << "Leap Year" <<endl;
}else{
    cout << "Not A Leap Year" <<endl;

}

return 0;
}
