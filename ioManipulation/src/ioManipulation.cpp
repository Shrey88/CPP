/*
	to represent any float value in form of 
		fixed expression or 
		scientific expression or 
		custom expression

*/

# include<iostream>
# include<iomanip>

int main() {

	float fvalue = 76.4;

	std::cout <<"Fixed :: " << std::fixed << fvalue << std::endl; // will output 76.400002 where 2 is the garbage value.
	std::cout << "Scientific :: " << std::scientific << fvalue << std::endl;
	std::cout << "Set Precision :: " << std::setprecision(2) << std::fixed << fvalue << std::endl; // it will print only 2 digits after decimal.

	return 0;
}