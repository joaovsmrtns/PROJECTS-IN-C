// Temperature control system.
// Reads the room temperature entered by the user and decides what to do:
// heat (below 18.0), cool (above 24.0) or keep it stable (between 18.0 and 24.0).
// Concepts: functions, return values and if/else conditionals.

#include <stdio.h>

float readTemperature() { // Function responsible for reading the temperature entered by the user.
    float temp;
    printf("ENTER THE CURRENT ROOM TEMPERATURE (e.g. 21.6): \n");
    scanf("%f", &temp); // User types the temperature (a number with decimal places).
    return temp;
}

int analyzeTemperature(float temp) { // Analyzes the temperature and categorizes the value received from the previous function.
    float min = 18.0; // Minimum temperature.
    float max = 24.0; // Maximum temperature.

    if (temp < min) { // If the temperature is below the minimum (18.0), return 0.
        return 0;

    } else if (temp > max) { // If the temperature is above the maximum (24.0), return 1.
        return 1;

    } else { // If the temperature is between 18 and 24, return 2.
        return 2;
    }
}

void displayResult(int result) { // Displays the result of the temperature reading and the decision taken.
    if (result == 0) {
        printf("Heating...\n"); // If the temperature is below the minimum (18.0), prints "Heating...".

    } else if (result == 1) {
        printf("Cooling...\n"); // If the temperature is above the maximum (24.0), prints "Cooling...".

    } else {
        printf("Temperature stable.\n"); // If the temperature is between the minimum and the maximum (18.0 to 24.0), prints "Temperature stable.".
    }
}

int main() { // Puts the functions to work with the value entered by the user through the terminal.
    float currentTemp = readTemperature(); // Reads the temperature from the user.
    int result = analyzeTemperature(currentTemp); // Categorizes the value received.
    displayResult(result); // Prints the result and the system's decision based on the temperature entered.
    return 0;
}
