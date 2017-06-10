/*
In this unit you will learn How to work with Arrays and complexity Analysis .
Read the Getting Started with Arrays word document and start this lesson .
*/
#include <stdio.h>

void print_array(int array[],int len);
int arraysum(int array[],int len);
int main(){

    //This is how you declare an array .
    int array1[10];

    //array1 is a array which can hold 10 integers .First integer will be stored at a[0] location .

    //Q1)What does the below line print
    printf("%d\n",array1[0]);

    //Q2)What does the below loop print and Why ?.
    int i=0;
    for(i=0;i<10;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    //If you ran the above loop ,you would understand what does garbage values means ,We can override
    //that behaviour  by initializing arrays with values.

    int array2[10]={0}; //Initialize an array with all 0s.
    int array3[10]={2,3,1,4,5,6,7,8,9,10}; //Initialize an array with specific values .

    //Print the array again .
    i=0;
    for(i=0;i<10;i++){
        printf("%d ",array2[i]);
    }
    printf("\n");

    //Isnt it tedious to write the same loop again and again to print the Array , You can solve this by writing a function.
    //The function should take an array and length of array as input ,and print it .
    //TASK 1 , Implement print_array function.

    print_array(array3,10);


    //Now lets learn how to take input into an array from keyboard .
    int array4[5];
    //Notice that array4[0], array4[1] .. .so on are just variables ,so you can take input into them directly ,
    //the same way you take input for normal variables by using & sign .
    //Way 1 : Un comment and check.
    
        scanf("%d",&array4[0]);
        scanf("%d",&array4[1]);
        scanf("%d",&array4[2]);
        scanf("%d",&array4[3]);
        scanf("%d",&array4[4]);
		

    //Use can write print array and pass array4 and len as 5 ,to check your input got stored or not .
		print_array(array4, 5);

    //Isnt the above process a bit tedious again ,What if the array has 100 elements ,would you use 100 scanf's ?
    //Use a for loop to solve the above problem ..
		for (int t=0; t <= 100; t++){
			scanf("%d", &array4[t]);
		}


    i=0;
    int len=5;

    for(i=0;i<len;i++){
        //Write a line which uses scanf and take input into array 4 , Hint you can use i variable for indexing
		scanf("%d", &array4[i]);
    }

    //Now print the array4 again .
	print_array(array4, 5);

    //Task 2 : Write a array sum function which returns the sum of all elements in the array .

    int sum=arraysum(array4,len);
    printf("Sum of array 4 is :%d\n",sum);
}

//Notice the syntax of parameters ,They are many ways to send an array to a function ,This is one of those .
void print_array(int array[],int len){
    //len contains the number of elements array has.
    printf("Task 1 ,Not yet implemented");
	for (int i = 0; i < len; i++){
		printf("%d ", array[i]);
	}

    //Use \n to seperate one print_array call from another .
    printf("\n");
}

int arraysum(int array[],int len){
    //Return the sum of all numbers in the Array
    printf("Task 2 ,Not yet implemented");
	int sum = 0;
	for (int i = 0; i < len; i++){
		sum += array[i];
	}
    return sum;
}


/*
Answers :
1) It Prints "garbage value" because of array can be declared only can't initiolize so the default can not be expected 
2) It Prints the 10 garbage values separated by the space becausse of the after declation of array garbage values can be stored in c
3)
*/
