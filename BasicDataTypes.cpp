#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int IntNumber;
    long LongNumber;
    char JustChar;
    float FloatNumber;
    double DoubleNumber;
    
    scanf("%d %ld %c %f %lf", &IntNumber, &LongNumber, &JustChar, &FloatNumber,
    &DoubleNumber);
    
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", IntNumber, LongNumber, JustChar, FloatNumber, 
    DoubleNumber);
    
    return 0;
}