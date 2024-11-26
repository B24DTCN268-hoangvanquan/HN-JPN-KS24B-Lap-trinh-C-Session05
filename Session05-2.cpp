#include <stdio.h>

int main() {
    int result = 22;
    int answer;
    while (1) {
        printf("Nhâp sô ban doan: ");
        scanf("%d", &answer);
        if (answer > result) {
            printf("Lon hon mât rôi\n");
        } else if (answer < result) {
            printf("Nho hon mât rôi\n");
        } else {
            printf("Ðung rôi!!!\n");
            break;  
        }
    }
    return 0;
}

