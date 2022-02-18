//
//  cMultipleThree.cpp
//  testcode
//
//  Created by Steven Lee on 2/17/22.
//

#include "cMultipleThree.hpp"
#include <iostream>

cMultipleThree::cMultipleThree() {
//    Default: initialize to 0
    num = 0;
}

cMultipleThree::cMultipleThree(int n) {
//    Check for valid input
//    n must not be negative or a non-multiple of 3
    if(n > 0 && n%3 == 0) {
        num = n;
    }
    else {
        std::cout << "code 10: Invalid value, negative number" << std::endl;
        return;
    }
}

int cMultipleThree::getNum() const {
//    Accessor method
    return num;
}

void cMultipleThree::setNum(int n) {
//    Input validation
//    n must not be negative and a multiple of 3
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
//    Increment by 3
    num += 3;
    return *this;
}

cMultipleThree cMultipleThree::operator++(int) {
    cMultipleThree temp = *this;
    ++*this;
    return temp;
}

cMultipleThree& cMultipleThree::operator--() {
//    Decrement by 3
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
//    num must never be negative
    if (num < 0) {
        std::cout << "code 5: +/- yielding negative number" << std::endl;
        return cMultipleThree();
    }
    return cMultipleThree(num + rhs.num);
}

cMultipleThree cMultipleThree::operator-(cMultipleThree& rhs) const {
//    num must never be negative
    if (rhs.num > num) {
        std::cout << "code 5: +/- yielding negative number" << std::endl;
        return cMultipleThree();
    }
    else {
        return cMultipleThree(num - rhs.num);
    }
}

cMultipleThree cMultipleThree::operator+(int rhs) const {
    int sum = num + rhs;
//    Check if sum is negative
    if (sum < 0) {
        std::cout << "code 5: +/- yielding a negative number" << std::endl;
        return cMultipleThree();
    }
    else {
//        If sum is multiple of 3, then set sum as num
        if (sum%3 == 0) {
            return cMultipleThree(sum);
        }
        else {
//            Find first multiple of 3 greater than sum
            int rem = sum%3;
            int disFromThree = 3-rem;
            sum += disFromThree;
            return cMultipleThree(sum);
        }
    }
}

cMultipleThree cMultipleThree::operator-(int rhs) const {
    int diff = num - rhs;
//    Check if difference is negative
    if (diff < 0) {
        std::cout << "code 5: +/- yielding a negative number" << std::endl;
        return cMultipleThree();
    }
    else {
//        If difference is multiple of 3, then set the difference as num
        if (num%3 == 0) {
            return cMultipleThree(num - rhs);
        }
        else {
//            Find first multiple of 3 less than difference
            int rem = diff%3;
            int disFromThree = 3-rem;
            diff -= disFromThree;
            return cMultipleThree(diff);
        }
    }
}

std::ostream& operator<<(std::ostream& os, const cMultipleThree& cMT) {
    os << cMT.num;
    return os;
}

std::istream& operator>>(std::istream& is, const cMultipleThree& cMT) {
    is >> cMT.num;
    return is;
}
