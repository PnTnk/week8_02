#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int i = 0;
	int j = 0;
	char a[100];
	int x = 0;
	int y = 0;
	printf("Enter string :");
	scanf("%s", a);
	while (a[i] != '\0') { if(a[i] <= 'z' && a[i] >= 'a')x += 1; i += 1; }
	while (a[j] != '\0') { if(a[j] <= 'Z' && a[j] >= 'A')y += 1; j += 1; }
	printf("Uppercase = %d\n", y);
	printf("Lowercase = %d", x);
	return 0;
}