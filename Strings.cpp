#include <iostream>

using std:: cout; using std::endl; using std::string;

int main(){
    string phrase = "Girafee Academy";
    cout << phrase.length() << endl; //tells the user how many  characters in the string 
    cout << phrase[0]; // prints the first character
    cout << phrase.find("Academy", 0); // prints where the string exsists after x index 
    cout << phrase.substr(8, 3); //pulls the starting index to the end index of the string kinda like python 8:3
}