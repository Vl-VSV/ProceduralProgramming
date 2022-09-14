//
//  main.cpp
//  05_05
//
//  Created by Vlad V on 14.09.2022.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ofstream fin;
    fin.open("/Users/vladv/XCode Projects/ProceduralProgramming/05_05/File.txt");
    
    string author, title, year, a, ans = "Books with a 'C++' in their title: \n";
    
    int count;
    cout << "Enter books count: "; cin >> count; fin << "Counts of books: " << count << "\n\n"; cout << endl;
    
    getline(cin, a);
    for (int i = 0; i < count; i++){
        
        cout << "Enter " << i+1 << " book's Author: " << endl;
        getline(cin, author);
        cout << "Enter book's Title: " << endl;
        getline(cin, title);
        cout << "Enter book's Year of publication: " << endl;
        getline(cin, year);
        cout << endl;
        
        cout << "Author: " << author << " " << ", Title: " << title << ", Year of publication: " << year << "\n\n";
        fin << "- Author: " << author << " " << ", Title: " << title << ", Year of publication: " << year << "\n\n";
        
        if (title.find("C++") != -1){
            ans += "- Author: " + author + ", Year of publication: " + year + "\n";
        }
    }
    
    fin.close();
    cout << ans << endl;
    return 0;
}
