#include <stdio.h>
#include <math.h>  

#define PI 3.14159265358979323846

double calculateMagnitude(double xComponent, double yComponent) {
    return sqrt(xComponent * xComponent + yComponent * yComponent);
}

int main() {
    int numVectors;
    
    printf("Enter the number of vectors: ");
    scanf("%d", &numVectors);

    double resultantX = 0.0;
    double resultantY = 0.0;

    for (int i = 0; i < numVectors; i++) {
        double magnitude, angle, angleInRadians;
        
        printf("\nEnter magnitude of vector %d: ", i + 1);
        scanf("%lf", &magnitude);
        
        printf("Enter angle (in degrees) of vector %d from the positive x-axis: ", i + 1);
        scanf("%lf", &angle);
        
        angleInRadians = angle * PI / 180.0;

        double xComponent = magnitude * cos(angleInRadians);
        double yComponent = magnitude * sin(angleInRadians);

        resultantX += xComponent;
        resultantY += yComponent;
    }

    double resultantMagnitude = calculateMagnitude(resultantX, resultantY);

    printf("\nResultant Vector Components:\n");
    printf("X component: %.2lf\n", resultantX);
    printf("Y component: %.2lf\n", resultantY);

    printf("Magnitude of the resultant vector: %.2lf\n", resultantMagnitude);

    double resultantAngle = atan2(resultantY, resultantX) * 180.0 / PI;
    printf("Direction of the resultant vector: %.2lf degrees\n", resultantAngle);

    return 0;
}
