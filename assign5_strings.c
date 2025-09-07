#include<stdio.h>
int main() {
char str[] = "Hello";
char* p = str;
while (*p != '\0'){
    printf("%c", *p);
    p++;
}
printf("\nNumber of characters in the string: %ld\n", (p - str));
return 0;
}
