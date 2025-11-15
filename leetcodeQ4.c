#include <stdio.h>
//could not include the limit check for value entered in the array as it was giving me a "not included in iso c90 error"//
void moveZeros(int *nums, int numsSize);

void moveZeros(int *nums, int numsSize){
	int i,j;
	int val;
	val=numsSize-1;
	for(i=0;i<=val;i++){
		if(nums[i]==0){
			for(j=i;j<val;j++){
				nums[j]=nums[j+1];
			}
			nums[val]=0;
			val--;
			i--; //checks the same value since array is shifted//
		}
	}
	for(i=0;i<numsSize;i++){
			printf("%d ", nums[i]);
		}
}
main(){
	int numsSize,i;
	printf("Enter the length of the array: ");
	scanf("%d", &numsSize);
	if(numsSize<1||numsSize>10000){
		printf("error");
		return;
	}
	int nums[10000];
	for(i=0;i<numsSize;i++){
		printf("Enter value %d: ", i+1);
		scanf("%d", &nums[i]);
	}
	moveZeros(nums,numsSize);	
}
