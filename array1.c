#include<stdio.h>
int main(){
int run[6];
int rn,ov=1,mx,mo;
float runrate,total=0.0;
for(int i=0; i<6; i++){
printf("Runs in over %d:",ov);scanf("%d",&run[i]);printf("\n");
total=total+run[i];
if(i==0)
mx=run[0];
else{
if(run[i]>mx){
mx=run[i];
mo=ov;}}
ov++;}
runrate=total/ov;
runrate=60-total;
printf("Total runs:%.0f\nRun rate:%.2f\nBest over:over %d with %d runs\nNeeded %d more runs to reach 60",total,runrate,mo,mx,rn);
return 0;}