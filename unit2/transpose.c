/*Transpose of a 2d Array . Its simple ,Read what Tranpose of a matrix is in google [Should work with even 5x5 array ]
I/p:
1 3
4 5
o/p:
1 4
3 5

*/
int main(){
	int array1[20][20], reult[20][20];
	printf("array1: ");
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			scanf("%d", &array1[i][j]);
		}
	}
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			result[j][i] = array1[i][j];
		}
	}
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			printf("%d ", result[i][j]);
		}
	}

	return 0;
}

