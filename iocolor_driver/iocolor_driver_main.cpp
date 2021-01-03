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

	cout << setfg(WHITE) << "This color is " << setfg(GREEN) << "GREEN" << '\n';

	cout << iocolor::push()
		<< iocolor::setfg(iocolor::RED)
		<< "IOCOLOR\n"
		<< iocolor::pop();

	cout << iocolor::push()
		<< iocolor::lightmagenta()
		<< "========\n"
		<< iocolor::red() << "="
		<< iocolor::green() << "="
		<< iocolor::blue() << "="
		<< ' '
		<< iocolor::red() << 'I'
		<< iocolor::yellow() << 'O'
		<< iocolor::lightgreen() << 'C'
		<< iocolor::green() << 'O'
		<< iocolor::lightblue() << 'L'
		<< iocolor::blue() << 'O'
		<< iocolor::cyan() << 'R'
		<< ' '
		<< iocolor::lightmagenta() << '='
		<< iocolor::magenta() << '='
		<< iocolor::brown() << '='
		<< iocolor::pop()
		<< '\n';

	cout << "Press any key...";
	cin.get();
	return 0;
}