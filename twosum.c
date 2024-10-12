int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int*indexno=(int*)malloc(2*sizeof(int));

    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(*(nums+i)+*(nums+j)==target)
            {
                *indexno =i;
                *(indexno+1)=j;
                *returnSize=2;
                return indexno;
                
            }
        }
        

    }
    return NULL;
    
}
