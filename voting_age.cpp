#include<iostream>

using namespace std;

int main(){

int age;

cout << "Your Age:";
cin >> age;

if(age < 18){

    cout << "You Are Not Eligible For Vote.";
}else{

    cout << "You Are Eligible For Vote.";

}


return 0;
}
