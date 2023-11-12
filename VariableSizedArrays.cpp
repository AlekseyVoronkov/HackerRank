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
        int SizeArray;
        cin >> SizeArray;
        Array[FirstIndex] = new int[SizeArray];
        for (int SecondIndex = 0; SecondIndex < SizeArray; ++SecondIndex) {
            cin >> Array[FirstIndex][SecondIndex];
        }
    }
    
    for (int FirstIndex = 0; FirstIndex < SecondArrayLenght; ++FirstIndex) {
        int QueriesNum1, QueriesNum2;
        cin >> QueriesNum1 >> QueriesNum2;
        cout << Array[QueriesNum1][QueriesNum2] << endl;
    }

    return 0;
}
