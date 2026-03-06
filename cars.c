#include<stdio.h>
struct mfd{
    int Date;
    char month[20];
    int year;
};
struct cars{
    char name[20];
    char model[20];
    char price[20];
    char cc[20];
    struct mfd date;
};
int main(){
    struct cars c1={"BMW","x3","1cr","10000cc",{15,"Jan",2000}};
    struct cars c2={"BMW","i7","4cr","13000cc",{10,"mar",2011}};
    struct cars c3={"BMW","i9","12cr","18000cc",{19,"june",2024}};
    struct cars c4={"BMW","x8","8cr","19000cc",{18,"sep",2025}};
    printf("Name:%s\n",c1.name);
    printf("Model:%s\n",c1.model);
    printf("Price:%s\n",c1.price);
    printf("CC:%s\n",c1.cc);
    printf("DOB:%d-%s-%d\n",c1.date.Date,c1.date.month,c1.date.year);
    printf("Name:%s\n",c2.name);
    printf("Model:%s\n",c2.model);
    printf("Price:%s\n",c2.price);
    printf("CC:%s\n",c2.cc);
    printf("DOB:%d-%s-%d\n",c2.date.Date,c2.date.month,c2.date.year);
    printf("Name:%s\n",c3.name);
    printf("Model:%s\n",c3.model);
    printf("Price:%s\n",c3.price);
    printf("CC:%s\n",c3.cc);
    printf("DOB:%d-%s-%d\n",c3.date.Date,c3.date.month,c3.date.year);
    printf("Name:%s\n",c4.name);
    printf("Model:%s\n",c4.model);
    printf("Price:%s\n",c4.price);
    printf("CC:%s\n",c4.cc);
    printf("DOB:%d-%s-%d\n",c4.date.Date,c4.date.month,c4.date.year);
    return 0;
}