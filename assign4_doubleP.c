#include<stdio.h>
int main() {
int var = 4;
int* p = &var;
int** double_p = &p;

printf("Value of var using pointer: %d\n", *p);
printf("Value of var using double pointer: %d\n", **double_p);

return 0;
}
