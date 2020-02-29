#include <iostream>
#include "Problem.h"

/*
	In here I run every solved problem one by one
*/

int main()
{
	std::cout << "Solutions to problems: \n\n";

	problem001();
	problem002();
	problem003();
	problem004();
	problem005_1(); // Add second method
	problem006();
	problem007();
	problem008();
	problem009();
	problem011();
	problem012(); 
	problem014();
	/*problem015();*/ // fix stack overflow after finals
	problem018();
	problem024();

	system("pause");
	return 0;
}