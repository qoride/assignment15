#include <iostream>

using namespace std;

int main(){
    int input = 0;
    
    while(input < 1){

        cout << "Enter the number of rows: ";
        cin >> input;

        while(cin.fail()){
            cin.clear();
            cin.ignore(1);
        }

        if(input < 1 && !cin.fail()){
            cout << "\n\nERROR: Input is not a positive number\n" << endl;
        }
    }

    for(int i = 1; i <= input; i++){
        cout << endl;
        for(int stars = 0; stars < i; stars++){
            cout << "*";
        }
    }

    return 0;
}