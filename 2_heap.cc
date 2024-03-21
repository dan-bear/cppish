/**
 * The heap data structure:
 * 1: Heap allows to store orderable elements from a set
 *    (universe) E.
 * 2: Operations:
 *    2.1: getMax() return the maximal element in the heap
 *         with respect to the elements' order. Complexity:
 *         Theta(1).
 *    2.2: deleteMax() deletes the maximal element from the
 *         heap. Complexity: Theta(1)
 *    2.3: insert(e) inserts a new element. Complexity:
 *         Theta(log(n)) or Theta(1) depends on the
 *         implementation.
 * 3: Note: thinking of a heap as a tree structure, the
 *          only guarantee it needs to satisfy is that each
 *          node's value is greater or equal to its
 *          descendents.
 *
 *
 *
 * heap in cpp:
 */
using namespace std;
#include <vector>
#include <algorithm> //for the heap functionality.
#include <iostream>
void
heapInCppStl()
{
    /// in cpp, heap are created from ranged data structure.

    /// 1: make_heap:
    /// 1.1: make_heap converts a range in a data container to
    ///      a heap.
    vector<int> vec1 = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
    cout << "first element before heapifying: " << vec1.front()
         << "\n"; // Print 3.
    make_heap(vec1.begin(), vec1.end());
    cout << "first element after heapifying: " << vec1.front()
         << "\n"; // Prints 9 since it's the largest value.

    /// 1.2: make_heap can except a function that defines
    ///      the order.
    vector<int> vec2 = { 8, 9, 7, 9, 3, 2, 3, 8, 4, 6 };
    cout << "first element before heapifying: " << vec2.front()
         << "\n"; // Print 8.
    make_heap(
      vec2.begin(), vec2.end(), [](int x, int y) { return x > y; });
    cout << "first element after heapifying: " << vec2.front()
         << "\n"; // Print 2.
}

/**
 * @todo priority queue in cpp.
 */

int
main()
{
    heapInCppStl();
}
