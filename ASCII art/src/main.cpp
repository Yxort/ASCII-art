#include "iostream"
#include "fstream"
#include "string"
using namespace std;

void readASCII(const string& filename);

int main()
{
	char answer = 'y';
	cout << "Welcome to ASCII art\n";

	do {
		cout << "Please, write the name of file with ASCII art: ";
		string fileName;
		cin >> fileName;
		readASCII(fileName);
		cout << "Want to see more ASCII art? (y/n) ";
		cin >> answer;

	} while (answer == 'y' || answer == 'Y');
	
	return 0;
}

void readASCII(const string& filename)
{
	ifstream ist("ascii/" + filename + ".txt");
	if (!ist)
	{
		cout << "Error: Can't open file";
		return;
	}

	string line;
	while (getline(ist, line))
	{
		cout << line << endl;
	}
}