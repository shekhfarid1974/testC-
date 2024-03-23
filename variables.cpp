//Integer Variable
/*
#include <iostream>

int main(){
    int age = 25;
    std::cout << "Age: " << age << std::endl;
    return 0;

}


//Double Variable

#include <iostream>

int main(){

    double pi = 3.14159;
    std::cout << "value of pi: " << pi << std::endl;
    return 0;
}



//Character Variable

#include <iostream>
int main(){
    char grade = 'A';
    std::cout << "your Result: " << grade << std::endl;
    return 0;

}


//string Variable
#include <iostream>
#include <string>

int main(){
    std::string message = "Hello World";
    std::cout << "message: " << message << std::endl;
    return 0;

}

//Boolean Variable

#include <iostream>
using namespace std;
int main(){

    bool IsSunny = true;

    if(IsSunny){
        cout << "It is Sunny Day!" << endl;
    }else{
            cout << "it is not sunny day at all!" << endl;
        }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main (){
    bool isSunny;
    cout << "Is It Sunny Today? (Enter 1 For yes or 0 For No):";
    cin >> isSunny;
    if(isSunny){
        cout << "it is sunny day!" << endl;
    }else{
        cout << "it is not sunny day!" << endl;
    }
return 0;
}
