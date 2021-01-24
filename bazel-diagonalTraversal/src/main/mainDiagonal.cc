#include <iostream>

#include"src/lib/createVector.h"
#include"src/lib/printDiagonal.h"

using namespace std;
int main()
{

    for (int i=1;i<5;++i){
        cout<<"Case "<<i<<" is: "<<endl;
        printDiagonal(vecBuilder(i));
        cout<<"*****"<<endl;
    } 
    return 0;
}
