#include <iostream>
using namespace std;
int main(){
// ADD DIGITS OF A NUMBER TILL THE SUM BECOMES SINGLE DIGIT AND RETURN IT.
    int num;
    cin>>num; // takes an integer input
//variables initialization
     int digit;
     int sum=0;
     int newNum=0;
     int digit1;
     int sumF=0;
//loop which adds digits of a number 
      while(num!=0){
          digit=num%10; //gives last digit
          num=num/10; // gives all digits except last
          sum+=digit; // adds digits and stores them 
         
      }
        
      //takes the sum and then adds its digits till we get a single digit number
while (sum >= 10) { 
    newNum = sum;   
    sumF = 0;       
    
    while (newNum > 0) {
        digit1 = newNum % 10;
        sumF += digit1;
        newNum = newNum / 10;
    }
    
    sum = sumF; 
}
     cout<<sum;
        return sum;
        
    }
