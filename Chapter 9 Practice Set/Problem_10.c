// Solve problem 9 for time using ‘typedef’ keyword

//  Write a structure capable of storing date. Write a function to compare those dates

#include <stdio.h>

typedef struct Date{
    int mm;
    int dd;
    int yyyy;
}Date;

int compare(Date d1 ,Date d2){
    if(d1.yyyy==d2.yyyy && d1.mm==d2.mm && d1.dd == d2.dd){
        return 0;
    }       
    if(d1.yyyy>d2.yyyy){
        return 1;
    }
    else if(d1.yyyy<d2.yyyy){
        return -1;
    }
    else if(d1.mm>d2.mm){
        return 1;
    }
    else if(d1.mm<d2.mm){
        return -1;
    }
    else if(d1.dd>d2.dd){
        return 1;
    }
    else if(d1.dd<d2.dd){
        return -1;
    }

}

int main(){
    Date d1 = {07, 18, 2032};
    Date d2 = {07, 18, 2025};
    printf("%d" , compare(d1,d2));
    
    
    return 0;
}