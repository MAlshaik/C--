#include <iostream>

using std::string; using std:: endl; using std:: cout; using std:: cin; 

int main(){
    string color, plural_noun, celebrity;

    cout << "Enter a color: "; cin >> color; 
    cout << "Enter a plural noun: \n"; cin >> plural_noun;
    cout << "Enter a celebrity: \n"; cin >> celebrity;

    cout << "Roses are " << color << endl;
    cout << plural_noun << " are blue\n";
    cout <<"I love " << celebrity << endl;
}