#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float t, A[20]={3.76,1.34,7.53,32.65,5.78,67.32,9.76,65.98,23.43,87.65,7.98,12.65,89.45,45.87,32.76,4.23,57.89,15.87,45.76};
	int i , j, n;
	
	n=sizeof(A)/sizeof (float);
	
	for (i=1;i<n;i++){
		j=i-1;
		t=A[i];
		while (j>=0 &&t<A[j]){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=t;
	}
	
	for (i=0;i<n;i++){
		printf("%d %10.2f \n", i, A[i]);
	}
	
	return 0;
}