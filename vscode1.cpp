#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	string a, b, c;
	getline(cin, a);
	int len_a = a.length();
	if (a[0] == '0') {
		int vitri = 0;
		for (int i = 0; i < len_a; i++) {
			if (a[i] != '0') {
				vitri = i;
				break;
			}
		}
		for (int i = vitri; i < len_a; i++) {
			b += a[i];
		}
		int len_b = b.length();
		for (int i = len_b; i >= 0; i--) {
			c += b[i];
		}
		cout << stoi(c);
	}
	else {
		
		for (int i = 0; i < len_a; i++) {
			b += a[i];
		}
		int len_b = b.length();
		for (int i = len_b; i >= 0; i--) {
			c += b[i];
		}
		cout << stoi(c);
	}

}
