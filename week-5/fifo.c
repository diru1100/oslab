#include<stdio.h>
#include<stdbool.h>
//implementing FIFO algorithm



bool isThere(int arr[],int size,int k){
	for(int i=0;i<size;i++){
		if(k==arr[i]){
			return true;
		}
	}
	return false;
}




int main(){

	int n;
	int superarr[3][20]={0};
	scanf("%d",&n);
	int framesize=3;
	//scanf("%d",&framesize);
	int count=0;

	int arr[3]={0};
	int i;
	for(i=0;i<n;i++){
		
		int ele;
		scanf("%d",&ele);
		if(!isThere(arr,framesize,ele) ){
			if(i<framesize){
				arr[i]=ele;
				
				count++;

			}else{
				for(int j=0;j<framesize-1;j++){				
					arr[j]=arr[j+1];
				}
				arr[framesize-1]=ele;
				count++;
		

			}
			
		}
		for(int k=0;k<framesize;k++){
			superarr[k][i]=arr[k];
		}


	}
	if(i==n){

			for(int k=0;k<3;k++){
				for(int j=0;j<i;j++){
					if(superarr[k][j]!=0){
						printf("%d \t ",superarr[k][j]);
					}else{
						printf("  ");
						printf("\t" );
					}
					

				}
				printf("\n");
			}
			printf("\n The number of page fault is: %d \n",count);
		}
	

	return 0;
}