class ListNode(object):
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def mergeTwoLists(self, list1, list2):
    first = ListNode();
    lista = first;
    while list1 and list2:
        if list1.val <= list2.val:
            lista.next = list1
            list1 = list1.next
        else:
            lista.next = list2
            list2 = list2.next
        lista = lista.next
    if not list1:
        lista.next = list2
    if not list2:
        lista.next = list1
    return first.next
