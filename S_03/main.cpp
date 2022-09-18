//
//  main.cpp
//  S_03
//
//  Created by Vlad V on 18.09.2022.
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cout << "Enter N and M: " << endl;
  cin >> n >> m;

  m == n ? cout << pow((n * (n + 1)) / 2, 2) << endl
         : cout << (m * n * (n + 1) * (m + 1)) / 4 << endl;
}
