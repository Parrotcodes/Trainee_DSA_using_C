#include <stdio.h>
#include <stdbool.h> // for boolean data type
#include<string.h>

int main()
{
    //  print stmt
    printf("Hello Programmer!");

    // Comments
    // single line comment
    /*
    multi line
    comment
    */

    // Data Types
    // Variable - int,float,

    // Integer - varibale stores numbers
    int age = 24;
    int year = 2025;
    int quantity = 10;

    printf("You are %d years old!\n", age);
    printf("The current year is %d\n", year);
    printf("you order %d items\n", quantity);

    // Float - stores 6-7 digit after decimal
    float price = 66.67;
    float gpa = 5.5;
    float temp = 44.3;

    printf("Your Cart price is %2f\n", price);
    printf("Your Final GPA score is %1f\n", gpa);
    printf("your current temparature in Banglore is %f\n", temp);

    // Double - stores 15-16 digits after decimal
    double pi = 3.141567890567;
    double e = 2.34465765765756900;

    printf("The pi value is %15lf\n", pi);
    printf("The value of 'e' is %lf\n", e);

    // Char - Stores signle char
    char grade = 'A';
    char favsymbol = '@';
    char dollar = '$';

    printf("Your Grade is %c.\n", grade);
    printf("My fav symbol is %c\n", favsymbol);
    printf("USA currency symbol is %c. we call it as dollar\n", dollar);

    // Array of Char - String
    char name[] = "Rakesh Chilukala";
    char food[] = "Biryani";
    char email[] = "demo@gmail.com";

    printf("Hello Mr.%s\n", name);
    printf("My fav food is %s\n", food);
    printf("My fake mail is %s \n.", email);

    // Boolean - True,False
    bool isOnline = true;
    bool isOffline = false;
    bool isEmployee = true;

    printf("The Manager is %d\n", isOnline);
    printf("The Developer is in %d\n", isOffline);

    if (isOffline)
    {
        printf("Your in offline!");
    }
    else
    {
        printf("Your Online");
    }

    if(isEmployee){
        printf("You are an Employee!");
    }else{
        printf("You are Guest!");
    }

    // Variables done

    // Format Specifiers - Combination of % symbol,letter,numbers and optional modifiers
    char user[] = "Rocky";
    printf("%s",user);

    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;
    float num4 = 5.99;

    printf("%-4d",num1);
    printf("%-4d",num2);
    printf("%-4d",num3);

    // Precision
    printf("%.2f",num4);


// Arthematic Operations - +,-,=,+=,-=,*,/,%
    int x = 10;
    int y = 20;
    int z = 30;
    int m=0;

    m = x+y;

    printf("Sum of x and y = \n",m);


// User Input

    // Default values store
    // int age;
    // float gpa;
    // char grade;
    // char name[30];

    // Adding empty data
    int Age = 0;
    float Gpa =0.0f;
    char Grade = '\0';
    char Name[30]="";

    printf("%d",Age);
    printf("%f",Gpa);
    printf("%d",Grade);
    printf("%s",Name);


    // User Input - scanf()
    printf("\n Enter your Age: ");
    scanf(" %d",&Age);
    printf("Your age is %d",Age);

    printf("Enter Your GPA: ");
    scanf("%f",&Gpa);
    printf("GPA: %f",Gpa);

    printf("Enter your grade:");
    scanf("%c",&Grade);
    printf("Grade : %c",Grade);

    getchar();
    printf("Enter your frist name: ");
    scanf("%s",&Name);
    printf("first Name: %s",Name);

    printf("Enter you Full Name ");
    fgets(Name,sizeof(Name),stdin);
    printf("Your Full Name is %s",Name);
    







    
    




    


    return 0;
}