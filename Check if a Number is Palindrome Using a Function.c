#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int num;

    // Prompt the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
