#include <iostream>
#include <cmath>
#include <conio.h>

double calculate_S(double S) {
    double result = pow(S, 0.25);
    return result;
}

int main()
{
    double S;
    scanf("%lf", &S);
    double result = calculate_S(S);
    _cprintf_s("%.2lf", result);
    return 0;
}
