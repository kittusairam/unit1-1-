#include<stdio.h>
/*Given an integer and an array of size 32 ,Convert the integer into a binary form and store the bits in the array
I/p: 8
O/p: 1,0,0,0
(You might want to reverse the digits , or the array ,Think how you would represent the bits ,from first to last ,or last to first ,your wish , but I need them in an array )
*/
int main(){
	int stack[20], n;
	scanf("%d", &n);
	while (n){
		printf("%d,", n % 2);
		n = n / 2;
	}
	return 0;
}


/*
Complexity : best case O(N)
worst case O(N^2)
*/
