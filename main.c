#include <stdio.h>

int main()
{
    char name[100];
    int c = 1;

    while(c != 0) {
        printf("%s", "What's your name?: ");
        scanf("%s", &name);
	printf("Hello, %s\n", name);
	printf("Do you want to continue? [YES: 1 / NO: 0]: ");
	scanf("%d", &c);
    }

    return 0;
}
