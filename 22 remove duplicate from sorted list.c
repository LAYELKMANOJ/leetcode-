
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
            // Skip duplicate node
            current->next = current->next->next;
        } else {
            // Move to next node
            current = current->next;
        }
    }

    return head;
}
