/*
Given a number n ,output a 2d Array or a Square matrix (n*n)  satisfying these 3 conditions
->All elements on the two diagonals of the final array are zero
->All elements in the upper right triangle of the final array are equal to 1
->All elements in lower left triangle of final array are equal to -1

I/P: 4
O/P:
0  1  1  1
-1  0  1  1
-1 -1  0  1
-1 -1 -1  0
*/
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			printf("-1\t");
		}
		printf("0\t");
		for (int j = 0; j < n - i + 1; j++){
			printf("1\t");
		}
	}
	return 0;
}