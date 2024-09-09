/*Gabriela A. Cardenas Sanchez UCFID
COP 33454534
Assignment 1
September 07 2024*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double computeDistance(double x1, double y1, double x2, double y2);  // Helper function for distance

// Static variables to store user input and distance
static double point1_x, point1_y, point2_x, point2_y;
static double distance;

// Function to get user input for points
double askForUserInput() {
    printf("Enter values for Point 1 (x1, y1):\n");
    printf("x1: ");
    scanf("%lf", &point1_x);
    printf("y1: ");
    scanf("%lf", &point1_y);

    printf("Enter values for Point 2 (x2, y2):\n");
    printf("x2: ");
    scanf("%lf", &point2_x);
    printf("y2: ");
    scanf("%lf", &point2_y);

    return 0; // Not really needed, but must return a double
}

// Helper function to calculate the distance between two points
double computeDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the distance (diameter) between two points
double calculateDistance() {
    distance = computeDistance(point1_x, point1_y, point2_x, point2_y);

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The distance (diameter) between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate the perimeter (circumference) of the circle
double calculatePerimeter() {
    double perimeter = PI * distance;

    // Output
    printf("The perimeter (circumference) of the circle is %.2lf\n", perimeter);

    return perimeter;
}

// Function to calculate the area of the circle
double calculateArea() {
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);

    // Output
    printf("The area of the circle is %.2lf\n", area);

    return area;
}

// Function to calculate the width (diameter) of the circle
double calculateWidth() {
    // Output
    printf("The width (diameter) of the circle is %.2lf\n", distance);

    return distance;
}

// Function to calculate the height (diameter) of the circle
double calculateHeight() {
    // Output
    printf("The height (diameter) of the circle is %.2lf\n", distance);

    return distance;
}

// Main function
int main(int argc, char **argv) {
    // Get user input
    askForUserInput();

    // Calculate distance
    double dist = calculateDistance();

    // Perform calculations and get results
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();

    return 0;
}
