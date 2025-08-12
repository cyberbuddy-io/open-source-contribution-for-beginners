class Middle {
    public ListNode middleNode(ListNode head) {
        ListNode currListNode = head;
        int listLength = 0;
        while(currListNode != null) {
            listLength ++;
            currListNode = currListNode.next();
        }

        int middleElementIndex = listLength / 2;
        if(listLength % 2 == 0) {
            middleElementIndex++;
        }

        ListNode solutionNode = head;

        while(middleElementIndex != 0) {
            solutionNode = solutionNode.next();
        }

        return solutionNode;

    }
}