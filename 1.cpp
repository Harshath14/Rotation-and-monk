#include <stdio.h>

int main(){
	int test_number , N, K, i, j;
	scanf("%d", &test_number);
	for(j=0; j<test_number;j++){
		scanf("%d %d", &N, &K);
	    int a[N];
	for(i=0;i<N; i++)
	   scanf("%d",&a[i]);
	
	for(i=N-K; i<N;i++)
	   printf("%d", a[i]);
	
	for(i=0;i<N-K;i++)
	   printf("%d",a[i]);
	printf("\n");
	
}
}