#include<iostream>
using namespace std;
bool soChinhPhuong(int n) {
	return ((int)sqrt(n) == sqrt(n)) ? true : false;
}
bool soHoanThien(int n) {
	int sum = 0;
	for (int i = 0; i < n/2; i++) {
		if (n%i == 0)
			sum += i;
	}
	if (sum == n)
		return true;
	else
		return false;
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;

	bool kiemTraSCP = soChinhPhuong(n);
	if (kiemTraSCP == true)
		cout << "la so chinh phuong";
	else
		cout << "khong phai so chinh phuong";

	bool kiemTraSHT = soHoanThien(n);
	if (kiemTraSHT==true)
		cout << "la so hoan thien";
	else
		cout << "khong phai so hoan thien";

	return 0;
}