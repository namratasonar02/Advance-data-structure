#include <stdio.h>
#include <math.h>

int main() {
    float height, distance, velocity, acceleration;
    acceleration = 9.8;

    printf("Enter the height from which the ball is released (in meters): ");
    scanf("%f", &height);

    velocity = sqrt(2 * acceleration * height);

    distance = height + (height / 2);

    height /= 2;

    velocity = sqrt(2 * acceleration * height);
    distance += height + (height / 2);

    height /= 2;

    velocity = sqrt(2 * acceleration * height);
    distance += height + (height / 2);

    printf("Total distance traversed by the ball after three bounces: %.2f meters\n", distance);

    return 0;
}






