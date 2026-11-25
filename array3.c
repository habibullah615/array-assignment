#include<stdio.h>
int main(){
float score[7],sum=0,high,low,final;
int judge=0;
for(int i=0;i<7;i++){
printf("Judge %d score: ",i+1);
scanf("%f",&score[i]);
sum=sum+score[i];
if(i==0){
high=score[0];
low=score[0];
}
else{
if(score[i]>high)
high=score[i];
if(score[i]<low)
low=score[i];
}}
final=(sum-high-low)/5;
printf("Highest score dropped: %.1f\n",high);
printf("Lowest score dropped: %.1f\n",low);
printf("Final score: %.2f\n",final);
for(int i=0;i<7;i++){
if(score[i]==10){
judge=i+1;
break;
}}
if(judge!=0)
printf("Judge %d gave a perfect 10!\n",judge);
else
printf("No judge gave a perfect 10.\n");
return 0;
}