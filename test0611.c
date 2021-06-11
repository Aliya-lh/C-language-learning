//Ä£ÄâÊµÏÖmemmove
#include<stdio.h>

void* memove(void* dst, const void* src, size_t count) {
	void* ret = dst;
	if (dst <= src || (char*)dst>=((char*)src+count)) {
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;

		}
	}
	else {
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return (ret);
}

int main() {
	int dst[4] = { 0 };
	int src[4] = { 1,2,3,4 };
	memove(dst, src, sizeof(dst));
	for (int i = 0;i < 4;i++) {
		printf("%d", dst[i]);
	}
	return 0;
}