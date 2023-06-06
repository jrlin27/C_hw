//NTNU_40923111L_地理三甲_林菁容

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main() {

	double ang;
	double deg;

	cout << "|--degree--|----sin----|----cos----|----tan----|" << endl;
	for (double deg = 0; deg <= 360; deg += 30)
	{
		double change(double deg ); 
		{
			ang = deg * 3.141592654 / 180;
		}
		cout << "|" << setw(10) << setprecision(5) << deg << "|" ;
		cout << setw(11) << setprecision(4) << sin(ang) << "|" ;
		cout << setw(11) << setprecision(4) << cos(ang) << "|" ;
		cout << setw(11) << setprecision(4) << tan(ang) << "|" << endl;

	}
	return 0;
}
