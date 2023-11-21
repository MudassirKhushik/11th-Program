#include<iostream>
using namespace std;
int main(){
  int num1, num2;
	cout << "\tEnter Two Numbers : " << endl;
	cout << "First number : "; 
	cin >> num1;
	cout << "Second number : ";
	cin >> num2;
	
	if (num1 == num2) {
		cout << "The entered both numbers are equal.";
	} 
	
	else {
		cout << "The entered both numbers sre not equal. ";
	}
	
	return 0;
}
