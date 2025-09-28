/***************************
* Автор: Дорошкевич Матвей.*
* Название: Вариант 5      *
***************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double R = 1530.0;
  double C = 0.81e-7;
  const double PI = 3.141592653589793;

  cout << fixed << setprecision(3);
  cout << "   L        T" << endl;

  double L = 0.05;
  while (L <= 0.10 + 1e-9) {
    double term = 1.0 / (L * C) - pow(R / (2.0 * L), 2);

    if (term <= 0.0) {
      cout << setw(8) << L << "    " << "---" << endl;
    } else {
      double omega = sqrt(term);
      double T = 2000.0 * PI / omega;
      cout << setw(8) << L << "    " << T << endl;
    }
        
    L += 0.01;
  }

  L = 0.20;
  do {
    double term = 1.0 / (L * C) - pow(R / (2.0 * L), 2);

    if (term <= 0.0) {
      cout << setw(8) << L << "    " << "---" << endl;
    } else {
      double omega = sqrt(term);
      double T = 2000.0 * PI / omega;
      cout << setw(8) << L << "    " << T << endl;
    }
        
    L += 0.10;
  } while (L <= 0.50 + 1e-9);

  return 0;
}
