#include <iostream>
using namespace std;
int main() {
	double bill, discount = 0, netBill;
	cout << "Amount of bill  ";
	cin >> bill;
	if (bill == 0) {
		cout << "Enter valid bill";
	}
	else if (bill < 5000) {
		discount = bill * (10.0 / 100);
		netBill = bill - discount;
		cout << "Discount at the rate of 10% is Rupees " << discount<<endl;
		cout << "The payable amount is Rupees " << netBill<<endl;
	}
	else if (bill >= 5000) {
		discount = bill * (15.0 / 100);
		netBill = bill - discount;
		cout << "Discount at the rate of 15% is Rupees " << discount<<endl;
		cout << "The payable amount is Rupees " << netBill<<endl;
	}

}