#include <stdio.h>

int main() {
    int c1[10] = {10,5,68,8,47,12,54,13,62,11};

    int c2[15] = {11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};

    int i, w;

    for(i = 0; i <= 9; i++){
        for (w = 0; w <= 14; w++) {
            if (c1[i] == c2[w]) {
            printf("%d\n", c1[i]);
            }
        }
    }
    return 0;
}