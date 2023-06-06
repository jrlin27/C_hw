// CT3407 Homework 7-1
// Passing arguments in function

#include <iostream>

using namespace std;

// add function prototypes here
double VAdd(double x1, double y1, double z1, double x2, double y2, double z2, double *rX, double *rY, double *rZ);
double VDot(double x1, double y1, double z1, double x2, double y2, double z2);
double VCross(double x1, double y1, double z1, double x2, double y2, double z2, double *rX, double *rY, double *rZ);
double VPrint(double x, double y, double z);

int main()
{
	double x1, y1, z1;	//v1
	double x2, y2, z2;	//v2
	double x3, y3, z3;	//ans
	double dot;

	cout<<"Please input v1."<<endl;
	cin>>x1>>y1>>z1;
	cout<<"Please input v2."<<endl;
	cin>>x2>>y2>>z2;

	cout<<"v1 is ";
	VPrint(x1, y1, z1);

	cout<<"v2 is ";
	VPrint(x2, y2, z2);

	VAdd(x1, y1, z1, x2, y2, z2, &x3, &y3, &z3);
	cout<<"v1 add v2 is ";
	VPrint(x3, y3, z3);

	dot = VDot(x1, y1, z1, x2, y2, z2);
	cout<<"v1 dot v2 is "<<dot<<endl;

	VCross(x1, y1, z1, x2, y2, z2, &x3, &y3, &z3);
	cout<<"v1 cross v2 is ";
	VPrint(x3, y3, z3);
}



// add function definitions here
double VAdd(double x1, double y1, double z1, double x2, double y2, double z2, double *rX, double *rY, double *rZ) {
	*rX = x1 + x2;
	*rY = y1 + y2;
	*rZ = z1 + z2;
	return 0;
}

double VDot(double x1, double y1, double z1, double x2, double y2, double z2) {
	return x1 * x2 + y1 * y2 + z1 * z2;
}

double VCross(double x1, double y1, double z1, double x2, double y2, double z2, double *rX, double *rY, double *rZ) {
	*rX = y1* z2 - y2 * z1;
	*rY = z1* x2 - z2 * x1;
	*rZ = x1* y2 - x2 * y1;
	return 0;
}

double VPrint(double x, double y, double z) {
	cout << "(" << x << "," << y << "," << z << ")" << endl;
	return 0;
}