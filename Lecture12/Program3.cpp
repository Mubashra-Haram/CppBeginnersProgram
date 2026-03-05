//****** Example 1 **********
// this program demonstrates that when an array is passed to a function
// then it is ca call by refernce and the changes made by the function effects the original array
#include <iostream>;
using namespace std;
void getValue(int arr[], int arraysize) {
	int i;
	for (i = 0; i < arraysize; i++) {
		arr[i] = i;
		
	}
}
int main() {
	int arr[10],i;
		getValue(arr,10);
		cout << "Array is populated by values\n";
		for (i = 0; i < 10; i++) {
			cout << " arr[" << i << "] = " << arr[i] << endl;
		}
	}