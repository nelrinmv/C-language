#include <stdio.h>
#include <string.h>

int main()
{
 char a[100], b[50];
 int n;
 printf("Enter first string: ");
 fgets(a, sizeof(a), stdin);
 printf("Enter second string: ");
 fgets(b, sizeof(b), stdin);
 n = strlen(a);
 if(n > 0 && a[n-1] == '\n') a[n-1] = '\0';
 n = strlen(b);
 if(n > 0 && b[n-1] == '\n') b[n-1] = '\0';
 if(strlen(a) + strlen(b) < sizeof(a))
 {
 strcat(a, b);
 printf("Combined = %s", a);
 }
 else printf("Strings are too long");
 return 0;
}