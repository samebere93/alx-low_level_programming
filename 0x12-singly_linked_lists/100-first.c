#include "lists.h"
void ComeFirstbySAM(void)__attribute__ ((constructor));
/**
 * ComeFirstbySAM - function that runs before the main function
 */

void ComeFirstbySAM(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
