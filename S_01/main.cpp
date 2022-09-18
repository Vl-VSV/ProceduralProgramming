//
//  main.cpp
//  S_01
//
//  Created by Vlad V on 18.09.2022.
//

#include <iostream>

using namespace std;


int main() {
  int a, b, c, i = 0, n = 0;
  cout << "Enter a, b and c: " << endl; cin >> a >> b >> c;

  while (a + b * n <= c)
    n++;

    cout << endl << "Answer = " << n - 1 << endl;
  return 0;
}
