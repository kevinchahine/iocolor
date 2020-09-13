#include <iostream>
using namespace std;

#include <iocolor/iocolor.h>
using namespace iocolor;

int main()
{
	cout << iocolor::setfg(iocolor::BLUE) << "===== "
		<< setfg(RED) << 'I'
		<< setfg(GREEN) << 'O'
		<< setfg(BLUE) << 'C'
		<< setfg(CYAN) << 'o'
		<< setfg(YELLOW) << 'l'
		<< setfg(BROWN) << 'o'
		<< setfg(MAGENTA) << 'r'
		<< setfg(GREEN) << " =====\n";

	cin.get();
	return 0;
}