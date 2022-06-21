#include <iostream>
#include <string> 

using std:: cin; // console input stream
using std:: cout; // console output stream
using std:: endl; // end of line marker
using std:: string; // STL string package

int main(){
    cout << "what's your name:"; // asks for name

    string name; // inilises variable name
    cin >> name; // sets variable name to output

    cout << "what's your age:"; // asks for age
    int age; // inilises variable age
    
    cin >> age; // sets variable age to output
    cout <<"Hello " << name << ", you are " << age << '!' << endl; // prints
}
