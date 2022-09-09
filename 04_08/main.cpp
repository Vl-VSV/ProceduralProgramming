//
//  main.cpp
//  04_08
//
//  Created by Vlad V on 08.09.2022.
//

#include <iostream>

using namespace std;

/*
 Задать соответствующие таблицам матрицы A и B, получить матрицу C = AхB и определить: 1) какой продавец выручил больше всего денег с продажи, какой – меньше; 2) какой получил наибольшие комиссионные, какой – наименьшие; 3) чему равна общая сумма денег, вырученных за проданные товары; 4) сколько всего комиссионных получили продавцы; 5) чему равна общая сумма денег, прошедших через руки продавцов?
 */

int max(double V[4]){
    double max = 0;
    int r = -1;
    for (int i = 0; i < 4; i++){
        if (max < V[i]){
            max = V[i];
            r = i + 1;
        }
    }
    return r;
    
}

int min(double V[4]){
    double min = 0;
    int r = -1;
    for (int i = 0; i < 4; i++){
        if (min > V[i]){
            min = V[i];
            r = i + 1;
        }
    }
    return r;
    
}

int main(int argc, const char * argv[]) {
    double P[3][4];
    double C[4];
    double V[4];
    double COM[3];
    
    double S = 0.0, S2 = 0.0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << "Enter count " << j + 1 << " product for seller " << i + 1 << endl;
            cin >> P[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++){
        cout << "Enter cost " << i + 1 << " product" << endl;
        cin >> C[i];
    }
    
    for (int i = 0; i < 3; i++){
        cout << "Enter commission fees " << i + 1 << " seller" << endl;
        cin >> C[i];
        S2 += C[i];
    }
    
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 4; j++){
            V[i] += P[i][j] * C[j];
            S += P[i][j] * C[j];
        }
    }
    
    cout << "Max profit at seller " << max(V) << endl;
    cout << "Min profit at seller " << min(V) << endl;
    cout << "All profit is " << S << endl;
    cout << "Summ commission fees " << S2 << endl;
    cout << "Summ all money " << S + S2 << endl;
    
    
}


/*
#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;
string FromDec(int x, int base){
  string n, alf = "0123456789ABCDEFGHIJKL";
  while (x > 0){
    n = alf[x%base] + n;
    x /= base;
  }
  return n;
}
int ToDec(string x, int base){
  int n;
  map <char, int> a;
  a['A'] = 10;
  a['B'] = 11;
  a['C'] = 12;
  a['D'] = 13;
  a['E'] = 14;
  a['F'] = 15;
  a['0'] = 0;
  a['1'] = 1;
  a['2'] = 2;a['3'] = 3;a['4'] = 4;a['5'] = 5;a['6'] = 6;a['7'] = 7;a['8'] = 8;a['9'] = 9;

  for (int i =  0; i < x.length(); i++){
    n += pow(base, x.length() -i - 1) * a[x[i]];
  }
  return n;
}
int main() {
  string n; cout << "Enter N: " << endl; cin >> n;
  int base; cout << "Enter Base N: " <<endl; cin >> base;
  int base2; cout << "Enter Base that you want: " << endl; cin >>base2;
  cout << "result: " << FromDec(ToDec(n, base), base2);
  
}

//AA2
*/
