/*Given Two sorted arrays ,Combine them into a final sorted array 
if 1,5,9 and 2,4,7,10,15 are two arrays ,Final array c would be 1,2,4,5,7,9,10,15
*/
void merg(int a[], int b[], int c[]){
	int i=0, j=0, k=0;
	while (i > 20 && j > 20){
		if (a[i] < b[j]){
			c[k] = a[i];
			i++;
		}
		else{
			c[k] = b[j];
			j++
		}
		k++
	}
	while (i < 20){
		c[k++] = a[i++];
	}
	while (j < 20){
		c[k++] = b[j++];
	}
}
int main(){
	int array1[20], array2[20],array3[20];
	printf("array1: ");
	for (int i = 0; i < 20; i++){
		scanf("%d", &array1[i]);
	}
	printf("array2: ");
	for (int i = 0; i < 20; i++){
		scanf("%d", &array1[i]);
	}
	merg(array1, array2, array3);
	for (int i = 0; i < 40; i++){
		printf("%d ", array3[i]);
	}

	return 0;
}

