#include <stdio.h>
#include <string.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int sum(int nums[], int size){
    int sum = 0;
    for(int i = 0; i< size;i++){
        sum += nums[i];
    }

    return sum;
}


float mean(int nums[], int size){
    
    float mean = (float)sum(nums,size)/size;
    return mean;
}



int main(){
    int first_num;
    int second_num;
    int third_num;
    int fourth_num;
    printf("Whats your first number: ");
    scanf("%d",&first_num);
    printf("Whats your second number: ");
    scanf("%d",&second_num);
    printf("Whats your third number: ");
    scanf("%d",&third_num);
    printf("Whats your fourth number: ");
    scanf("%d",&fourth_num);


    int numbers[] = {first_num,second_num,third_num,fourth_num};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    float avg = mean(numbers,size);
    printf("size of list: %d\n",size);
    printf("Mean: %f",avg);
    return 0;
}