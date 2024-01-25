
#include <stdio.h>

void input(int** a,int N);
void pic(int** a,int L,int n);

int main(){
	int L,N;
	scanf("%d %d",&L,&N);
	int** a = (int**)malloc(N * sizeof(int*));
	input(a,N);
	pic(a,L,N);

	free(a);
	return 0;
}

void input(int** a,int N){
	for(int i = 0; i < N; i++){
		a[i] = (int*)malloc(N * sizeof(int));
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < 2; j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void pic(int** a,int L,int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 1; j++){
			if(a[i][j] >= L && a[i][j + 1] >= L){
				if(a[i][j] == a[i][j + 1]){
					printf("ACCEPTED\n");
				}
				else{
					printf("CROP IT\n");
				}	
			}
			if(a[i][j] < L || a[i][j + 1] < L){
				printf("UPLOAD ANOTHER\n");
			}
		}
	}
}
