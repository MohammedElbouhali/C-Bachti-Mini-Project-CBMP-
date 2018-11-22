#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int ToDecimalConverter(int* digit, int base) {
	// pretending that the base is valid. And it is by the way ^^.
	int DecimaledInteger;
	/**
	 * Use the switch to treat every particular case.
	 * Use a recursive for loop, loops n times(digits num)
	 * [+] Notice: The for loop has to be descending.
	 * Multiply the base in the digit with the power of a decreased n goes from 0 into n-1.
	*/
	return DecimaledInteger;
}

// In process of treating some bugs..
int FromDecimalToBBase(int* digit, int base) {
	int BBase[50], counter = 0;
	while(*(digit) > base) {
		BBase[counter] = (*digit % base);
		*digit /= base;
		counter++;
	}
	return BBase;
}

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
// [!] AnotherHint: In the string conversion situation the lefted zéroes are being ignored.
// [!] Same problem with the logN func. It has a problem with the binary digits(zéro in particular).
int CountDigitNumbers(int* digit) {
	char CharacteredNumber[100];
	sprintf(CharacteredNumber, "%d", *(digit));
	int counter = strlen(CharacteredNumber);
	printf("%s\n", CharacteredNumber);
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
//	printf("%d", CountDigitNumbers(01010));
	int MyNumber = 00154;
	printf("The BBase is: %d", FromDecimalToBBase(&MyNumber, 2));
	
	
	
	return 0;
}
