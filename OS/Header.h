#pragma once

struct ComplexNum{
	int a, b;

	ComplexNum(int a, int b);	
	ComplexNum();
	int mod();

	ComplexNum operator+(ComplexNum& operand);
	ComplexNum operator-(ComplexNum& operand);
	ComplexNum operator*(int constant);
};
