#include<stdio.h>
#include<stdlib.h>
#include "SortIF.h"
#include "SortImpl.h"

void main(){
	int opt=1;
	NumberADT *N=(NumberADT *)malloc(sizeof(NumberADT));
	int size;
	printf("\nEnter Size of the Array ADT:  ");
	scanf("%d",&size);
	initADT(N,size);
	int *arr,ins_size=size,x,res;


	while(opt!=0){
		printf("\n\n\t\t\tSORTING APPLICATION\n");
		printf("\nEnter A Choice:\n\t1 to Insert Elements\n\t2 to Display Elements\n\t3 to Shell Sort\n\t4 to Selection Sort\n\t0 to Quit\n\tYour Choice -> ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the No. of Elements you wish to enter: ");
				scanf("%d",&ins_size);
				arr=(int *)malloc(sizeof(int)*ins_size);
				if(ins_size>size)
					printf("\nThe size exceeds ADT size. Enter size less than %d.",N->size);
				else{
					printf("\nEnter the elements: ");
					x=0;
					while(x<ins_size)
						scanf("%d",&arr[x++]);
			
					insertElements(N,arr);
					printf("\nThe entered elements have been successfully overwritten/copied into the array!");
				}
				break;
			case 2:
					display(N);
					break;
			case 3:
					shellSort(N);
					printf("\nSorted Array:\n");
					display(N);
					break;
			case 4:
					selectionSort(N);
					printf("\nSorted Array:\n");
					display(N);
					break;
			case 0:
				printf("\n\t\tThank You!");
				break;
			default:
				printf("\n\tInvalid Option!");
				break;
		}
	}
}

/*
OUTPUT:
(base) vishakan@legion:~/Desktop/Semester III/Lab/Data Structures/Sorting$ gcc SortAppl.c -o s
(base) vishakan@legion:~/Desktop/Semester III/Lab/Data Structures/Sorting$ ./s

Enter Size of the Array ADT:  10


			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 1

Enter the No. of Elements you wish to enter: 10

Enter the elements: 5 4 2 39 20 33 12 32 44 31

The entered elements have been successfully overwritten/copied into the array!

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 2

Elements of the Array:
5	4	2	39	20	33	12	32	44	31	132369	

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 3

Sorted Array:

Elements of the Array:
2	4	5	12	20	31	32	33	39	44	132369	

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 1

Enter the No. of Elements you wish to enter: 10     

Enter the elements: 2 9 4 3 1 10 29 32 11 38

The entered elements have been successfully overwritten/copied into the array!

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 2   

Elements of the Array:
2	9	4	3	1	10	29	32	11	38	132321	

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 4

Sorted Array:

Elements of the Array:
1	2	3	4	9	10	11	29	32	38	132321	

			SORTING APPLICATION

Enter A Choice:
	1 to Insert Elements
	2 to Display Elements
	3 to Shell Sort
	4 to Selection Sort
	0 to Quit
	Your Choice -> 0

		Thank You!
*/