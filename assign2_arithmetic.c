#include<stdio.h>
int main() {
int arr[] = {1,2,3,4,5};
int* p = arr;
printf("Printing the values of the array using pointers:\n");
for(int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i));
}
printf("Replacing the 2nd element with 10.\n");
*(arr+1) = 10;
printf("Replacing the 5th element with 0.\n");
*(arr+4) = 0;
p = arr;
printf("Printing the values of the array using pointers:\n");
for(int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i));
}
printf("Printing the values of the array using array name:\n");
for(int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
}

return 0;
}
