#include <stdio.h>

int main() {
    int result = 22;
    int answer;
    while (1) {
        printf("Nh�p s� ban doan: ");
        scanf("%d", &answer);
        if (answer > result) {
            printf("Lon hon m�t r�i\n");
        } else if (answer < result) {
            printf("Nho hon m�t r�i\n");
        } else {
            printf("�ung r�i!!!\n");
            break;  
        }
    }
    return 0;
}

