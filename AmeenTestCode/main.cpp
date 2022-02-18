//
//  main.cpp
//  testcode
//
//  Created by Steven Lee on 2/17/22.
//

#include <iostream>
#include "cMultipleThree.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
//    cMultipleThree n1(6), n2;
//    cout << "n1: " << n1.getNum() << "\nn2: " << n2.getNum() << endl;
//    n2.setNum(-1);
//    cout << "n1: " << n1.getNum() << "\nn2: " << n2.getNum() << endl;
//    n2.setNum(4);
//    cout << "n1: " << n1.getNum() << "\nn2: " << n2.getNum() << endl;
//    n2.setNum(18);
//    cout << "n1: " << n1.getNum() << "\nn2: " << n2.getNum() << endl;
//    ++n1;
//    cout << "++n1: " << n1.getNum() << endl;
//    n1++;
//    cout << "n1++: " << n1.getNum() << endl;
//    cMultipleThree n3 = n2 – n1;
//    cout << “n3 = “ << n3 << endl;
    
//    Problem 1:
    cMultipleThree n1(6), n2;
    cMultipleThree n3 = n2 - n1;
    cout << "n3 = " << n3 << endl;
    n1 = n1 + 5;
    cout << "n1 = " << n1 << endl;
    n1 = n2++;
    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
    int var = -5 - n1.getNum();
    cout << "n1 = " << n1 << " var = " << var << endl;
    n3 = (--n1) +2;
    cout << "n1 = " << n1 << " n3 = " << n3 << endl;
    n3.setNum(5);
    n1 = n1 + n3;
    cout << "n1 = " << n1 << " n3 = " << n3 << endl;
}
