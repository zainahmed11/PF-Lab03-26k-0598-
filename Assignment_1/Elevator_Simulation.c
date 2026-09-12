#include <stdio.h>
int main() {
    int c_f = 0;
    int r_f;
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter floor: ");
        scanf("%d", &r_f);

        if (r_f > c_f) {
            printf("\nMoving Up");
        } else if (r_f < c_f) {
            printf("\nMoving Down");
        } else {
            printf("\nDoors Opening");
        }

        c_f = r_f;
    }

    return 0;
}
