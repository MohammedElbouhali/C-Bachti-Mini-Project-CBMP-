#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool BaseValidation(int* base, int* ValidBases) {
	int i;
	int ValidityStatus = false;
	for(i = 0; i<4; i++) {
		if(*(base) == ValidBases[i])
			ValidityStatus = true;
	}
	return ValidityStatus;
}

/**
 * [!] Hint : There's a problem with the number zéro(0), Especially in the binary
 * digits, The func stops in the 0 digit. which means that the binary system can skip
 * that, But the other systems are vulnerable. And any number follows zéro is ignored.
 */
int CountDigitNumbers(int digit) {
	int counter = 0;
	
	while(digit) {
		digit = digit/10;
		++counter;
	}
	return counter;
}

bool FormatValidation(int digit, int base) {
	
	// [!] Special case in the Hexa formula.
	// I did not use ASCII, assuming that 10 = A, 11 = B ... And so on!
	int i;
	int ValidityStatus = false;
	int BaseValidNumbers[16]; // Max amount of nums are 16(Hexa) just in case..
	int HexaCharArray[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	
	for(i = 0; i<base; i++) {
		BaseValidNumbers[i] = i;
	}
	
	i = 0;
	printf("%d", CountDigitNumbers(digit));
	while(digit != NULL && i<CountDigitNumbers(digit)) {
		printf("looped %d times.", i);
		digit = digit/10;
		if(digit == BaseValidNumbers[i])
			ValidityStatus = true;
		++i;
	}
	return ValidityStatus;
}

int main() {
	
	int a, b;
	int SystemBases[] = {2, 8, 10, 16};
	printf("Enter the A value: ");
	scanf("%d", &a);
	
	printf("Enter the B value: ");
	scanf("%d", &b);
	
	if(	BaseValidation(&a, SystemBases) != true || 
		BaseValidation(&b, SystemBases) != true) {
			printf("Invalid base detected, try again!");
			return 0;
	}
	printf("%d", CountDigitNumbers(01010));
	
	return 0;
}
