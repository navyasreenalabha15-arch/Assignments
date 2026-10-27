#include <stdio.h>

int main() {
    int stored_id = 101;
    int stored_pass = 4321;
    
    int user_id, user_pass;
    
    printf("Enter User ID: ");
    scanf("%d", &user_id);
    
    if (user_id != stored_id) {
        printf("User not found\n");
    } else {
        printf("Enter Password: ");
        scanf("%d", &user_pass);
        
        if (user_pass == stored_pass) {
            printf("Login successful\n");
        } else {
            printf("Incorrect password\n");
        }
    }
    
    return 0;
}
