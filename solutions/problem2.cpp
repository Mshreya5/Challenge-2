#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream file("../inputs/input2.txt");
    string s;
    getline(file, s);
    
    reverse(s.begin(), s.end());
    
    string temp = "";
    for(int i = 0; i < s.length(); i++) {
        if((i + 1) % 3 != 0) {
            temp += s[i];
        }
    }
    s = temp;
    
    for(char &c : s) {
        c += 2;
    }
    
    int vowelCount = 0;
    for(char c : s) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    
    cout << "Clue 2: " << vowelCount << endl;
    return 0;
}