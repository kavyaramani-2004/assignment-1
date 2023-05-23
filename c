#include <stdio.h>
int main() {
    int baby_count = 0;
    int school_count = 0;
    int adult_count = 0;
    int age;
    for (int i = 1; i <= 20; i++) {
        printf("Enter the age of person %d: ", i);
        scanf("%d", &age);
        if (age <= 3) {
            baby_count++;
        } else if (age <= 18) {
            school_count++;
        } else {
            adult_count++;
        }
    }
    printf("Number of persons in each age group:\n");
    printf("Baby age: %d\n", baby_count);
    printf("School age: %d\n", school_count);
    printf("Adult age: %d\n", adult_count);
    return 0;
}
