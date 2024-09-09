/*Gabriela A. Cardenas Sanchez UCFID 5279693
COP 3223
Assignment 1
September 08 2024*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159


// Store user input and Distance
static double point1_x, point1_y, point2_x, point2_y;
static double Distance;


// Function to ask user tor input
/*Arguments: This function have no arguments.
• Output: This function should output nothing.
• Return: A double representing the user’s typed in value...
this will attribute to the DRY method as mentioned earlier
and can be applied to the previous functions.*/

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

    return 0;
}


// Helper function to store the distance between two points
double storeDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


// Function to calculate the distance between two points
/* • Arguments: This function have no arguments.
   • Output: This function should output three lines of text.
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The distance between the two points is -whatever is
computed-
    • Return: A double representing the distance.*/

double calculateDistance() {
    Distance = storeDistance(point1_x, point1_y, point2_x, point2_y);

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The distance between the two points is %.2lf\n", Distance);

    return Distance;
}


// Function to calculate the perimeter
/*• Arguments: This function have no arguments.
• Output: This function should output two lines of text.
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The perimeter of the city encompassed by your request is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard
• Disclaimer: Must use a function (like calculateDistance)
within to avoid repeating code.*/

double calculatePerimeter() {
    double perimeter = PI * Distance;

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 2.0;
}


// Function to calculate area
/*• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The area of the city encompassed by your request is
-whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard
• Disclaimer: Must use a function (like calculateDistance)
within to avoid repeating code.*/

double calculateArea() {
    double radius = Distance / 2.0;
    double area = PI * pow(radius, 2);

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 3.0;
}


// Function to calculate width
/*• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The width of the city encompassed by your request
is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard*/

double calculateWidth() {
    
    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The width of the city encompassed by your request is %.2lf\n", Distance);

    return 5.0;
}

// Function to calculate height
/*• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The height of the city encompassed by your request
is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard*/

double calculateHeight() {

    // Output
     printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", point2_x, point2_y);
    printf("The height of the city encompassed by your request is %.2lf\n", Distance);

    return 1.0;
}


// Main function
int main(int argc, char **argv) {

    askForUserInput();
    double distance = calculateDistance();
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();

    return 0;
}
