
#include <pthread.h>
#include <stdio.h>

void* some_func() {
	printf("alksjdoaskd\n");
	return NULL;
}

int main() {
	pthread_t pth;

	pthread_create(&pth, NULL, some_func, NULL);
	pthread_join(pth, NULL);

	printf("asijda\n");
	return 0;
}