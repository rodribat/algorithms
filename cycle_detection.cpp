#include<set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    if (head == NULL)
        return 0;
    
    std::set<Node*> visited_nodes;
    Node* current = head;
    
    while (!current->next == NULL)
    {
        std::set<Node*>::iterator it = visited_nodes.find(current->next);
        if (it != visited_nodes.end())
            return 1;
            
        visited_nodes.insert(current);
        current = current->next;
    }
    
    return 0;
}