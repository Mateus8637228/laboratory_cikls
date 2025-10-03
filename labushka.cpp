/***************************
* Автор: Дорошкевич Матвей.*
* Название: Вариант 5      *
***************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double R, C, L;
  const double PI = 3.141592653589793;
  double term, omega, T;
    
  R = 1530.0;
  C = 0.000000081;
    
  cout << fixed << setprecision(3);
  cout << "   L        T" << endl;

  L = 0.05;
  while (L <= 0.10) {
    term = 1.0 / (L * C) - pow(R / (2.0 * L), 2);
    if (term < 0) {
      cout << setw(8) << L << "    " << "---" << endl;
    } else {
      omega = sqrt(term);
      T = 2000.0 * PI / omega;
      cout << setw(8) << L << "    " << T << endl;
    }
    L += 0.01;
  }

  L = 0.20;
  do {
    term = 1.0 / (L * C) - pow(R / (2.0 * L), 2);
    if (term < 0) {
      cout << setw(8) << L << "    " << "---" << endl;
    } else {
      omega = sqrt(term);
      T = 2000.0 * PI / omega;
      cout << setw(8) << L << "    " << T << endl;
    }
    L += 0.10;
  } while (L <= 0.50);

  return 0;
}
