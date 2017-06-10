/*

Given 6 Integers x1,y1,x2,y2,x3,y3 ,Find what Type of Triangle can be formed from (x1,y1)(x2,y2)(x3,y3)

Input : 0,0,2,0,0,2
Output : "Isosceles Triangle"

Types will be "Scalene","Equilateral","Isosceles","Cannot be a traingle"

Hint : Find 3 sides lengths ,and Find the type .You can use the formula for distance between two points .

Bonus Task : Also print whether its Acute , Obtuse or Right Angled Triangle
*/
#include<math.h>
#include<stdlib.h>
double distance(double x1,double y1,double x2,double y2){
    return(sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2)));
}
void typeofTraingle(int x1,int y1,int x2,int y2,int x3,int y3){

    double s1,s2,s3;
    s1=distance(x1,y1,x2,y2);
    s2=distance(x2,y2,x3,y3);
    s3=distance(x3,y3,x1,y1);
    //printf("s1=%f\ns2=%f\ns3=%f\n",s1,s2,s3);
    if(s1+s2>s3&&s2+s3>s1&&s3+s1>s2){
        if(s1==s2==s3){
            printf("Equilateral\n");
        }
        else if(s1==s2||s2==s3||s3==s1){
            printf("Iscosceles\n");
        }
        else{
            printf("Scalene\n");

        }
    }
    else{
        printf("Not Yet Implemented\n");
    }



}

int main(){

    typeofTraingle(0,0,2,0,0,2); //Should print "Iscosceles"

    typeofTraingle(0,0,2,3,4,0); //Should print "Equilateral"

    typeofTraingle(0,0,0,2,2,7); //Should print "Scalene"

    return 0;
}
