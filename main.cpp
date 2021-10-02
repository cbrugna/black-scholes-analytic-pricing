#define _USE_MATH_DEFINES

#include <stdio.h>
#include <iostream> 
#include <cmath> 

// Standard normal prob density function
double norm_pdf(const double& x) {
    return (1.0/(pow(2*M_PI,0.5)))*exp(-0.5*x*x);
}

int main() {
    std::cout << "Hello, world" << std::endl;
}