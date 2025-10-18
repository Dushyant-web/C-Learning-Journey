#include <stdio.h>
void main(){
    printf("Month Numbers-->\n Jan-> 1 \n Feb-> 2 \n Mar-> 3 \n Apr-> 4 \n May-> 5 \n Jun-> 6 \n Jul-> 7 \n Aug -> 8 \n Sep-> 9 \n Oct-> 10 \n Nov-> 11 \n Dec 12 ");
    int month,year,feb;
    
    printf("Enter The Month Number--> ");
    scanf("%d",&month);

    printf("Enter The Year Number--> ");
    scanf("%d",&year);

    feb=28;

    

    if (month>=1 && month<=12)
    {
        if(((year%400==0) || (year%4==0 && year%100!=0)) && month==2){
            feb=29;
            printf("Then number of days in %d of year %d are--> %d",month,year,feb);
        }else
        {
            if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            {
                printf("Then number of days in %d of year %d are--> 31",month,year);
            }else if(month==2){
                printf("Then number of days in %d of year %d are--> 28",month,year);
            }else if(month==4 || month==6 || month==9 || month==11){
                printf("Then number of days in %d of year %d are--> 30",month,year);
            }
            
        }
        
        
    }else{
        printf("Read The list Again your Options are 1-12");
    }
    
}

