#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num;
int count;
int random;
time_t t;
srand((unsigned)time(&t));
random = rand()%21;
for(count = 0;count<5;count++){
	printf("enter the number\n");
	scanf("%d",&num);
	if(random==num){
		printf("your number is correct:%d",num);
		break;
	}
	else if(random<num){
		printf("your number is smaller then random number,look for another chance\n");
	}
	else if(random>num) {
		printf("your number is greater it is greater then random number\n");
	}
	}
	
	
		
		

	return 0;
}
