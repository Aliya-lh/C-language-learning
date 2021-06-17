//Ä£ÄâÊµÏÖmemcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* myMemcpy(void* dst, const void* src, size_t count) {
	void* ret = dst;
	assert(dst!=NULL);
	assert(src!=NULL);
	while (count--) {
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main() {
	int arr1[5] = { 0 };
	int arr2[5] = { 1,2,3,4,5 };
	myMemcpy(arr1, arr2, 12);
	for (int i = 0;i < 5;i++) {
		printf("%d", arr1[i]);
	}
	system("pause");
	return 0;
}