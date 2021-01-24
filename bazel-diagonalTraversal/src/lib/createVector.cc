#include <iostream>
#include<vector>
#include"createVector.h"

using namespace std;
vector<vector<int>> vecBuilder(int t) {
     vector<vector<int>> ret;
     switch (t){
       case 1:
      /*1  2
        3  4
        5  6
        7  8
        9  10
      */
         ret = {{1,2},{3,4},{5,6},{7,8},{9,10}};
         return ret;
         break;
       case 2:
/*       1  2  3  4
         5  6   7  8
       */ 
         ret = {{1,2,3,4},{5,6,7,8}};
         return ret;
         break;
       case 3:
/*       1  2   3   4
         5  6   7   8
         9  10  11  12
       */ 
         ret = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
         return ret;
         break;
       case 4:
/*       1   2   3   
         5   6   7   
         10  11  12
*/ 
         ret = {{1,2,3},{5,6,7},{10,11,12}};
         return ret;
     }
 }