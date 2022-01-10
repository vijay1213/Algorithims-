class Solution
{
    public:
    struct node *reverse (struct node* head, int k)
    {
    	struct node* current = head;
    	struct node* next = NULL;
    	struct node* prev = NULL;
    	int count = 0; 
    	
    	while (current != NULL && count < k)
    	// reversing k elements :
    	{
    		next = current->next;             // marking next node
    		current->next = prev;             // reversing link
    		prev = current;                   // updating prev
    		current = next;                   // updating current
    		count++;
    	}
    	
    	if (next != NULL)       // checking if there are nodes ahead
        	head->next = reverse(next, k);    // reversing those recursively
        
    	return prev;            // returning new head
    }
};
