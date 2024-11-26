#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Nhâp môt sô nguyên duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhâp môt sô nguyên duong!\n");
        return 1; 
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Tông các sô tu 1 dên %d là: %d\n", n, sum);

    return 0;
}

