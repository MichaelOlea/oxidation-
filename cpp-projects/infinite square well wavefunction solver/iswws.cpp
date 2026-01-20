#include <iostream>
#include <fstream>
#include <cmath>
#include <numbers>

constexpr long double m_e = 9.10938356e-31;
constexpr long double h = 6.62607015e-34;
constexpr long double L = 1.0e-10;
constexpr long double pi = std::numbers::pi_v<long double>;
constexpr int steps = 5000;
constexpr long double dx = L / static_cast<long double>(steps);

long double calc_E(int n){
   return (n * n * h * h) / (8 * m_e * L * L);
}

long double calc_psi(int n, long double x) {
    if (x < 0 || x > L) {
        return 0L;
    }

    return std::sqrt(2.0L / L) * std::sin((n * pi * x) / L);
}

int main() {
    
    for (int i = 0; i <= steps; ++i) {
        long double x = i * dx;
        long double psi = calc_psi(n, x);
    }
}