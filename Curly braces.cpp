#include <bits/stdc++.h>
using namespace std;

int main() {

  int Age = 25;
  int Vage = 18;

  if (Age < Vage){  //Insert {} before and after cout command
    cout << "Not old enough to vote." << endl;
    cout << "Wait for " << (Vage - Age) << " years";
    }else{
        cout << "Old enough to vote!";
    }


}
