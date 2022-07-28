#include<stdio.h>
#include<math.h>

int main(){
    int a[7] = {5,3,7,9,2,1,5};
    //Mean
    int sum = 0,size = 7;
    int i;
    for(i=0;i<7;i++){
        sum += a[i];
    }
    float avg = (float)sum/size;
    printf("\nMean Value = %f",avg);

    //Median
    int j,k;
    for(i=0;i<7;i++){
        int smallest = 10000000;
        int small_index = i;
        for(j=i;j<7;j++){
            if(a[j]<smallest){
                smallest = a[j];
                small_index = j;
            }
        }
        a[small_index] = a[i];
        a[i] = smallest;
    }

    int median1=0,median2=0;
    int mead_index;
    if(size%2!=0){
        mead_index = floor(size/2);
        printf("\nMedian Value = %d",a[mead_index]);
    }
    else{
        median1 = floor(size/2);
        median2 = median1 + 1;
        printf("\nMedian Values = %d %d",a[median1],a[median2]);
    }
    //Mode
    int freq[10] = {0};
    for(i=0;i<7;i++){
        freq[a[i]] += 1;
    }




    int max_val = -1000000;
    int max_index =  0;
    for(j=0;j<10;j++){
        if(freq[j]>max_val){
            max_val=freq[j];
            max_index = j;
        }
    }
    printf("\nMode=%d",max_index);



}
