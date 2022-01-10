bool detectLoop(struct Node* h)
{
    while (h != NULL) {
        // If this node is already traverse
        // it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (h->flag == 1)
            return true;
 
        // If we are seeing the node for
        // the first time, mark its flag as 1
        h->flag = 1;
 
        h = h->next;
    }
 
    return false;
}
 
