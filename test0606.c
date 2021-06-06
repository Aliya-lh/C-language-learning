//Ä£ÄâÊµÏÖstrcat
#include<stdio.h>
#include<assert.h>
#include<windows.h>
char* myStrcat(char* dest, const char* src) {
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest) {
		dest++;
	}
	while ((*dest++ = *src++)) {
		;
	}
	return 0;
}

int main() {
	char str[] = "abcd";
	char buf[] = "efgh";
	printf("%s\n", myStrcat(str,buf));
	system("pause");
	return 0;
}