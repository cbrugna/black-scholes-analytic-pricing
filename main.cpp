#define _USE_MATH_DEFINES

#include <stdio.h>
#include <iostream> 
#include <cmath> 
#include <iomanip> 

int main() {
    // Creating paramter list (for now)
    double S = 100.0;  // Option price
    double K = 100.0;  // Strike price
    double r = 0.05;   // Risk-free rate (5%)
    double v = 0.2;    // Volatility of the underlying (20%)
    double T = 1.0;    // One year until expiry

    // Using call/put functions
    double call = call_price(S, K, r, v, T);
    double put = put_price(S, K, r, v, T);

    //output
    std::cout << std::setw(20) << std::left << "Underlying: " << S << std::endl;
    std::cout << std::setw(20) << std::left << "Strike: " << K << std::endl;
    std::cout << std::setw(20) << std::left << "Risk-Free Rate: " << r << std::endl;
    std::cout << std::setw(20) << std::left << "Volatility: " << v << std::endl;
    std::cout << std::setw(20) << std::left << "Maturity: " << T << std::endl;

    std::cout << std::setw(20) << std::left << "Call Price: " << call << std::endl;
    std::cout << std::setw(20) << std::left << "Put Price: " << put << std::endl;

    return 0;
}
