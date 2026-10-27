#include <stdio.h>

int main() {
    int trips, i;
    float distance, fuel, cost;
    float totalDistance = 0, totalFuel = 0, totalCost = 0;

    printf("Enter number of trips: ");
    scanf("%d", &trips);

    for (i = 1; i <= trips; i++) {
        printf("\nTrip %d\n", i);

        printf("Enter distance in kilometers: ");
        scanf("%f", &distance);

        fuel = distance / 10;
        cost = fuel * 60;

        printf("Fuel consumed: %.2f liters\n", fuel);
        printf("Fuel cost: P%.2f\n", cost);

        totalDistance += distance;
        totalFuel += fuel;
        totalCost += cost;
    }

    printf("\n=== TOTAL SUMMARY ===\n");
    printf("Total distance: %.2f km\n", totalDistance);
    printf("Total fuel consumed: %.2f liters\n", totalFuel);
    printf("Total fuel expenses: P%.2f\n", totalCost);

    return 0;
}