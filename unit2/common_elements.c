/*
Sample File for Question 1, You need to create Files like these for every question .
Given two arrays , array1 and array2 , Copy all the elements which are common in both arrays into array3 ,[Don’t just print the common elements without copying them in array3]
I/p:
array1: 2,5,7,3,4
array2:  4,3,9,13,45
O/p:
array3: 3,4
*/
#include<stdio.h>

int main(){
	int array1[20], array2[20];
	printf("array1: ");
	for (int i = 0; i < 20; i++){
		scanf("%d", &array1[i]);
	}
	printf("array2: ");
	int k = 0,array3[20];
	for (int j = 0; j < 20; j++){
		scanf("%d", &array2[j]);
		for (int i = 0; i < 20; i++){
			if (array2[j] == array1[i]){
				array3[k++] = array2]j];
				break;//it will reduce the time complexcity
			}
		}
	}
	for (int i = 0; i < k; i++){
		printf("%d ", array3[i]);
	}

    return 0;
}


/*
Complexity : best case O(N)
			 worst case O(N^2) 
*/
