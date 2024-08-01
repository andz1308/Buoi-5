#include <stdio.h>

// Hàm tìm ước chung lớn nhất (UCLN) của hai số nguyên dương a và b
int UCLN(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b; // Nếu a lớn hơn b, thay thế a bằng a - b
		}
		else {
			b = b - a; // Nếu b lớn hơn a, thay thế b bằng b - a
		}
	}
	return a; // Khi a và b bằng nhau, đó là UCLN
}

int main() {
	int a, b;

	// Nhập hai số nguyên dương a và b
	printf("Nhap hai so nguyen duong a va b: ");
	scanf_s("%d %d", &a, &b);

	// Kiểm tra nếu a hoặc b không phải số nguyên dương
	if (a <= 0 || b <= 0) {
		printf("Hai so phai la so nguyen duong.\n");
		return 1;
	}

	// Gọi hàm UCLN và in kết quả
	int ucln = UCLN(a, b);
	printf("UCLN cua %d va %d la: %d\n", a, b, ucln);

	return 0;
}
