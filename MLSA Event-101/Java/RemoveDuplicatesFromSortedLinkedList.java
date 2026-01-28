public class RemoveDuplicatesFromSortedLinkedList {

    // Definition for singly-linked list.
    static class Node {
        int val;
        Node next;

        Node(int val) {
            this.val = val;
            this.next = null;
        }
    }

    // Function to remove duplicates from a sorted linked list
    public static Node removeDuplicates(Node head) {
        // If list is empty or has only one node, no duplicates possible
        if (head == null || head.next == null) {
            return head;
        }

        Node current = head;

        // Traverse the list
        while (current != null && current.next != null) {
            // Compare current node with the next node
            if (current.val == current.next.val) {
                // Duplicate found, skip the next node
                current.next = current.next.next;
            } else {
                // No duplicate, move to the next node
                current = current.next;
            }
        }
        return head;
    }

    // Helper method to print the linked list
    public static void printList(Node head) {
        Node current = head;
        while (current != null) {
            System.out.print(current.val + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        // Create a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3 -> 4
        Node head = new Node(1);
        head.next = new Node(1);
        head.next.next = new Node(2);
        head.next.next.next = new Node(3);
        head.next.next.next.next = new Node(3);
        head.next.next.next.next.next = new Node(4);

        System.out.println("Original Linked List:");
        printList(head);

        // Remove duplicates
        head = removeDuplicates(head);

        System.out.println("\nLinked List after removing duplicates:");
        printList(head);
    }
}