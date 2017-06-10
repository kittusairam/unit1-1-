/*
Write two Functions getDigitSum and GetFinalDigitSum.
*/
/*
Constraints :
-99999<= number <=99999
*/
int getDigitSum(int number){
    /*
    Input : A number
    Output : Returns sum of all digits in that number
    Ex : Input :456 , Output :15
    Ex : Input :1234 ,Output :10
    */
    int sum=0;
    while(number){
        sum+=(number%10);
        number/=10;
    }
    return sum;
}

int getFinalDigitSum(int number){

    /*
    Input : A number
    Output : Returns sum of all digits in that number ,and computes the Sum again if Prev sum is not a single digit
     ,This repeats until sum is a single digit
    Ex : Input :999 Output :9
    Explanation : 9+9+9 is 27 , 27 is 2 digits ,So we calc sum again ie 2+7 = 9 ,Now sum is 9 ,so return it

    Ex 2 : Input : 99991 Output: 1
    Explanation : 9+9+9+9+1 => 37 => 3+7 =>10 => 1+0 => 1
    Tip :Use the getDigitSum function and a Loop to solve this question.
    */
    while(number/10>9){
        number=getDigitSum(number);
    }
    number=getDigitSum(number);
    return number;
}
int main(){

    //Test the above two functions from here ,Write More Test cases so that your Code works for all .

    int sum1=getDigitSum(123);
    printf("Digits sum of 123 is %d\n",sum1);


    int sum2=getDigitSum(765);
    printf("Digits sum of 765 is %d\n",sum2);


    int sum3=getFinalDigitSum(993);
    printf("Final Digits sum of 993 is %d\n",sum3);
}
