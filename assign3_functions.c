#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
int val1 = 2, val2 = 4;
printf("Value of val1 before swap: %d\n", val1);
printf("Value of val2 before swap: %d\n\n", val2);
printf("Calling swap.\n\n");
swap(&val1, &val2);
printf("Value of val1 after swap: %d\n", val1);
printf("Value of val2 after swap: %d\n", val2);

return 0;
}
