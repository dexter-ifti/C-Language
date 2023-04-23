/*
Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)
*/
#include <stdio.h>

void force(float);

int main(int argc, char const *argv[])
{
    float mass;
    printf("Enter the mass of the body in Kgs : ");
    scanf("%f", &mass);
    force(mass);
    
    
    return 0;
}

void force(float mass)
{
    float g = 9.8;
    float force = mass * g;
    printf("The force of attraction on a body of mass %.2f is %.2f \n", mass, force);
}