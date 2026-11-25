#include<stdio.h>
int main(){
int guard[7],newRoster[7],k,id,day=0;
printf("Enter guard IDs for Day 1 to Day 7:\n");
for(int i=0;i<7;i++){
printf("Day %d: ",i+1);
scanf("%d",&guard[i]);
}
printf("Shift roster forward by how many days (1-6)? ");
scanf("%d",&k);
for(int i=0;i<7;i++){
newRoster[(i+k)%7]=guard[i];
}
printf("\nDay\tOld\tNew\n");
for(int i=0;i<7;i++){
printf("Day %d\t%d\t%d\n",i+1,guard[i],newRoster[i]);
}
printf("Enter your guard ID: ");
scanf("%d",&id);
for(int i=0;i<7;i++){
if(newRoster[i]==id){
day=i+1;
break;
}}
if(day!=0)
printf("Guard %d now has duty on Day %d.",id,day);
else
printf("Guard ID not found.");
return 0;
}