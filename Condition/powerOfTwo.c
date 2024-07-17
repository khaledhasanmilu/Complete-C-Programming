#include <stdio.h>
int main() {
unsigned int num;
printf("Enter num positive nonzero number: ");
scanf("%u", &num);
if (num > 0 && (num & (num - 1)) == 0)
printf("YES");
else
printf("NO");
return 0;
}