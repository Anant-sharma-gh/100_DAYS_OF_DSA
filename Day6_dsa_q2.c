void moveZeroes(int* nums, int numsSize) {
    int i=0;
    int iz=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[iz++]=nums[i];
        }
    }
    for(int i=iz;i<numsSize;i++){
        nums[i]=0;
    }
}