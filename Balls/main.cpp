//
//  main.cpp
//  Balls
//
//  Created by Vlad V on 16.09.2022.
//

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int a[1000], i = 0, n, score = 0, ss = 0;
  string s;
  char c[1000];

  cout << "Enter numbers of balls: ";
  cin >> n;

  for (i = 0; i < n; i++) {
    a[i] = i;
    s += to_string(a[i]);
  }

  sort(s.begin(), s.end());

  do {
    for (i = 0; i < n; i++) {
      c[i] = s[i];
      if (c[i] == i + 48) {
        score++;
        break;
      }
    }
    ss++;
  } while (next_permutation(s.begin(), s.end()));

  cout << "Number of matches = " << score << '\n';

  return 0;
}
