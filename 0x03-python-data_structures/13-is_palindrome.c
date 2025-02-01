#include "lists.h"

/**
 * is_palindrome - function checks if a singly linked list is a palindrome
 * @head: address of head of singly linked list.
 * Return: 1 if it is palindrome, otherwise 0.
 */
int is_palindrome(listint_t **head)
{
	int arr[5000], j, i, count = 1;  /* Temporary array */
	listint_t *end, *store;          /* Pointers to help traverse the list */

	/* Check if the list pointer is NULL, which indicates no list exists */
	if (head == NULL)
		return (0);

	/* Check if the list is empty, which is a palindrome by definition */
	if (*head == NULL)
		return (1);

	end = store = *head; /* Initialize pointers to the start of the list */

	/* Traverse the list to find the end and count the number of elements */
	for (; end->next != NULL; count++)
		end = end->next;

	/* Reset store to the beginning of the list and copy elements to the array */
	for (i = 0; store != NULL; i++)
	{
		arr[i] = store->n;
		store = store->next;
	}

	/* Check the contents of the array to see if they form a palindrome */
	for (i = 0, j = count - 1; i < j; i++, j--)
		if (arr[i] != arr[j])
			return (0); /* Not a palindrome if mismatch found */

	return (1); /* Return 1 if it's a palindrome */
}
