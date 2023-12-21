#include <stdio.h>
double evaluatePolynomial(int degree, double coefficients[], double x) {
    double result = 0.0;
    
    for (int i = 0; i <= degree; ++i) {
        result += coefficients[i] * pow(x, degree - i);
    }
    
    return result;
}

int main() {
    int degree;
    
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    
    printf("Enter the coefficients: ");
    double coefficients[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        scanf("%lf", &coefficients[i]);
    }
    
    double x;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    double result = evaluatePolynomial(degree, coefficients, x);
    
    printf("P(%lf) = %lf\n", x, result);
    
    return 0;
}
