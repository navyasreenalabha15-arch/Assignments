#include <stdio.h>

int main() {
    double order_amount, discount = 0.0, delivery_charge = 0.0, final_amount;
    int membership_type;

    
    printf("Enter the order amount (₹): ");
    scanf("%lf", &order_amount);

    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membership_type);

    
    if (order_amount >= 500.0) {
        
        delivery_charge = 0.0;
        
        
        if (membership_type == 1) {
            discount = 0.10 * order_amount;
        } else {
            discount = 0.0;
        }
    } else {
        
        delivery_charge = 50.0;
        
        
        discount = 0.0;
    }

    
    final_amount = order_amount - discount + delivery_charge;

    
    printf("\n--- Invoice Details ---\n");
    printf("Order Amount:    ₹%.2f\n", order_amount);
    printf("Discount:       -₹%.2f\n", discount);
    printf("Delivery Charge: +₹%.2f\n", delivery_charge);
    printf("------------------------\n");
    printf("Final Payable:   ₹%.2f\n", final_amount);

    return 0;
}
