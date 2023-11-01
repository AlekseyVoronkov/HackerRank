#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int IntA, IntB;
    string words[] = {"one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };
    
    cin >> IntA >> IntB;
    
    for (int Number = IntA; Number <= IntB; ++Number) {
        if(Number >= Number && Number <= 9) {
            cout << words[Number-1] << endl;
        } else if(Number > 9) {
            if(Number % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
        
    } 
    
    return 0;
}