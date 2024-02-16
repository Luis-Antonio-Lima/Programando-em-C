#include <stdio.h>
#include <math.h>

int main() {
    int binario[6] = {1,0,1,1,1,0};

    int rs = 0;
    int pos = 0;
    int exp = 5;
    while (pos <= 5){
        rs += binario[pos] * ( pow(2, exp));
        pos++;
        exp--;
    }
    printf("%d\n", rs);
    return 0;
}