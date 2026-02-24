#include <iostream>
using namespace std;
double areaOfRing(double outerRadius, double innerRadius) {
	const double PI = 3.14156;
	double area = PI * (outerRadius * outerRadius - innerRadius * innerRadius);
		return area;
}
int main() {
	double outerRadius, innerRadius;
	cout << " Enter outer Radius ";
	cin >> outerRadius;
	cout << " Enter inner Radius ";
	cin >> innerRadius;
	if (innerRadius >= outerRadius) {
		cout << " Invalid input! Outer Radius must be greater than inner radius ";
	}
	else {
		cout << " Areaof the ring is : " << areaOfRing(outerRadius , innerRadius);
	}
}
