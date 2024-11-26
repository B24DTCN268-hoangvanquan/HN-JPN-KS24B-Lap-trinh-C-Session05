#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Tong cua %d va %d la: %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %d va %d la: %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %d va %d la: %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                
                if (num2 != 0) {
                    printf("Thuong cua %d va %d la: %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Da thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 5); 

    return 0;
}

