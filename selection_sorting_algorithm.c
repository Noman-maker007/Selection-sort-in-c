#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void selection_Sorting_algorithm(){
	int array_of_numbers[500];
	int size_of_array = 5;
	//int maximum_value;
	//int minimum_value;
	int temp;
	for(int first_loop=0;first_loop<size_of_array;first_loop++){
		printf("assign your value\n");
		scanf("%d",&array_of_numbers[first_loop]);
	}
	
	for(int checking_unsorted_numbers=0;checking_unsorted_numbers<size_of_array;checking_unsorted_numbers++){
		printf("Your unsorted elements are |%d|\t\n",array_of_numbers[checking_unsorted_numbers]);
	}
	
	for(int second_loop=0;second_loop<size_of_array;second_loop++){
		//minimum_value = second_loop;
		for(int nesting_loop=second_loop+1;nesting_loop<size_of_array;nesting_loop++){
		//maximum_value = nesting_loop;
			if(array_of_numbers[nesting_loop]<array_of_numbers[second_loop]){
				temp = array_of_numbers[second_loop];
				array_of_numbers[second_loop] = array_of_numbers[nesting_loop];
				array_of_numbers[nesting_loop] = temp;
			}
		}
	
	}
	
	for(int sorted_output=0;sorted_output<size_of_array;sorted_output++){
		printf("\n Your Sorted Elements are : %d",array_of_numbers[sorted_output]);
	}
}
int main(){
	selection_Sorting_algorithm();
	return 0;
}