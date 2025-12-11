#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

string rotateRight(string s) {
    return s.back() + s.substr(0, s.length()-1);
}

string rotateLeft(string s) {
    return s.substr(1) + s[0];
}

int main() {
    vector<string> grid;
    ifstream gridFile("../inputs/grid.txt");
    string line;
    while(getline(gridFile, line)) {
        grid.push_back(line);
    }
    
    vector<char> directions;
    ifstream dirFile("../inputs/directions.txt");
    char dir;
    while(dirFile >> dir) {
        directions.push_back(dir);
    }
    
    for(int i = 0; i < directions.size(); i++) {
        if(directions[i] == 'R') {
            grid[i] = rotateRight(grid[i]);
        } else if(directions[i] == 'L') {
            grid[i] = rotateLeft(grid[i]);
        }
    }
    
    string middleRow = grid[2];
    int clue1 = 0;
    for(char c : middleRow) {
        clue1 += (int)c;
    }
    
    cout << "Clue 1: " << clue1 << endl;
    return 0;
}