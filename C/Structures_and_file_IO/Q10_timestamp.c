#include <stdio.h>

typedef struct timestamp{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec
}date;

void display(date x){
    printf("%d/%d/%d-%d:%d:%d\n",x.date,x.month,x.year,x.hour,x.min,x.sec);
}
int comparision(date a, date b){
    if(a.year>b.year){
        return 1;
    }
    if(a.year<b.year){
        return -1;
    }
    if(a.month>b.month){
        return 1;
    }
    if(a.month<b.month){
        return -1;
    }
    if(a.date>b.date){
        return 1;
    }
    if(a.date<b.date){
        return -1;
    }
    if(a.hour>b.hour){
        return 1;
    }
    if(a.hour<b.hour){
        return -1;
    }
    if(a.min>b.min){
        return 1;
    }
    if(a.min<b.min){
        return -1;
    }
    if(a.sec>b.sec){
        return 1;
    }
    if(a.sec<b.sec){
        return -1;
    }
    return 0;

}
int main(){
    date d1={21,03,2004, 23,46,35};
    date d2={21,03,2004, 23,46,36};
    display(d1);
    display(d2);
    int s=comparision(d1,d2);
    printf("Date comparision function returns: %d", s);

    return 0;
}