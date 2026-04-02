#include "solver.hpp"
#include <iostream>

int main() {
    double a = 1, b = -3, c = 2;
    double result = solve_equation(a, b, c);
    std::cout << "x = " << result << std::endl;
    return 0;
}
