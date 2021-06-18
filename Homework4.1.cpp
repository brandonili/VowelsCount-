// Hi, my name is Brandon and I developed this program to count all vowles in a txt file and prints
// how many vowles there are in the command terminal. 
#include <iostream>
#include <string>
#include <fstream>

// launch the command termial 
int main(int argc, char* argv[])
{
	// The executable name and at least one argument
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}

	// For debugging purposes 
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << std::endl;
	}

	// opens up the .html file 
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)

	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}

	// printing the welcome screen
	std::cout << "********************************************************" << std::endl;
	std::cout << "**********Welcome to my Letter Count Program************" << std::endl;
	std::cout << "********************************************************" << std::endl << std::endl;
	std::cout << "Analyzing file '" << argv[1] << "'..." << std::endl << std::endl;


	char ch;
	int v[8] = { 0 };
	while (inFile) {

		// declearing vowels to excute if they are upper case or lower case. 
		inFile.get(ch);

		if (ch == 'A' || ch == 'a')v[0]++;

		if (ch == 'E' || ch == 'e')v[1]++;

		if (ch == 'I' || ch == 'i')v[2]++;

		if (ch == 'O' || ch == 'o')v[3]++;

		if (ch == 'U' || ch == 'u')v[4]++;

		if (ch == 'B' || ch == 'b')v[5]++;

		if (ch == 'C' || ch == 'c')v[6]++;

		if (ch == 'D' || ch == 'd')v[7]++;

	}

	// adding up of the sum of all the vowels 
	int sum = v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7];

	// printing out the results 
	std::cout << "The number of A's: ..............................." << v[0] << std::endl;
	std::cout << "The number of E's: ..............................." << v[1] << std::endl;
	std::cout << "The number of I's: ..............................." << v[2] << std::endl;
	std::cout << "The number of O's: ..............................." << v[3] << std::endl;
	std::cout << "The number of U's: ..............................." << v[4] << std::endl;
	std::cout << "The number of B's: ..............................." << v[5] << std::endl;
	std::cout << "The number of C's: ..............................." << v[6] << std::endl;
	std::cout << "The number of D's: ..............................." << v[7] << std::endl;
	std::cout << "The vowel count is: .............................." << sum << std::endl;
	inFile.close();
	return 0;

}
