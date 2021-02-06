//
// Created by devel on 2021-02-07.
//

#include "FundOperator.h"
#include <cmath>

void FundOperator::q2588() {
  int a, b;
  int numB[3], midResult[3];

  cin >> a;
  cin >> b;

  for (int i = 0; i < 3; i++)
    numB[i] = (int) (b / pow(10, i)) % 10;

  for (int i = 2; i >= 0; i--)
    midResult[i] = a * numB[i];

  for (int r : midResult)
    cout << r << endl;
  cout << a * b << endl;
}
