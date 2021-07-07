//
// Created by NINCOL on 14/04/2020.
//

#ifndef EJER5A_INTEGER_H
#define EJER5A_INTEGER_H
#include <iostream>
using namespace std;

class	Integer
{
    int	value;

public:
    Integer();
    Integer(int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int value);
    Integer operator+(Integer val);
    Integer operator+=(int value);
    Integer operator+=(Integer val);
    Integer operator-(int value);
    Integer operator-(Integer val);
    Integer operator-=(int value);
    Integer operator-=(Integer val);
    Integer operator*(int value);
    Integer operator*(Integer val);
    Integer operator*=(int value);
    Integer operator*=(Integer val);
    Integer operator/(int value);
    Integer operator/(Integer val);
    Integer operator^(int ex);
    Integer operator^(Integer ex);
    bool operator>(int value);
    bool operator>=(int value);
    bool operator<(int value);
    bool operator<=(int value);
    bool operator==(int value);
    bool operator!=(int value);

    friend ostream& operator <<(ostream& os, const Integer&);
    friend istream& operator >>(istream& os, Integer&);
};

#endif //EJER5A_INTEGER_H
