//
// Created by NINCOL on 14/04/2020.
//
#include "integer.h"
#include <cmath>
Integer::Integer() {}

Integer::Integer(int value): value(value) {}

Integer::Integer(const Integer& other)
{
    this->value = other.value;
}

Integer Integer::operator=(const Integer& other)
{
    this->value = other.value;
}

Integer Integer::operator+(int value)
{
    return this->value + value;
}
Integer Integer::operator+(Integer val){
    return this-> value + val.value;
}

Integer Integer::operator+=(int value)
{
    return this->value += value;
}

Integer Integer::operator+=(Integer val)
{
    return this->value += val.value;
}


Integer Integer::operator-(int value)
{
    return this->value - value;
}

Integer Integer::operator-(Integer val)
{
    return this->value - val.value;
}

Integer Integer::operator-=(int value)
{
    this->value -= value;
}

Integer Integer::operator-=(Integer val)
{
    this->value -= val.value;
}

Integer Integer::operator*(int value)
{
    return this->value * value;
}

Integer Integer::operator*(Integer val)
{
    return this->value * val.value;
}

Integer Integer::operator*=(int value)
{
    this->value *=value;
}
Integer Integer::operator*=(Integer val)
{
    this->value *= val.value;
}

Integer Integer::operator/(int value)
{
    return this->value / value;
}

Integer Integer::operator/(Integer val)
{
    return this->value / val.value;
}


Integer Integer::operator^(int ex)
{
    return pow(this->value,ex);
}
Integer Integer::operator^(Integer ex)
{
    return pow(this->value,ex.value);
}
bool Integer::operator>(int value)
{
    if (this->value > value)
        return 1;
    return 0;
}

bool Integer::operator>=(int value)
{
    if (this->value >= value)
        return 1;
    return 0;
}

bool Integer::operator<(int value)
{
    if (this->value < value)
        return 1;
    return 0;
}

bool Integer::operator<=(int value)
{
    if (this->value <= value)
        return 1;
    return 0;
}

bool Integer::operator==(int value)
{
    if (this->value == value)
        return 1;
    return 0;
}

bool Integer::operator!=(int value)
{
    if (this->value != value)
        return 1;
    return 0;
}



std::ostream& operator <<(std::ostream& os, const Integer& x)
{
    os << x.value;
    return os;
}

std::istream& operator >>(std::istream& os, Integer& x)
{
    os >> x.value;
    return os;
}
