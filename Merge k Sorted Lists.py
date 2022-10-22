class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        if lists == None or len(lists) == 0:
            return None
        
        dummy = ListNode(-1)
        tail = dummy
        heap = []
        
        #Pushing first values to the heap
        for i in range(len(lists)):
            if lists[i]:
                heappush(heap, (lists[i].val, i))
        
        while heap:
            # Poping out the value and index
            temp, i = heappop(heap)
            # Creating a new node and adding to tail and updating tail
            tail.next = ListNode(temp)
            tail = tail.next
            
            # Updating the org Linked List with its Next value ( it will remove the value used)
            lists[i] = lists[i].next
            if lists[i]:
                # Pushing the value to the LL
                heappush(heap, (lists[i].val, i))
            
        return dummy.next
