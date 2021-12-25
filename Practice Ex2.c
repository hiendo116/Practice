#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverseArray(int arr[], int n)
{
    int rarr[n];
 
    for (int i = 0; i < n; i++) {
        rarr[n - 1 - i] = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = rarr[i];
    }
}



int main(int argc, char *argv[]) {
	
 int n;
 int i;
 
 printf("Nhap so phan tu cua mang : ");
 scanf("%d",&n);
 
 int arr[n];
 
 for(i=0;i<n;i++){
 	printf("\nNhap phan tu arr[%d] cua mang : ",i);
 	scanf("%d",&arr[i]);
 }
 
 reverseArray(arr,n);
 
 for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



	return 0;
}
