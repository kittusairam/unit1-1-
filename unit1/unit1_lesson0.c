/*
Here you are going to learn about Different Data types available in C ,How To take input ,print output etc.
Links to Read or watch:
->https://www.youtube.com/watch?v=OSyjOvFbAGI&index=6&list=PL2_aWCzGMAwLSqGsERZGXGkA5AfMhcknE
->http://www.tutorialspoint.com/cprogramming/c_data_types.htm
->http://www.tutorialspoint.com/cprogramming/c_input_output.htm


*/
#include <stdio.h>
#define __FILL_THIS__ ;

int main(){

    int a,b;
    int temp=10;
    //Q0)What does below line print ?
    printf("Temp value is %d\n",temp);
    //Q1)What Does below printf Print and why ?
    printf("%d,%d\n",a,b);

    a=5;

    //Q2)What Does below printf Print and why ?
    printf("%d\n",a);

    //Take an integer as input from keyboard and store it in b. Hint : Use scanf
    scanf("%d",&b);

    //Print the B value .
    printf("%d\n",b);


    int sum=0;
    //Calculate sum of a and b and store it in sum
    sum=a+b;

    //PRINT SUM
    printf("%d\n",sum);

    //Q3)What does the below line do ? why
    printf("%4d\n",sum);
    //Q4)Does below line work ? , Uncomment and check and why ?
    //float a=7.65;
    float f1=7.65765;

    //Try printing a float value (f1)
    printf("%f\n",f1);

    //q5)What does the below line do , why ?
    printf("%.2f\n",f1);

    char c='a';
    //Print the above character
    printf("%c\n",c);
    //q6)What does below line print ? why ?
    printf("%d\n",c);

    char oneChar='1';

    //q7)What does below line print ? why ? Observe clearly what is printing
    printf("%c = %d\n",oneChar,oneChar);

    int oneInt;

    //Now copy value 1 into oneInt using oneChar ,(Hint:49 is 1 ,50 is 2 . Think)
    oneInt=oneChar;

    return 0;
}

/*
Answers :
0)It prints "Temp value is 10", because temp is assigned to 10 ,in prev line .
1) It prints Garbage values ,because of a and b are declared but not initialized.
2) It prints "5", because b is assigned to 5 ,in prev line .
3) It prints sum. for the sum display in console in a special format 4 blocks reserved for the sum.
4) If try to run it will shows "conflicting types for ‘a’" ,because of a is already with data type int so conflict occur to access 'a'.
5) It prints two precision floating point number. It tells the console to how many precisions to be display on screen
6) It prints "97",because of normally char can be store in an form of ACSII code and in a print statement we use %d of access specifier so it prints a ASCII of 'a'
7) It prints "1 = 49" .because of in a print statement oneChar can be different access specifiers.
*/
