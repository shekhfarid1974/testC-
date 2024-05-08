#include<iostream>

using namespace std;

int main(){

int year;

cout << "Enter A Year: ";
cin >> year;

//If any of these condition is true year is leap year if none of the condition is true mane false then the year is not leap year
if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
    cout << "Leap Year" <<endl;
}else{
    cout << "Not A Leap Year" <<endl;

}

return 0;
}
