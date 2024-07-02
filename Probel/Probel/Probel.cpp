#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include<conio.h>

double calculate_S(double A, double B) {
    double result;

    result = log(sqrt(A) * pow(B, 2));
    
    return result;
}

int main()
{

    double A, B, S;

    scanf("%lf", &A);
    scanf("%lf", &B);

    S = calculate_S(A, B);

    _cprintf_s("%lf", S);

    return 0;
}
