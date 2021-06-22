//Ä£ÄâÊµÏÖstrcpy
#include<stdio.h>
#include<assert.h>
char* myStrcpy(char* dest, const char* src) {
	assert(dest != NULL);
	assert(src != NULL);
	while (*src!='\0') {
		*dest++ = *src++;
	}
	*dest = *src;
	return dest;
}
int main() {
	char str1[256] = "hahahaha";
	char str2[] = "I like you!";
	myStrcpy(str1,str2);
	printf("%s\n", str1);
	return 0;
}