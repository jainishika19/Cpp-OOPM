#include<stdio.h>
struct stu
{
    int roll;
    char name[50];
    char add[50];
    
};
int main(){
     stu a,b; 
    printf("enter roll no,name,address");
    scanf("%d %s %s",&a.roll,&a.name,&a.add);
    printf("enter roll no,name,address");
    scanf("%d %s %s",&b.roll,&b.name,&b.add);
    printf("%d %s %s\n",b.roll,b.name,b.add);//we only print here b info

    return 0;
}