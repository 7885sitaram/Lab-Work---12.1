#include<stdio.h>

struct students
{

    int stu_id ;
    char *stu_name;
    int stu_age;
    char *stu_course;
    char *stu_city;
    int stu_standard;
    char *stu_school;

} s , u , p ;

int main(){

    printf("Details About Sitaram : \n");
    printf("stu_id is : ");
    scanf("%d", &s.stu_id);

    printf("stu_name is : ");
    scanf("%s", &s.stu_name);

    printf("stu_age is : ");
    scanf("%d", &s.stu_age);

    printf("stu_course is :");
    scanf("%s", &s.stu_course);

    printf("stu_city is : ");
    scanf("%s", &s.stu_city);

    printf("stu_standard is :");
    scanf("%s", &s.stu_standard);

    printf("stu_school is : ");
    scanf("%s", &s.stu_school);

    printf("\n");


    printf("Details About Usha : \n");
    printf("stu_id is : ");
    scanf("%d", &u.stu_id);

    printf("stu_name is : ");
    scanf("%s", &u.stu_name);

    printf("stu_age is : ");
    scanf("%d", &u.stu_age);

    printf("stu_course is :");
    scanf("%s", &u.stu_course);

    printf("stu_city is : ");
    scanf("%s", &u.stu_city);

    printf("stu_standard is :");
    scanf("%s", &u.stu_standard);

    printf("stu_school is : ");
    scanf("%s", &u.stu_school);

    printf("\n");


    printf("Details About Pika : \n");
    printf("stu_id is : ");
    scanf("%d", &p.stu_id);

    printf("stu_name is : ");
    scanf("%s", &p.stu_name);

    printf("stu_age is : ");
    scanf("%d", &p.stu_age);

    printf("stu_course is :");
    scanf("%s", &p.stu_course);

    printf("stu_city is : ");
    scanf("%s", &p.stu_city);

    printf("stu_standard is :");
    scanf("%s", &p.stu_standard);

    printf("stu_school is : ");
    scanf("%s", &p.stu_school);


    return 0;

}