#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	float S = 1;
	int i;

	printf("Nhap so nguyen : ");
	scanf("%d",&n);

	if(n>1){
		for(i=2;i<=n;i++){
			S=S+(1/(float)i);
		}
	}else{
		printf("Error!");
		return 0;
	}

	printf("S = %f",S);


	return 0;
}
