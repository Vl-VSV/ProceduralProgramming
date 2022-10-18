//
 //  main.cpp
 //  S_02
 //
 //  Created by Vlad V on 18.09.2022.
 //

 #include <iostream>

 using namespace std;

 int print(int x, int y) {
   cout << "4: " << x << endl;
   cout << "3: " << y << endl;
   exit(0);
 }

 int main() {
   int m, c = 0;
   cout << "Enter M: ";
   cin >> m;

   if (m % 3 == 0) {
     print(0, m / 3);
   }

   else if (m % 4 == 0) {
     print(m/4, 0);
   }

   while (m % 3 != 0) {
     c++;
     m -= 4;

     if (m < 0) {
       print(0, 0);
     }
   }
   print(c, m / 3);
 }
