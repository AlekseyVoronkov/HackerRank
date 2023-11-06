#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int sizeArray;
    
    cin >> sizeArray;
    int *Array = new int[sizeArray];
    
    for (int index = 0; index < sizeArray; ++index) {
        cin >> Array[index];
    }
    
    while (sizeArray--) {
        cout << Array[sizeArray] << " ";
    }
    
    return 0;
}
