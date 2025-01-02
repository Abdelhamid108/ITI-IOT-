//-1

#include <stdio.h>
#include <stdlib.h>
struct car_model
{
    int car_id,battery_level,max_speed,weight;
    char model_name [15];
} ;
int main()
{
    struct car_model bm ={35653,97,350,766,"bm 320i"};
    printf("car id : %d  \n",bm.car_id);
    printf("battery level : %d % \n",bm.battery_level);
    printf("car max speed  : %d k.m \n",bm.max_speed);
    printf("car weight : %d k.g \n",bm.weight);
    printf("car model name : %s \n",bm.model_name);


    return 0;
}

//-2

#include <stdio.h>
#include <stdlib.h>

struct car_model
{
    int car_id,battery_level,max_speed,weight;
    char model_name [15];
} ;
int main()
{
    int i,l,n;
    struct car_model x[10] ;
    printf("enter the number of cars : ");
    scanf("%i",&l);

    for(i=0;i<l;i++)
    {
        printf("enter the information of the car %d \n",i+1);
       printf("enter car id : ");
       scanf("%d",&x[i].car_id);
       printf("enter battery level : ");
       scanf("%d",&x[i].battery_level);
       printf("enter max speed  : ");
       scanf("%d",&x[i].max_speed);
       printf("enter weight : ");
       scanf("%d",&x[i].weight);
       printf("enter model : ");
       scanf("%s",&x[i].model_name);

    }


    return 0;
}





//-3

#include <stdio.h>
#include <stdlib.h>

struct car_model
{
    int car_id,battery_level,max_speed,weight;
    char model_name [15];
} ;
void print_info( struct car_model info[], int index);

int main()
{
    int i,l,n;
    struct car_model x[10] ;
    printf("enter the number of cars : ");
    scanf("%i",&l);

    for(i=0;i<l;i++)
    {
        printf("enter the information of the car %d \n",i+1);
       printf("enter car id : ");
       scanf("%d",&x[i].car_id);
       printf("enter battery level : ");
       scanf("%d",&x[i].battery_level);
       printf("enter max speed  : ");
       scanf("%d",&x[i].max_speed);
       printf("enter weight : ");
       scanf("%d",&x[i].weight);
        getchar();
        printf("Enter model name: ");
        fgets(x[i].model_name, sizeof(x[i].model_name), stdin);


    }

   // printf("car model name : %s \n",x[0].model_name);

    printf("enter the the the car number you want to show their information : ");
    scanf("%d",&n);
    print_info(x,n-1);
    return 0;
}
void print_info( struct car_model info[], int index)
{
    printf("car id : %d  \n",info[index].car_id);
    printf("battery level : %d  \n",info[index].battery_level);
    printf("car max speed  : %d k.m \n",info[index].max_speed);
    printf("car weight : %d k.g \n",info[index].weight);
    printf("car model name : %s \n",info[index].model_name);
}


//-4

#include <stdio.h>
#include <stdlib.h>
struct car_model
{
    int car_id,battery_level,max_speed,weight;
    char model_name [15];
} ;
struct car_model assign_data (int id, char name[10], int mx_speed, int battery ,int Kg);

int main()
{
    int car_id,max,battery,weight;
    char model_name[10];
    struct car_model x;
printf("enter car id : ");
       scanf("%d",&car_id);
       printf("enter battery level : ");
       scanf("%d",&battery);
       printf("enter max speed  : ");
       scanf("%d",&max);
       printf("enter weight : ");
       scanf("%d",&weight);
        getchar();
        printf("Enter model name: ");
        fgets(model_name, sizeof(model_name), stdin);

        x=assign_data(car_id,model_name,max,battery,weight);
        printf("%d",x.battery_level);
}
struct car_model assign_data (int id, char name[10], int mx_speed, int battery ,int Kg)
{
    struct car_model m={id,mx_speed,battery,Kg,name};
    return m;
}

//-5

#include <stdio.h>
#include <stdlib.h>
struct car_model
{
    int car_id,battery_level,max_speed,weight;
    char model_name [15];
} ;
void assign_data_w_ptr(struct car_model *car_ptr);

int main()
{
    struct car_model x={64648,90,250,600,"bm320i"};
    assign_data_w_ptr(&x);
    printf("\nUpdated Car Information:\n");
    printf("Car ID: %d\n", x.car_id);
    printf("Battery Level: %d\n", x.battery_level);
    printf("Max Speed: %d km/h\n", x.max_speed);
    printf("Weight: %d kg\n", x.weight);
    printf("Model Name: %s\n", x.model_name);
}
void assign_data_w_ptr(struct car_model *car_ptr)
{
    printf("enter car id : ");
       scanf("%d",&car_ptr->car_id);
       printf("enter battery level : ");
       scanf("%d",&car_ptr->battery_level);
       printf("enter max speed  : ");
       scanf("%d",&car_ptr->max_speed);
       printf("enter weight : ");
       scanf("%d",&car_ptr->weight);
        getchar();
        printf("Enter model name: ");
        fgets(car_ptr->model_name, sizeof(car_ptr->model_name), stdin);
}


//-6

#include <stdio.h>

int main() {
    unsigned int i = 1;
    char *c = (char*)&i;

    if (*c) {
        printf("The system is Little Endian\n");
    } else {
        printf("The system is Big Endian\n");
    }

    return 0;
}
