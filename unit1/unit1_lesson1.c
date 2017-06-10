/*
Here you will be going to Learn about Conditionals and Switch cases

Links to Read :
->
->
Practice Links :
->http://www.includehelp.com/c-programs/c-if-else-aptitude-questions-and-answers.aspx

*/

#include <stdio.h>
#define PI 3.14

int main(){

    int grade;

    //Take input from keyboard into grade .
	scanf("%d", &grade);

    /*
        TASK1: WRITE a if ,else if ,else blocks which prints DISTINCTION if grade is >70 , AVERAGE if <=70 and >40 , FAIL if <=40.
    */
	if (grade > 70){
		printf("DISTINCTION");
	}
	else if (grade > 40){
		printf("AVERAGE");
	}
	else{
		printf("FAIL");
	}


    //Q1)Code Sample 1 : What does below code print .Why ?
    int x=22;
    if(x=10){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }


    int color=0;
    //TAKE input into color
	scanf("%d", &color);

    /*
    TASK 2 : Write a switch case block which prints "Nothing" if 0 is entered ,"RED" for 1 ,"BLUE" for 2 ,"GREEN" for 3 .and anything
    above 3 will print "Invalid Value entered "
    */

    switch(color){
	case 0: printf("Nothing"); break;
	case 1: printf("RED"); break;
	case 2: printf("BLUE"); break;
	case 3:printf("GREEN"); break;
	default:printf("Invalid Value entered"); break;
    }


    /*
        Q2)Code Sample 2 :What does the below code print why ?
    */
    char test='c';

    switch(test){
        case 'a':printf("A\n");
        case 'b':printf("B\n");
        case 'c':printf("C\n");
        case 'd':printf("D\n");
        default:printf("Default\n");

    }


    /*
        Shouldnt it print only B ? can you correct the above program ?
    */



    /*
        TASK 3 : Can you write a program to find if a letter is Consonant or vowel ?
        Hint : Use && , or combine multiple switch cases .
    */

    char letter;
    //TAKE Input into letter

	scanf("%c", &letter);

    //Actual code for task 3

	switch (letter){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': printf("vowel\n"); break;
	default: printf("Consonant\n"); break;


	}
}

/*
Answers :
1) It Prints always "TRUE" because of in the if statement there is no comparition oprator.
but the contaion assign operator(=), if if statement is dos assign x value to 10 and 10 is return to if statement thats way if statement is all ways true

2) It Prints always "B" because of before the switch statement test variable can be initialized to 'b' that's way case 'b' will be executed every time.
*/
