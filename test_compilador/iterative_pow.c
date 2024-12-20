# include <stdio.h>

int main() {
    
    int base= 1;
    int exp = 1;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    for(int i = 0; i < exp; i++) {
        result *= base;
    }

    printf("Answer = %d\n", result);
    return 0;
}