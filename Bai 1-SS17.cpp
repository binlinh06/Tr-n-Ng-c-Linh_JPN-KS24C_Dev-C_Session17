#include <stdio.h>
#include <stdlib.h>

void nhapMang(int** arr, int* n) {
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    *arr = (int*)malloc(*n * sizeof(int));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        exit(1);
    }
    printf("Nhap vao tung phan tu: ");
    for (int i = 0; i < *n; ++i) {
        scanf("%d", (*arr) + i);
    }
}

void hienThiMang(int* arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int doDaiMang(int* arr, int n) {
    return n;
}

int tongPhanTu(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int phanTuLonNhat(int* arr, int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int* arr = NULL;
    int n = 0;
    int choice;

    do {
        printf("MENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(&arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                printf("Do dai mang: %d\n", doDaiMang(arr, n));
                break;
            case 4:
                printf("Tong cac phan tu trong mang: %d\n", tongPhanTu(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat: %d\n", phanTuLonNhat(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }
    } while (choice != 6);

    free(arr);
    return 0;
}

