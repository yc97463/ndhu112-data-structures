# Question and Answer

## 1. Draw a representation of an initially empty vector A after performing the following sequence of operations: insert(0,4), insert(0,3), insert(0,2), insert(2,1), insert(1,5), insert(1,6), insert(3,7), insert(0,8)..

To solve this, we need to visualize each step of the operations:

1. `insert(0,4)`: Inserts 4 at position 0. Vector A = [4].
2. `insert(0,3)`: Inserts 3 at position 0, shifting 4 to the right. Vector A = [3, 4].
3. `insert(0,2)`: Inserts 2 at position 0, shifting 3 and 4 to the right. Vector A = [2, 3, 4].
4. `insert(2,1)`: Inserts 1 at position 2, shifting 4 to the right. Vector A = [2, 3, 1, 4].
5. `insert(1,5)`: Inserts 5 at position 1, shifting 3, 1, and 4 to the right. Vector A = [2, 5, 3, 1, 4].
6. `insert(1,6)`: Inserts 6 at position 1, shifting 5, 3, 1, an

The final state of vector A after all these operations is [8, 2, 6, 5, 7, 3, 1, 4].

## 2. Suppose that we have made kn total accesses to the elements in a list L of n elements, for some integer k ≥ 1. What are the minimum and maximum number of elements that have been accessed fewer than k times?.

To solve this question, we need to consider different scenarios of accessing elements in the list:

1. **Minimum Number of Elements Accessed Fewer Than ` k ` Times:**
   - This scenario occurs when the accesses are as evenly distributed as possible across all ` n ` elements. 
   - If ` kn ` accesses are made and ` k ` accesses per element are needed to reach ` k ` times, then ideally, each element would be accessed exactly ` k ` times. However, if ` kn ` is not a multiple of ` n ` (i.e., ` kn mod n != 0 `), there will be some elements that have been accessed fewer than ` k ` times.
   - The minimum number of elements accessed fewer than ` k ` times is ` kn mod n ` (the remainder when ` kn ` is divided by ` n `).

2. **Maximum Number of Elements Accessed Fewer Than ` k ` Times:**
   - This scenario occurs when accesses are concentrated on as few elements as possible.
   - If one element is accessed repeatedly until it reaches ` k ` times, and then move to the next, and so on, the number of elements not reaching ` k ` accesses will be maximized.
   - To find the maximum number, we can divide the total accesses ` kn ` by ` k `. The quotient gives the number of elements that have been accessed ` k ` times. The remaining elements, ` n ` minus this quotient, are the ones accessed fewer than ` k ` times.
   - So, the maximum number of elements accessed fewer than ` k ` times is ` n - ⌊ (kn)/(k) ⌋ = n - ⌊ n ⌋ `, which simplifies to ` n - n = 0 ` (since ` n ` is an integer).

In conclusion:
- The minimum number of elements accessed fewer than ` k ` times is ` kn mod n `.
- The maximum number of elements accessed fewer than ` k ` times is ` 0 ` (assuming ` kn ` is a multiple of ` k `).

## 3. Briefly describe how to perform a new sequence function makeFirst(p) that moves an element of a sequence S at position p to be the first element in S while keeping the relative ordering of the remaining elements in S unchanged. Your function should run in O(1) time if S is implemented with a doubly linked list.

Question 3 in Section 1 of your homework assignment asks:

"**Briefly describe how to perform a new sequence function makeFirst(p) that moves an element of a sequence S at position p to be the first element in S while keeping the relative ordering of the remaining elements in S unchanged. Your function should run in O(1) time if S is implemented with a doubly linked list.**"

To solve this question, let's consider how to implement the `makeFirst(p)` function in a doubly linked list:

1. **Identify the Node:**
   - The first step is to identify the node at position `p` in the sequence `S`. This can be done by traversing the list to the `p`th position.

2. **Moving the Node:**
   - Once the node is identified, we need to move it to the front of the list.
   - If the list is a doubly linked list, each node has references to both its previous and next nodes.
   - To move the node to the front, we need to:
     - Update the `next` reference of the previous node of the `p`th node to point to the `next` node of the `p`th node.
     - Update the `previous` reference of the next node of the `p`th node to point to the previous node of the `p`th node.
     - Set the `previous` reference of the `p`th node to `null` as it will become the new first node.
     - Set the `next` reference of the `p`th node to the current first node of the list.
     - Update the `previous` reference of the current first node to point to the `p`th node.
     - Finally, update the head of the list to be the `p`th node.

3. **Time Complexity:**
   - Since a doubly linked list allows us to directly access the previous and next nodes, the updates to the pointers/references can be done in constant time, O(1).
   - This assumes that we have direct access to the node at position `p`. If we need to traverse the list to find this node, the time complexity would be O(p), where p is the position of the node. However, for the purpose of this function, we are considering that the node at position `p` is already given or identified.

4. **Edge Cases:**
   - If `p` is already the first element, no action is needed.
   - If the list is empty or `p` is out of the bounds of the list, appropriate error handling should be implemented.

In summary, the `makeFirst(p)` function in a doubly linked list can be implemented in O(1) time by reassigning the references of the nodes surrounding the `p`th node and updating the head of the list.

