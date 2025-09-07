#include<stdio.h>
int main() {
int var = 4;
int* p = &var;
printf("Address of var using var itself: %p\n", &var);
printf("Address of var using its pointer: %p\n", p);
printf("Value of var: %d\n", var);
*p = 5;
printf("New Value of var: %d\n", var);

return 0;
}
