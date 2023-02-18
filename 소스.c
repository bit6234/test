/*
#include <stdio.h>

void ShowAllString(int argc, char * argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%d \n", argv[i]);
}

int main(void)
{
	char * str[3] = {
		"C ProGramming",
		"C++ Programming",
		"Java Programming"
	};
	ShowAllString(3, str);
	return 0;
}
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달된 문자열 수: %d \n", argc);

	while (argv[i] != NULL)
	{
		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
		i++;
	}return 0;
}