#include <iostream>
using namespace std;
int main(){

//if n has 3 divisors return true else return false.
int n;
cin>>n;  //take integer input
int cycle=0;

//after each iteration increase i by 1 
for(int i=1;i<=n;i++){
	// for a cycle multiply i with all numbers less than n
	for(int j=1;j<=n;j++){
		
	int	c=i*j; 
	// if c gives the same value as n then i is factor of n
	if(n==c){
	  
		
		cycle++;  //counts the number of factors of n
		
	}
	
	}
	
}

if(cycle==3){  // if n has 3 factors , returns true 
	return true;
}
//otherwise returns false
else{
	return false;
}

   return 0;
        
    }

	
