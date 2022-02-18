//
//  cMultipleThree.hpp
//  testcode
//
//  Created by Steven Lee on 2/17/22.
//

#ifndef cMultipleThree_hpp
#define cMultipleThree_hpp

#include <stdio.h>
#include <iostream>

class cMultipleThree {
    int num;
public:
    cMultipleThree();
    cMultipleThree(int);
    int getNum() const;
    void setNum(int);
    cMultipleThree& operator++();
    cMultipleThree operator++(int);
    cMultipleThree& operator--();
    cMultipleThree operator--(int);
    cMultipleThree operator+(cMultipleThree&) const;
    cMultipleThree operator-(cMultipleThree&) const;
    cMultipleThree operator+(int) const;
    cMultipleThree operator-(int) const;
    
    friend std::ostream &operator<<(std::ostream&, const cMultipleThree&);
    friend std::istream &operator>>(std::istream&, const cMultipleThree&);
};

#endif /* cMultipleThree_hpp */
