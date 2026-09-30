// AVA 2 - GRADED ASSIGNMENT
// Description: the program is a system that receives employee information, then
// calculates and displays each employee's weekly salary in the terminal, based on the data entered by the user.

#include <stdio.h>

void readData(char name[50], float *hoursWorked, float *hourlyRate) { // Function that collects data from the user.

    printf("\nENTER THE EMPLOYEE'S NAME: ");
    fgets(name, 50, stdin); // Reads the employee's name.

    printf("ENTER THE EMPLOYEE'S WEEKLY HOURS WORKED: ");
    scanf("%f", hoursWorked); // Reads the number of hours worked in the week.

    printf("ENTER THE HOURLY RATE: ");
    scanf("%f", hourlyRate); // Reads the hourly rate of the employee in question.
}

float calculateSalary(float hoursWorked, float hourlyRate) { // Salary calculation function.
    float baseSalary;
    float overtime = 0;
    float finalSalary;

    if (hoursWorked <= 40.0) {
        finalSalary = hoursWorked * hourlyRate;
        // If the hours worked are less than or equal to 40, hours worked are multiplied by the hourly rate.
    } else {
        baseSalary = 40 * hourlyRate;
        overtime = (hoursWorked - 40) * hourlyRate * 1.5;
        finalSalary = baseSalary + overtime;
        // If the hours worked are more than 40, the first 40 hours are paid at the regular rate.
        // Then, the hours beyond those 40 are paid at the hourly rate plus 50%.
    }

    return finalSalary; // Returns the final salary after the calculation and salary analysis done by the function.
}

int main() {

    char name[50];
    float hoursWorked;
    float hourlyRate;
    char repeat[1];

    do { // The program runs completely at least once before the loop repeats.
        printf("||| EMPLOYEE SALARY ANALYSIS |||\n");
        readData(name, &hoursWorked, &hourlyRate); // Uses the function that reads the information provided by the user.
        float salary = calculateSalary(hoursWorked, hourlyRate); // Salary calculation function in action.

        printf("EMPLOYEE NAME: %s", name);
        printf("WEEKLY HOURS WORKED: %f\n", hoursWorked);
        printf("WEEKLY SALARY RECEIVED: %f\n", salary);
        // Shows the final data (name, hours worked and salary) after reading and calculating the employee's salary.

        printf("DO YOU WANT TO ANALYZE ANOTHER EMPLOYEE? (enter Y or N): "); // Offers to enter another employee for a new analysis.
        scanf(" %c", repeat);
        getchar(); // Consumes the '\n' left over after %c, preventing the next fgets from reading it by mistake.

    } while (repeat[0] == 'Y'); // While the answer is "Y", the program repeats. If it is "N", it ends.

    return 0;
}
