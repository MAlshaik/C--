#include <iostream>

using std::string; using std::cout; using std:: endl;

int main(){
    int lucky_nums[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    lucky_nums[10] = 100;

    cout << lucky_nums[9] << " are is my lucky nums" << endl; // defults to 0 cuz no value 
}
