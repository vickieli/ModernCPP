#include <iostream>
using namespace std;
enum class Color:long{RED,GREEN,	BLUE};
void FillColor(Color color) {
	if (color == Color::RED)
		cout << "RED" << endl;
	else if (color == Color::GREEN)
		cout << "GREEN" << endl;
	else if (color == Color::BLUE)
		cout << "BLUE" << endl;
}
enum class TrafficLight:char{RED,GREEN,YELLOW};
int main() {
	Color c = Color::RED;
	FillColor(c);
	FillColor(Color::GREEN);
	FillColor(static_cast<Color>(2));
	int x = static_cast<int> (Color::RED);

	
}