#include <stdio.h>


int removeDuplicates(int *nums , int numsSize);

int removeDuplicates(int *nums, int numsSize){
	int i,j,val,count=0,k=0;
	val=numsSize-1;
	for(i=0;i<=val;i++){
		if(nums[i]==nums[i+1]){
			for(j=i;j<val;j++){
				nums[j]=nums[j+1];
			}
			nums[val]=0;  //adding zero when duplicate found and shifting the array left//
			val--;
			count++; //counting the number of zeros added hence number of duplicates//
			i--;
		}
	}
	for(i=0;i<numsSize-count;i++){
		k++; //counting the unique elements//
	}
	printf("Array after duplicates removed: ");
	for(i=0;i<numsSize;i++){      //after removing duplicates zero are added at the end to fill the array//
		printf("%d, ", nums[i]);
	}
	return k;
}
int main(){
	
	int numsSize;
	int nums[30000];
	int i,k;
	printf("Enter the size of the array: ");
	scanf("%d", &numsSize);
	if(numsSize<1||numsSize>30000){
		printf("Error");
		return;
	}
	for(i=0;i<numsSize;i++){
		printf("Enter value %d: ", i+1);
		scanf("%d", &nums[i]);
		if(nums[i]<-100||nums[i]>100){
			printf("Error");
			return;
		}
	}
	k=removeDuplicates(nums,numsSize);
	printf("\nNumber of unique elements %d", k);
	
}
