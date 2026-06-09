#include <stdio.h>

int main()
{
    float basicSalary;
    float da, hra, grossSalary, tax, netSalary;

    printf("Enter salary: ");
    scanf("%f", &basicSalary);

    da = 0.40 * basicSalary;
    hra = 0.20 * basicSalary;

    grossSalary = basicSalary + da + hra;
    tax = 0.12 * grossSalary;

    netSalary = grossSalary - tax;

    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
