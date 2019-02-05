#include <iostream>
#include <curses.h>
using namespace std;

int main () {
	initscr();
	keypad(stdscr,TRUE);
	while (1) {
	int c;
	c = getch();
	cout << c << endl;
	if (c == KEY_UP) cout << "yes!" <<endl;
	//if (ch == 'a') cout << 'yes'
	//cin >> a;
	//cout << a << endl;
}
}