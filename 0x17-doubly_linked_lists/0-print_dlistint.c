#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t node1, node2, node3;
    dlistint_t *head = &node1;

    node1.n = 1;
    node1.prev = NULL;
    node1.next = &node2;

    node2.n = 2;
    node2.prev = &node1;
    node2.next = &node3;

    node3.n = 3;
    node3.prev = &node2;
    node3.next = NULL;

    size_t node_count = print_dlistint(head);
    printf("Number of nodes: %zu\n", node_count);

    return 0;
}
