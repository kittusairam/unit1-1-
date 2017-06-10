/*
Function going to be implemented getNthPrime
*/
/*
Constraints : -N will be positive ,return -1 if negative .
*/

int getNthPrime(int n){
    /*
        Returns the Nth Prime number .
        Ex : Input 1 , Output :2
        Ex : Input 3 , Output :5 (It is the 3rd prime number )
        Ex : Input 4 , Output :7
        Ex : Input 10 , Output :29

    */
    /*
    Algorithm :
    1)count=0
    2)I=2
    3)Check if Each I value from 2 is prime or not (Use Loop )
    4)If I is Prime increment count
    5)If the count has reached N ,it means the current number is Nth prime number ,return it .you can return it there itself
    or break from loop and return it .
    Its like if N is 3 ,
    It checks if I=2 is prime or not , Its prime so ,Count will be 1 ,Increments I
    It again checks I=3 is prime or not ,Its prime ,so Count will be incremented ie 2 ,Increment I
    It checks I=4 is prime or not ,Its not ,So count will not be incremented ,Increment I
    It checks I=5 is prime or not ,Its prime ,So count will be incremented ie 3,Now count is 3 and N is also 3 ,So return I ie 5
    */
    int i=2,co=n;
    while(co){
            int c=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            co--;
        }
        i++;
    }
    return i-1;
}

int main(){


    int n1=getNthPrime(5);
    printf("1st Prime is %d\n",n1);

    int n2=getNthPrime(3);
    printf("3rd Prime is %d\n",n2);
}
