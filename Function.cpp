#include "HeFoFu.h"


//                      3                    2
double basicOps(double firstNumber, char ope, double number) {
	

	double All = 0;
	All += firstNumber;

	if (ope == '+') {
		All += number;
	}

	return All;
}

