#include <stdio.h>

int main() {
    
    float forward_fuel_price = 118.0;
    float return_fuel_price = 123.0;
    float average_fuel_consumption; // Average fuel consumption
    float total_fuel_consumed;
    float total_cost;
    int distance = 1207; // Total diatance

    printf("Enter the average fuel consumption (liters per kilometer): ");
    scanf("%f", &average_fuel_consumption);//Calculate the total fuel(Backward and Forward) 
    
    total_fuel_consumed = average_fuel_consumption * (2 * distance); // Total distance is 2 * 1207 km

    total_cost = (distance * average_fuel_consumption * forward_fuel_price) + (distance * average_fuel_consumption * return_fuel_price);
    //Calculate the total cost for the trip
    printf("Total fuel consumed for the round trip is: %.2f liters\n", total_fuel_consumed);//Total fuel consumed output
    printf("Total fuel cost for the round trip is: %.2f\n", total_cost);// Total cost output 

    return 0;
}
