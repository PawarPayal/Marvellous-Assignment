/*
	steps to develop the application
	step1:understand the problem statement
	step2:write the algorithm
	step3:decide the programming language(C/C++/Java/Python/______)
	step4:write the program
	step5:test the program
*/

//Accept N no from user and perform the addition

//input
//value of N=5
//values:10,20,30,40,50

//output
//Addition is :150

//Algorithm
/*
	Start
		Accept the  number of elements from user
		Allocate the memory to store that numbers 
		accept the numbers from user 
		perform addition of all numbers 
		Display the addition
	End
*/

#include<stdio.h>		//for printf and scanf
#include<stdlib.h>		//for malloc and calloc 

/////////////////////////////////////
//
//Application name :Addition of N numbers 
//input : N numbers 
//output: Addition
//Author: Payal Yashwant Pawar
//date  : 18September 2022
//
//////////////////////////////////////

int main()
{
	int *Arr=NULL;		//pointer to hold  address of array
	int isize=0;		//variable to hold size of array
	register int i=0;			//loop counter
	int isum=0;			//to hold the addition
	
printf("please enter the how many elements you want?\n");
scanf("%d",&isize);

//allocate the memory 
Arr =(int *)malloc(isize * sizeof(int));
printf("memory alloaction successful\n");
printf("please enter the elements");
//	  1		2     3
for (i=0;i<isize;i++)
{
	scanf("%d",&Arr[i]);//4
}

//perform addition
//	  1    2      3
for (i=0;i<isize;i++)
{
	isum=isum+Arr[i]; //4
}

printf("Addition is : %d\n",isum);
printf("memory gets deallocated\n");
free(Arr);

	return 0;
}
