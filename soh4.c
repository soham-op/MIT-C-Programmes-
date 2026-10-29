#include <stdio.h>
#include <string.h>

int main() {
char name[5][50];
float basic[5], ta[5], hra[5], gross[5];
char designation[5][30];
int i;
for (i = 0; i < 5; i++) {
printf("\n--- Enter Details for Employee %d ---\n", i + 1);        
while (getchar() != '\n' && i > 0); 
printf("Enter Employee Name: ");     
fgets(name[i], sizeof(name[i]), stdin);       
name[i][strcspn(name[i], "\n")] = 0;

printf("Enter Basic Salary of Employee: ");
scanf("%f", &basic[i]);
ta[i] = basic[i] * 0.23;
hra[i] = basic[i] * 0.30;
gross[i] = basic[i] + ta[i] + hra[i];
if (gross[i] < 100000) {
            strcpy(designation[i], "Clerk");
        }
else if (gross[i] >= 100000 && gross[i] < 150000) {
            strcpy(designation[i], "Sub Manager");
        }
else {
            strcpy(designation[i], "Manager");
        }
    }
    printf("\n__________________________________________________________________________________\n");
    printf("Name\t       |       Basic\t\t  |     TA\t\t |    HRA\t\t |   gross\t\t   |    Designation\n");
    printf("\n__________________________________________________________________________________\n");
    
for (i = 0; i < 5; i++) {
        printf("%s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t%s\n", 
               name[i], basic[i], ta[i], hra[i], gross[i], designation[i]);
    }    
    printf("__________________________________________________________________________________\n");

    return 0;
}
