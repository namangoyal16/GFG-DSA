Arrays are costlier data structures in terms of storing and deleting the elements in them , it takes O(log n ) time if array is sorted and insertion takes O(n) time to insert an element at its correct position
so arrays become inefficient data structure if we talk in terms of time operation cost and hence we need other data structures which can do this task efficiently and solve our major problem of high time .

Certain other data structures are : 
Set , unordered_set ===> stores unique values in sorted manner ( only set ) and takes time as O(logn) and unordered_set stores unique values in unorderd manner in O(1) time .
map , unordered_map ===> stores unique key value pairs in sorted order (only map) and takes time as O(logn) and unordered_map stores unique key value pairs in unordered way in O(1) time.

there is multiset also which can store multiple values in a set in O(logn) time .
  
There are avl trees and red black trees which are binary search trees and they are also used for searching nearest keys and nearest values .

Hashing is only useful if we are inserted only in searching 
