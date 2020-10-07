#include "Header.h"
#include <iostream>
#include <cmath>
#include <algorithm>

ComplexNum::ComplexNum(int a, int b){
	this->a = a;
	this->b = b;
}

ComplexNum::ComplexNum(){
	this->a = 0;
	this->b = 0;
}

int ComplexNum::mod(){
	return sqrt(a * a + b * b);
}

ComplexNum ComplexNum::operator+(ComplexNum& other){
	this->a += other.a;
	this->b += other.b;
	return *this;
}

ComplexNum ComplexNum::operator-(ComplexNum& other){
	this->a -= other.a;
	this->b -= other.b;
	return *this;
}

ComplexNum ComplexNum::operator*(int n){
	this->a *= n;
	this->b *= n;
	return *this;
}
