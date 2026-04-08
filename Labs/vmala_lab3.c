#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inFile, *outFile;
    int empNo, dept, hoursWorked;
    float payRate, basePay;
    char exempt[2];

    // Open input file
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    // Open output file
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    // Discard header line from input
    char buffer[100];
    fgets(buffer, sizeof(buffer), inFile);

    // Write headers to output
    fprintf(outFile, "%-12s %-10s %-8s %-8s %-12s %-10s\n",
            "EmployeeNo", "Dept", "PayRate", "Exempt", "HoursWorked", "BasePay");

    // Read employee data
    while (fscanf(inFile, "%d %d %f %s %d",
                  &empNo, &dept, &payRate, exempt, &hoursWorked) == 5) {
        basePay = payRate * hoursWorked;
        fprintf(outFile, "%-12d %-10d %-8.2f %-8s %-12d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");
    return 0;
}

