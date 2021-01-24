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
        for (int c= 1; c<col ;++c) {
            for(int i=row-1; c +(row-1 -i) <col && i>=0;--i)
              cout<<m[i][c +(row-1 -i)]<<" ";
           cout<<endl;
       } 
}
