//
//  cMultipleThree.cpp
//  testcode
//
//  Created by Steven Lee on 2/17/22.
//

#include "cMultipleThree.hpp"
#include <iostream>

cMultipleThree::cMultipleThree() {
    num = 0;
}

cMultipleThree::cMultipleThree(int n) {
    if(n > 0 && n%3 == 0) {
        num = n;
    }
    else {
        std::cout << "code 10: Invalid value, negative number" << std::endl;
        return;
    }
}

int cMultipleThree::getNum() {
    return num;
}

void cMultipleThree::setNum(int n) {
    if(n < 0) {
        std::cout << "code 10: Invalid value, negative number" << std::endl;
        return;
    }
    else if (n%3 != 0) {
        std::cout << "code 1: Invalid input, not multiple of 3" << std::endl;
        return;
    }
    else {
        num = n;
    }
}

cMultipleThree& cMultipleThree::operator++() {
    num += 3;
    return *this;
}

cMultipleThree cMultipleThree::operator++(int) {
    cMultipleThree temp = *this;
    ++*this;
    return temp;
}

cMultipleThree& cMultipleThree::operator--() {
    if (num <= 3) {
        num = 0;
    }
    else {
        num -= 3;
    }
    return *this;
}

cMultipleThree cMultipleThree::operator--(int) {
    cMultipleThree temp = *this;
    --*this;
    return temp;
}

cMultipleThree cMultipleThree::operator+(cMultipleThree& rhs) const {
    if (num < 0) {
        std::cout << "code 5: +/- yielding negative number" << std::endl;
        return cMultipleThree();
    }
    return cMultipleThree(num + rhs.num);
}

cMultipleThree cMultipleThree::operator-(cMultipleThree& rhs) const {
    if (rhs.num > num) {
        std::cout << "code 5: +/- yielding negative number" << std::endl;
        return cMultipleThree();
    }
    else {
        return cMultipleThree(num - rhs.num);
    }
}

cMultipleThree cMultipleThree::operator+(int rhs) const {
    if ((num + rhs) < 0) {
        std::cout << "code 5: +/- yielding a negative number" << std::endl;
        return cMultipleThree();
    }
    else {
        if (num%3 != 0) {
            int rem = num%3;
            return cMultipleThree(num+(3-rem));
        }
    }
    return cMultipleThree(num+rhs);
}

cMultipleThree cMultipleThree::operator-(int rhs) const {
    if ((num - rhs) < 0) {
        std::cout << "code 5: +/- yielding a negative number" << std::endl;
        return cMultipleThree();
    }
    else {
        if (num%3 != 0) {
            int rem = num%3;
            return cMultipleThree(num - (3-rem));
        }
    }
    return cMultipleThree(num - rhs);
}

std::ostream& operator<<(std::ostream& os, const cMultipleThree& cMT) {
    os << cMT.num;
    return os;
}

std::istream& operator>>(std::istream& is, const cMultipleThree& cMT) {
    is >> cMT.num;
    return is;
}