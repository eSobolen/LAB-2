#include <stdio.h>
#include <stdlib.h>



int main() {
	int x,y,r;
	printf("Enter x and y:  ");
	scanf("%d%d",&x,&y);
	r=sqrt(x*x+y*y);
	if(r==1){
		printf("Yes");
	}
	 else{
	 printf("No");}
	return 0;
}
