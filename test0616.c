//Ä£ÄâÊµÏÖstrcat
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
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
	return ret;
}

int main() {
	char str[32] = "abcd";
	char buf[32] = "efgh";
	printf("%s\n", myStrcat(str, buf));
	system("pause");
	return 0;
}