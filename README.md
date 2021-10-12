README still in progress.

# black-scholes-analytic-pricing
Using Black-Scholes to price vanilla European calls and puts using C++   

## Black-Scholes Pricing Formula

The black-scholes pricing formula is an analytical formula calculated by multiplying the current stock price with the CDF-NPD function. The function for a European Vanilla Call, C(S, t) calculates the price of, well, a European vanilla call with the paramters S and t. 

K is the strike price, r is the risk-free rate, T is the time to maturity, and sigma is the constant volatility of the underlying asset S. 

- C(S, t) = SN(d1) - Ke^(-rt)N(d2)
- d1 = (log((S/K) + (r + sigma^2/2)T) / sigma*sqrt(T))
- d2 = d1 - sigma*sqrt(T)

We can also utilize a put-call parity and price a European vanilla put, P(S, t) with a formula that makes use of C(S, t): 
- P(S, t) = Ke^(-rT) -S + C(S, t)

So, we have defined everything but the function N, which is the CDF of the standard normal distribution:
- N(x) = (1)/sqrt(2pi)*integral of (e^(-t^2/2))dt from x to -infinity 



