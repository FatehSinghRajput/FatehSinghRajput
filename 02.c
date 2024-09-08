#include <stdio.h>
	int main(){
	int A,B, temp;//input two integers
    printf("Enter two integers:");
    scanf("%d %d",&A,&B);//display the original value
	printf("Berfore swapping: A=%d,B=%d\n", A,B);//swap the value
	 temp=A;
	    A=B;
	    B=temp;// diaplay the swapped value
    printf("After swapping: A=%d, B=%d\n" , A, B);
	return 0;
	}
