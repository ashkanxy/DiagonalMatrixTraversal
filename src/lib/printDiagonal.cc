#include <iostream>
#include<vector>
#include"printDiagonal.h"

using namespace std;
void printDiagonal (vector<vector<int>> m) {
            
        int row = m.size();
        int col = m[0].size();
        
        for(int i=0; i<row;++i) {
            for (int c= 0; c<=i && c<col;++c) 
              cout<<m[i-c][c]<<" ";
            cout<<endl;
        }
}
