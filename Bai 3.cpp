#include <stdio.h>

// Hàm đệ quy tìm giá trị phần tử thứ n của cấp số cộng
int phanTuThuN(int a, int r, int n) {
	// Cơ sở của đệ quy: phần tử đầu tiên
	if (n == 1) {
		return a;
	}
	else {
		// Công thức đệ quy: Un = Un-1 + r
		return phanTuThuN(a, r, n - 1) + r;
	}
}

int main() {
	int a, r, n;

	// Nhập hạng đầu a, công sai r và vị trí phần tử n
	printf("Nhap hang dau (a): ");
	scanf_s("%d", &a);
	printf("Nhap cong sai (r): ");
	scanf_s("%d", &r);
	printf("Nhap vi tri phan tu (n): ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("Gia tri n khong hop le. n phai la so nguyen duong.\n");
		return 1; // Trả về 1 để chỉ định lỗi
	}

	// Tính phần tử thứ n
	int Un = phanTuThuN(a, r, n);
	printf("Phan tu thu %d cua cap so cong la: %d\n", n, Un);

	return 0;
}
