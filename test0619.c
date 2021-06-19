//Ä£ÄâÊµÏÖstrstr
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* myStrstr(const char* str1, const char* str2) {
	assert(str1);
	assert(str2);
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;
	if (*str2 == '\0')
		return NULL;
	while (*cp) {
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr)) {
			s1++;
			substr++;
		}
		if (*substr == '\0') 
			return cp;
			cp++;
		
	}
}

int main() {
	char a[20] = "abbbcdef";
	char b[10] = "bbcde";
	printf("%s\n", myStrstr(a, b));
	system("pause");
	return 0;
}