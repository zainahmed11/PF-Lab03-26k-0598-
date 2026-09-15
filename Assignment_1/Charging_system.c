#include <stdio.h>

int main() {
    char type, member, disabled, available;
    float battery, required, duration, time;
    float charging_needed, charging_cost, parking_cost, discount, final_amount;
    int priority;

    printf("Enter vehicle type (E = Electric, H = Hybrid): ");
    scanf(" %c", &type);

    printf("Enter current battery level: ");
    scanf("%f", &battery);

    printf("Enter required charging level: ");
    scanf("%f", &required);

    printf("Enter expected parking duration in hours: ");
    scanf("%f", &duration);

    printf("Enter current time (24-hour format): ");
    scanf("%f", &time);

    printf("Are you a parking member? (Y/N): ");
    scanf(" %c", &member);

    printf("Disabled-person priority status? (Y/N): ");
    scanf(" %c", &disabled);

    printf("Is charging station available? (Y/N): ");
    scanf(" %c", &available);

    if (available == 'N' || available == 'n') {
        if (type == 'H' || type == 'h')
            printf("\nCharging unavailable - Parking only.\n");
        else
            printf("\nNo charging slot available.\n");

        return 0;
    }

    if (type == 'H' || type == 'h') {
        if (battery >= 40) {
            printf("\nVehicle does not qualify for EV charging.\n");
            return 0;
        }
    }

    charging_needed = required - battery;

    printf("\nVehicle Type: %c", type);
    printf("\nCurrent Battery: %.2f%%", battery);
    printf("\nRequired Charging Level: %.2f%%", required);

    if (required <= battery) {
        printf("\nNo charging required.\n");
        charging_cost = 0;
        priority = 0;
    } else {
        if (battery <= 15 && required >= 80)
            priority = 1;
        else if (disabled == 'Y' || disabled == 'y' || (member == 'Y' || member == 'y') && battery <= 30)
            priority = 2;
        else
            priority = 3;

        if (priority == 1)
            printf("\nCharging Priority: Emergency Charging Priority");
        else if (priority == 2)
            printf("\nCharging Priority: Priority Charging");
        else
            printf("\nCharging Priority: Normal Charging");

        if (time < 17 || time > 22) {
            printf("\nTime Status: Off-Peak");
            charging_cost = charging_needed * 35;

            if ((member == 'Y' || member == 'y') && priority != 1)
                charging_cost = charging_cost * 0.80;
        } else {
            printf("\nTime Status: Peak");
            charging_cost = charging_needed * 50;

            if (member == 'Y' || member == 'y')
                charging_cost = charging_cost * 0.90;
        }
    }

    if (duration <= 2)
        parking_cost = 200;
    else if (duration <= 5)
        parking_cost = 400;
    else
        parking_cost = 700;

    discount = 0;

    if (disabled == 'Y' || disabled == 'y') {
        discount = parking_cost;
        parking_cost = 0;
    } else if (member == 'Y' || member == 'y') {
        discount = parking_cost * 0.20;
        parking_cost = parking_cost * 0.80;
    }

    final_amount = charging_cost + parking_cost;

    printf("\nCharging Cost: Rs. %.2f", charging_cost);
    printf("\nParking Cost: Rs. %.2f", parking_cost);
    printf("\nParking Discount: Rs. %.2f", discount);
    printf("\nFinal Payable Amount: Rs. %.2f", final_amount);

    if (duration > 8)
        printf("\nLong-stay warning: Please relocate your vehicle after charging.");
    else
        printf("\nStandard parking duration.");

    return 0;
}
