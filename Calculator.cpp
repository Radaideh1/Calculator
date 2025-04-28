#include "HeFoFu.h"


int main() {

	double theFirstNumber, number;
	char ope;
	double end = 0;

	cin >> theFirstNumber;
	
	
	while (true) {

		cin >> ope;
		if (ope == '=')
			break;

		cin >> number;

		end += basicOps(ope, number);

	}
	cout << end + theFirstNumber;
	
	

	
	


}