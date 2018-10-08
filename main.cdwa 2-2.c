#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==-b){ printf("%d",c);
	}
	else if(a==-c){ printf("%d",b);
	}
	else if(c==-b){ printf("%d",a);
	}
	else{ printf(" no ");
	}
	return 0;
}
