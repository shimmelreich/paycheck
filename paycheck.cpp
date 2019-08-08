#include <iostream>
using namespace std; 

int main() {
	int hr;
	cout << "How many hours?: ";
	cin >> hr;

	int minutes;
	cout << "How many minutes?: ";
	cin >> minutes;

	int allow;
	cout << "How many allowances do you claim?: ");
	cin >> allow;

	int wage;
	cout << "What is your hourly wage?: ";
	cin >> wage

		double fica = 0.062;
	double medicare = 0.0145;
	double state = 0.0425;

	double time;
	time = hr + minutes / 60;

	double gross_pay;
	gross_pay = time * wage;

	double pre_withheld;
	pre_withheld = gross_pay - 155.80*allow;

	double withheld;
	if (pre_withheld <= 88) {
		withheld = 0;
	}
	else if (pre_withheld > 88 && pre_withheld <= 447) {
		withheld = (pre_withheld - 88)*0.10;
	}
	else if (pre_withheld > 447 && pre_withheld <= 1548) {
		withheld = 35.90 + (pre_withheld - 447)*0.15;
	}
	else if (pre_withheld > 1548 && pre_withheld <= 3623) {
		withheld = 201.05 + (pre_withheld - 1548)*0.25;
	}
	else if (pre_withheld > 3623 && pre_withheld <= 7460) {
		withheld = 719.80 + (pre_withheld - 3623)*0.28;
	}
	else if (pre_withheld > 7460 && pre_withheld <= 16115) {
		withheld = 1794.16 + (pre_withheld - 7460)*0.33;
	}
	else if (pre_withheld > 16115 && pre_withheld <= 16181) {
		withheld = 4650.31 + (pre_withheld - 16115)*0.35;
	}
	else {
		withheld = 4673.41 + (pre_withheld - 16181)*0.396;
	}

	double net_pay;
	net_pay = gross_pay - gross_pay * (fica + medicare + state) - withheld;

	cout << "Net pay is approximately: " << net_pay
}