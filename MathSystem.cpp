#include <iostream>
using namespace std;

#define SetAdd 1
#define SetSub 2
#define SetMiv 3
#define SetDivision 4

void MathPrepare(int, int, int);

int main()
{
	int SetA, SetB, SetPrepare;
	int SetPerson;
	while (true) {
		cout << endl << "請問有幾位[1~10]:";
		cin >> SetPerson;
		if (SetPerson <= 10 && SetPerson >= 1) {
			for (int Run = 1; Run <= SetPerson; Run++) {
				cout << endl << "第" << Run << "位:";
				while (true) {
					cout << endl << "1.Add\t2.Sub\t3.Miv\t4.Division";
					cout << endl << "please prepare[1~4]:";
					cin >> SetPrepare;
					if (SetPrepare <= 4 && SetPrepare >= 1) {
						cout << endl << "歡迎進入數學系統 !!" << endl;
						while (true) {
							cout << endl << "please input SetA:";
							cin >> SetA;
							if (SetA > 0) {
								while (true) {
									cout << endl << "please input SetB:";
									cin >> SetB;
									if (SetB > 0) {
										MathPrepare(SetPrepare, SetA, SetB);
										break;
									}
									else if (SetB <= 0) {
										cout << endl << "請重新輸入一遍 !!" << endl;
									}
								}
								break;
							}
							else if (SetA <= 0) {
								cout << endl << "請重新輸入一遍 !!" << endl;
							}
						}
						break;
					}
					else if (SetPrepare > 4) {
						cout << endl << "請重新輸入一遍 !!" << endl;
					}
				}
			}
			break;
		}
		else if (SetPerson > 10) {
			cout << endl << "請重新輸入一遍 !!" << endl;
		}
	}
}

void MathPrepare(int Prepare, int A, int B) {
	switch (Prepare) {
		case SetAdd: {
			cout << endl << "A + B = " << A + B << endl;
			break;
		}
		case SetSub: {
			cout << endl << "A - B = " << A - B << endl;
			break;
		}
		case SetMiv: {
			cout << endl << "A * B = " << A * B << endl;
			break;
		}
		case SetDivision: {
			cout << endl << "A / B = " << A / B << endl;
			break;
		}
	}
}