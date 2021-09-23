
#include "Questions.h"



int Q1_for(){
	int forSum = 0;
	
	// calculate your sum below..this has to use for loop
	for (int i = 30;i<=1000;i++){
		if (i%4 == 0) {
			forSum += i;
		}
	}
	
	
	// here, we return the calculated sum:
	return forSum;
}
int Q1_while(){
	int whileSum = 0;
	int index = 30;

	// calculate your sum below..this has to use while loop
	while (index <= 1000) {
		if (index%4 == 0) {
			whileSum += index;
		}

		index++;
	}
	
	// here, we return the calculated sum:
	return whileSum;
}
int Q1_do(){
	int doSum = 0;
	int index = 30;
	// calculate your sum below..this has to use do-while loop
	
	do {
		if (index%4 == 0) {
			doSum += index;
		}

		index++;
	} while (index <= 1000);
	
	// here, we return the calculated sum:
	return doSum;
}
//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit = 0;
	
	// Do your coding below to check
	if (100000 > abs(Q2_input) && abs(Q2_input) > 9999) {
		IsFiveDigit = 1;
	} else {
		IsFiveDigit = 0;
	}
	
	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program should return -1
*/	
	// this is the variable that holds the out value to return
	float GPA;
	
	// Do your coding below to calculate the GPA variable value
	if (100.0 >= Q3_input && Q3_input >= 90.0) {
		GPA = 4.0;
	} else if (90.0 > Q3_input && Q3_input >= 80.0) {
		GPA = 3.0;
	} else if (80.0 > Q3_input && Q3_input >= 70.0) {
		GPA = 2.0;
	} else if (70.0 > Q3_input && Q3_input >= 60.0) {
		GPA = 1.0;
	} else if (60.0 > Q3_input && Q3_input >= 0.0) {
		GPA = 0.0;
	} else {
		GPA = -1.0;
	}
	 
	// finally, we return the GPA
	return GPA;	
}
//===============================================================================================
double Q4(int Q4_input){
	
	// this is the variable that holds the pi value to return
	double pi=0;
	int modifier = 1;
	int divisor = 1;
	
	// Do your coding below to calculate the pi value
	
	for (int i = 0;i<Q4_input;i++) {
		pi += (4.0/divisor)*modifier;
		modifier = -modifier;
		divisor += 2;
	}
	// finally, we return the pi value
	return pi;	
}
//===============================================================================================
int Q5(){
	
	// this is the variable that holds and the total number of triples to return at the end of the function
	int totNumTriples = 0;
	
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/
	for (int i = 0;i<=400;i++) { //for our purposes, i is side 1, j is side 2, k is the hypotenuese
		for (int j = 0;j<=400;j++) {
			for (int k = 0;k<=400;k++) {
				if (i <= j) {
					if (i*i + j*j == k*k) {
						totNumTriples ++;
					}
				}
			}
		}
	}



	
	//finally you should return the total number of tribles.
	return totNumTriples;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;


		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    
		
		
		
		

	   return counts;

	
}
//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer
	
	
		return reversedInt;
	
}
int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	

	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	
	
	
	return reversedInt;

	
	
	
}
