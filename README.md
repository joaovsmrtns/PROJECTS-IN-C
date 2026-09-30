# C Programming 

A collection of small C programs written as part of my studies in programming. Each program focuses on a core concept of the language, from basic conditionals to dynamic memory allocation.

## Projects

| File | Description | Main concepts |
|------|-------------|---------------|
| `temperature_control.c` | Reads a room temperature and decides whether to heat, cool or keep it stable. | Functions, return values, if/else |
| `voting_system.c` | Counts votes for three candidates, plus blank and null votes, and announces the winner. | while loop, switch/case, counters |
| `inventory_calculator.c` | Registers products and calculates the subtotal of each one and the total inventory value. | Structs, pointers, malloc/free |
| `payroll_calculator.c` | Calculates weekly salaries with a 50% bonus on overtime hours (above 40 hours). | Pass by reference, do/while, string input |

## How to compile and run

You need a C compiler such as GCC. Example with the temperature program:

```bash
gcc temperature_control.c -o temperature
./temperature
```

The same steps work for the other files, just changing the file and output names.

## About

These programs were written for study purposes and are kept here as a record of my progress in learning C.