/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student a_student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float average = 0.0;
    average = a_student.marks[1] + a_student.marks[2] + a_student.marks[0];
    average = average/3; 
    
    return average;
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student a_student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    float average = 0.0;
    average = calculate_average(a_student);
    printf("Name: %s, ID: %d, Marks: %.1f,%.1f,%.1f, Average: %.1f\n",
        a_student.name,a_student.id,a_student.marks[0],a_student.marks[1],a_student.marks[2],average);
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    Student a_student = {
        .name = "Ethan South",
        .id = 201990893,
        .marks = {75.0, 68.5, 86.0}
    };
    //struct student_record student = {"Ethan North", 201990, {75.0, 68.5, 86.0}};

    //strcpy(student.name,"Ethan West");
    //student.id = 201990;
    //student.marks = {75.0,68.5,81.0};
    // TODO: display the student data and average mark
    //printf("%.2f\n",calculate_average(student));
    display_student(a_student);
    return 0;
}