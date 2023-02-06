void add_last(int x)
{
	struct list *new_node = (struct list *)malloc(sizeof(struct list));
    new_node->data = r;
	new_node->next = NULL;
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		struct Node *p = head;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = new_node;
		
	}	
}
