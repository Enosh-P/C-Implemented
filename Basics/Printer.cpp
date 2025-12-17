#include <iostream>
using namespace std;


int main()
{
	cout << "Hello Enosh!"<<endl; // Flush instantly
	cout << "Oi" << '\n'; // Flush periodically as normal and recommended
	int x {};
	cin >> x ;
	char y {};
	cin >> y;
	char z {};
	cout << "Output " << x << " Now Y " << y << " Now Z "<< z <<'\n';
	return 0;
}