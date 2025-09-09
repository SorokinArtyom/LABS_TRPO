#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
<<<<<<< HEAD
	char name[255];
	printf("Enter your name: ");
	fgets(name, 255, stdin);
	printf("length = %d\n", strlen(name)); /* debug line */
	name[strlen(name)-1] = '\0'; /* remove the newline at the end */
	printf("Hello, %s!\n", name);
	return 0;
=======
char first[255], last[255];
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
printf("Hello %s %s!\n", first, last);
return 0;
>>>>>>> edf5b4a5d34f42e0fffdaa1bebfeae6e7f792c7c
}