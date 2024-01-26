#include <stdio.h>
void ans();

int main(){	
	ans();
	return 0;
}
void ans(){
	int num;
	while(1){
		scanf("%d",&num);
		if(num == 42){
			break;
		}
		else{
			printf("%d\n",num);
		}
	}
}
