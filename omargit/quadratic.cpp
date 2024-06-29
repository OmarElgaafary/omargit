#include <iostream>
#include <cmath>

struct QuadResult {
    double number;
    double numberNeg;
};


QuadResult Quad(double a, double b, double c) {
    QuadResult re;

    double quadraticplus = (-b + sqrt(abs(pow(b, 2) - (4 * a * c))));
    double quadraticminus = (-b - sqrt(abs(pow(b, 2) - (4 * a * c))));
    double quadraticde = (2 * a);

    re.number = (quadraticplus / quadraticde);
    re.numberNeg = (quadraticminus / quadraticde);

    return re;
}


int main() {

    double a;
    std::cout << "Enter value for A:" << std::endl;
    std::cin >> a;
    double b;
    std::cout << "Enter value for B" << std::endl;
    std::cin >> b;
    double c;
    std::cout << "Enter value for C" << std::endl;
    std::cin >> c;

    QuadResult re = Quad(a, b, c);

    std::cout << re.number << "," << re.numberNeg;
    return 0;
}