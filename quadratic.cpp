#include <iostream>
#include <cmath>


using namespace std;

int main(){

    double a;
    cout << "Enter value for A:" << endl;
    cin >> a;
    double b;
    cout << "Enter value for B" << endl;
    cin >> b;
    double c;
    cout << "Enter value for C" << endl;
    cin >> c;

   double quadraticplus = (-b + sqrt(pow(b, 2) - 4 * a * c));
   double quadraticminus = (-b - sqrt(pow(b, 2) - 4 * a * c));
   double quadraticde = (2*a);
   double quadratic1 = (quadraticplus/quadraticde);
   double quadratic2 = (quadraticminus/quadraticde);

   cout << quadratic1 << "," << quadratic2;

   return 0;



}