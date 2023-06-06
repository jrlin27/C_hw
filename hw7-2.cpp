// CT3407 Homework 7-2
// Passing arrays to function

#include <iostream>

using namespace std;

// add function prototypes here
void VAdd(double v1[], double v2[], double ans[]);
double VDot(double v1[], double v2[]);
void VCross(double v1[], double v2[], double ans[]);
void VPrint(double ans[]);

int main()
{
	double v1[3];
	double v2[3];
	double ans[3];
	double dot;

	cout<<"Please input v1."<<endl;
	for(int i=0; i<3; i++)
		cin >> v1[i];
	
	cout<<"Please input v2."<<endl;
	for(int i=0; i<3; i++)
		cin >> v2[i];

	cout<<"v1 is ";
	VPrint(v1);

	cout<<"v2 is ";
	VPrint(v2);


	VAdd(v1, v2, ans);
	cout<<"v1 add v2 is ";
	VPrint(ans);

	dot = VDot(v1, v2);
	cout<<"v1 dot v2 is "<<dot<<endl;

	VCross(v1, v2, ans);
	cout<<"v1 cross v2 is ";
	VPrint(ans);
}



// add function definitions here
void VAdd(double v1[], double v2[], double ans[]) {
	for (int i = 0; i < 3; i++) {
		ans[i] = v1[i] + v2[i];
	}
}
double VDot(double v1[], double v2[]) {
	double dot = 0.0;
	for (int i = 0; i < 3; i++) {
		dot += v1[i] * v2[i];
	}
	return dot;
}
void VCross(double v1[], double v2[], double ans[]) {
	ans[0] = v1[1] * v2[2] - v1[2] * v2[1];
	ans[1] = v1[2] * v2[0] - v1[0] * v2[2];
	ans[2] = v1[0] * v2[1] - v1[1] * v2[0];
}
void VPrint(double ans[]) {
	cout << "(" << ans[0] << "," << ans[1] << "," << ans[2] << ")" << endl;
}