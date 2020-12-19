#include <stdio.h>
#include <malloc.h>
/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
例如：给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
int* twoSum(int* nums,int numsSize,int target,int* returnSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                int* ret=(int*)malloc(sizeof(int)*2);
                ret[0]=i;
                ret[1]=j;
                *returnSize=2;
                return ret;
            }
        }
    }
    *returnSize=0;
    return NULL;
}

int main() {
    int nums[]={2,7,11,15};
    int target=9;
    int n=sizeof(nums)/sizeof(int);
    int returnSize[3];
    int *res;
    res=twoSum(nums,n,target,returnSize);
    for(int i=0;i<2;i++){
        printf("%d\n",res[i]);
    }
    return 0;
}
