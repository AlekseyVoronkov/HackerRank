#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int FirstArrayLenght, SecondArrayLenght;
    
    cin >> FirstArrayLenght >> SecondArrayLenght;
    
    int* Array[FirstArrayLenght];
    
    for (int FirstIndex = 0; FirstIndex < FirstArrayLenght; ++FirstIndex) {
        int a;
        cin >> a;
        Array[FirstIndex] = new int[a];
        for (int SecondIndex = 0; SecondIndex < a; ++SecondIndex) {
            cin >> Array[FirstIndex][SecondIndex];
        }
    }
    
    for (int FirstIndex = 0; FirstIndex < SecondArrayLenght; ++FirstIndex) {
        int b, c;
        cin >> b >> c;
        cout << Array[b][c] << endl;
    }

    return 0;
}