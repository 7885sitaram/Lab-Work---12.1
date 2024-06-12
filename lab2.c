#include<stdio.h>

struct emp
{ 
   int emp_id;
   char *emp_name;
   int emp_age;
   char *emp_role;
   char *emp_city;
   int emp_experience;
   char *emp_company_name;
};

int main(){

    int n ;
    printf("Enter Array size ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array elements \n");

    for (int i = 0; i < n; i++)
    {   printf("Details about ");
        scanf("%s", &arr);
        
       struct emp arr[i];


       printf("Enter the id ");
       scanf("%d",  &arr[i].emp_id);

       printf("Enter the emp_name ");
       scanf("%s",  &arr[i].emp_name );

       printf("Enter the emp_age ");
       scanf("%d",  &arr[i].emp_age );

       printf("Enter the emp_role ");
       scanf("%s",  &arr[i].emp_role );

       printf("Enter the emp_city ");
       scanf("%s",  &arr[i].emp_city );

       printf("Enter the emp_experience ");
       scanf("%d",  &arr[i].emp_experience);

       printf("Enter the emp_company_name ");
       scanf("%s",  &arr[i].emp_company_name);

       printf("\n");

    }

    return 0;
     
}
