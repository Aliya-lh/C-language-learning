//Ä£ÄâÊµÏÖstrcmp
#include<stdio.h>
#include<assert.h>
int myStrcmp(const char* src, const char* dst) {
	int ret = 0;
	assert(src != NULL);
	assert(dst != NULL);
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst)&&*dst) {
		++src;
		++dst;
	}
	if (ret < 0) {
		ret = -1;
	}
	else if (ret > 0) {
		ret = 1;
	}
	return ret;
}

int main() {
	char src[] = "abce";
	char dst[] = "abcd";
	printf("%d\n", myStrcmp(src, dst));
	return 0;
}