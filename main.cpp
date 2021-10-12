#define _USE_MATH_DEFINES

#include <stdio.h>
#include <iostream> 
#include <cmath> 
#include <iomanip> 

#include "black_scholes.h"

int main() {
    // Creating paramter list (for now)
    double S = 100.0;  // Option price
    double K = 100.0;  // Strike price
    double r = 0.05;   // Risk-free rate (5%)
    double v = 0.2;    // Volatility of the underlying (20%)
    double T = 1.0;    // One year until expiry

    // Using call/put functions
    double call = call_price(S, K, r, v, T);
    double call_delta_v = call_delta(S, K, r, v, T);
    double call_gamma_v = call_gamma(S, K, r, v, T);
    double call_vega_v = call_vega(S, K, v, r, T);
    double call_theta_v = call_theta(S, K, v, r, T);
    double call_rho_v = call_rho(S, K, r, v, T);

    double put = put_price(S, K, r, v, T);
    double put_delta_v = put_delta(S, K, r, v, T);
    double put_gamma_v = put_gamma(S, K, r, v, T);
    double put_vega_v = put_vega(S, K, r, v, T);
    double put_theta_v = put_theta(S, K, r, v, T);
    double put_rho_v = put_rho(S, K, r, v, T);

    //output
    std::cout << std::setw(20) << std::left << "Underlying: " << S << std::endl;
    std::cout << std::setw(20) << std::left << "Strike: " << K << std::endl;
    std::cout << std::setw(20) << std::left << "Risk-Free Rate: " << r << std::endl;
    std::cout << std::setw(20) << std::left << "Volatility: " << v << std::endl;
    std::cout << std::setw(20) << std::left << "Maturity: " << T << std::endl;

    std::cout << std::setw(20) << std::left << "Call Price: " << call << std::endl;
    std::cout << std::setw(20) << std::left << "Call Delta: " << call_delta_v << std::endl;
    std::cout << std::setw(20) << std::left << "Call Gamma: " << call_gamma_v << std::endl;
    std::cout << std::setw(20) << std::left << "Call Vega: " << call_vega_v << std::endl;
    std::cout << std::setw(20) << std::left << "Call Theta: " << call_theta_v << std::endl;
    std::cout << std::setw(20) << std::left << "Call Rho: " << call_rho_v << std::endl;



    std::cout << std::setw(20) << std::left << "Put Price: " << put << std::endl;
    std::cout << std::setw(20) << std::left << "Put Delta: " << put_delta_v << std::endl;
    std::cout << std::setw(20) << std::left << "Put Gamma: " << put_gamma_v << std::endl;
    std::cout << std::setw(20) << std::left << "Put Vega: " << put_vega_v << std::endl;
    std::cout << std::setw(20) << std::left << "Put Theta: " << put_theta_v << std::endl;
    std::cout << std::setw(20) << std::left << "Put Rho: " << put_rho_v << std::endl;

    return 0;
}
