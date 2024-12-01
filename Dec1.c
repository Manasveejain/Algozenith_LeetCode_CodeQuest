#include <stdio.h>
#include<string.h>
char* triangleType(int* nums, int numsSize);

int main() {
    int nums[3],i;
    printf("Enter length of sides of triangle:");
    for(i=0;i<3;i++)
    scanf("%d",&nums[i]);
    
   char *result=triangleType(nums, 3);
   printf("%s",result);
 
    return 0;
}

char* triangleType(int* nums, int numsSize) {
 static char str[12];
if(nums[1]+nums[2]<=nums[0]||nums[0]+nums[2]<=nums[1]||nums[1]+nums[0]<=nums[2])
 strcpy(str, "none");
else if(nums[1]==nums[2]&&nums[0]==nums[1])
strcpy(str, "equilateral");
else if(nums[0]==nums[1]||nums[0]==nums[2]||nums[2]==nums[1])
strcpy(str, "isosceles");
else
strcpy(str, "scalene");

return str;
}
