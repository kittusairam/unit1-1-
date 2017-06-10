/*) Given an array of numbers a , Output an array called fact_Array , which consists of the factorial of the given numbers in same indexes 
[Don’t just print it ,I need actual factorial values in fact_Array,Use Functions if possible )
I/P : 1,2,6,3,4
O/P: 1,2,720,24,6
Explanation , As a[2] is 6 ,and 6 factorial is 720 so fact_array[2] is 720
*/
int fact(int n){
	if (n == 0){
		return 1;
	}
	else{
		return n*fact(n - 1);
	}
}
int main(){
	int array1[20], fact_array[20];
	printf("array1: ");
	for (int i = 0; i < 20; i++){
		scanf("%d", &array1[i]);
		fact_array[i] = fact(array1[i]);
	}
	
	for (int i = 0; i < 20; i++){
		printf("%d ", fact_array[i]);
	}

	return 0;
}

