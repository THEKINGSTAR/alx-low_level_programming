 #include "lists.h"
  2
  3 /**
  4  * get_nodeint_at_index - return function
  5  *
  6  * Description: Write a function that inserts a new node at a given position.
  7  * where idx is the index of the list where the new node should be added.
  8  * Index starts at 0
  9  *
 10  * Prototype:listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
 11  *
 12  * @head: input list structure
 13  * @index: the index to return the node at
 14  *
 15  * Return:the address of the new node, or NULL if it failed
 16  * if it is not possible to add the new node at index idx,
 17  * do not add the new node and return NULL
 18  *
 19  *
 20  */
 21 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 22 {
 23         unsigned int ind = 0;
 24
 25         listint_t *current, *new;
 26
 27         if (*head == NULL)
 28         {
 29                 return (NULL);
 30         }
 31         else
 32         {
 33                 current = *head;
 34                 while (ind < idx)
 35                 {
 36                         current = current->next;
 37                         if (current != NULL)
 38                         {
 39                                 ind++;
 40                         }
 41                         else
 42                         {
 43                                 return (NULL);
 44                         }
 45                 }
 46                 new = malloc(sizeof(listint_t));
 47                 if (new == NULL)
 48                         return (NULL);
 49                 else
 50                 {
 51                         new->next = current->next;
 52                         new->n = n;
 53                         curretn->next = new;
 54                 }
 55         }
 56         return (new);
 }
                                             
