// begginer project 1
// basic calculator

#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter Two Numbers Separated by a space or new lines" << endl << ": ";
    double a, b;
    int opt;
    cin >> a >> b;
    cout << "Choose operator" << endl;
    cout << "[ 1 ] +" << endl;
    cout << "[ 2 ] -" << endl;
    cout << "[ 3 ] ÷" << endl;
    cout << "[ 4 ] ×" << endl << endl;
    cout << ": ";
    
    cin >> opt;
    switch (opt) {
        case 1:
        cout << "Answer : " << a+b;
        break;
        case 2:
        cout << "Answer : " << a-b;
        break;
        case 3:
        cout << "Answer : " << a/b;
        break;
        case 4:
        cout <<"Answer : " << a*b;
        break;
        
        default:
        cout << "Error" << endl;
    }
    
}