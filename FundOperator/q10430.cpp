//
// Created by devel on 2021-02-05.
//

#include "FundOperator.h"

void FundOperator::q10430() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << (a + b) % c << endl;
  cout << ((a % c) + (b % c)) % c << endl;
  cout << (a * c) % c << endl;
  cout << ((a % c) * (b % c)) % c << endl;
}
