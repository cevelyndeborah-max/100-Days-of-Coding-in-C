/*Q129: A file numbers.txt contains a list of integers separated by spaces.
 Read all integers, compute their sum and average, and print both.*/

#include<stdio.h>
int main(){
    FILE *fp;
    int num,count=0;
    float average,sum=0;
    fp=fopen("numbers.txt","r");
    while(fscanf(fp,"%d",&num)!=EOF)
    {
        sum=sum+num;
        count++;
    }
    average=sum/count;
    fclose(fp);
    printf("Sum=%.0f\n",sum);
    printf("Average=%.2f",average);
    return 0;
}