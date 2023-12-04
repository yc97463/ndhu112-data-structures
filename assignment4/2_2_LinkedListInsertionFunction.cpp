#include <iostream>
#include <stdexcept>

template <typename T, size_t Size>
class CircularSequence
{
private:
    T data[Size];
    int front;
    int rear;
    int count;

public:
    CircularSequence() : front(-1), rear(-1), count(0) {}

    // Check if the sequence is empty
    bool isEmpty() const
    {
        return count == 0;
    }

    // Check if the sequence is full
    bool isFull() const
    {
        return count == Size;
    }

    // Insert an element at the rear of the sequence
    void insert(const T &element)
    {
        if (isFull())
        {
            throw std::runtime_error("Sequence is full");
        }

        if (isEmpty())
        {
            front = 0;
        }

        rear = (rear + 1) % Size;
        data[rear] = element;
        count++;
        std::cout << "Insert, [" << rear << "] " << (element) << std::endl;
    }

    // Remove an element from the front of the sequence
    T remove()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Sequence is empty");
        }

        T removedElement = data[front];
        front = (front + 1) % Size;
        count--;
        std::cout << "Remove, now have " << count << " items" << std::endl;

        if (isEmpty())
        {
            front = rear = -1; // Reset the sequence
        }

        return removedElement;
    }

    // Get the element at a specific position
    T at(int index) const
    {
        if (index < 0 || index >= count)
        {
            throw std::out_of_range("Index out of range");
        }

        return data[(front + index) % Size];
    }
};

int main()
{
    CircularSequence<int, 5> seq;

    std::cout << "Is sequence empty? " << ((seq.isEmpty() == true) ? "TRUE" : "FALSE") << std::endl;
    std::cout << "Let's start\n====================" << std::endl;

    // Example usage
    seq.insert(10);
    seq.insert(20);
    seq.insert(30);
    std::cout << "Element at index [1]: " << seq.at(1) << std::endl; // output: 20

    seq.remove(); // Removes 10
    seq.insert(40);
    seq.insert(80);

    std::cout << "Element at front: " << seq.at(0) << std::endl; // output: 20

    seq.remove(); // Remove 20

    std::cout << "Element at index [0] (front): " << seq.at(0) << std::endl;
    std::cout << "Element at index [1]: " << seq.at(1) << std::endl;
    std::cout << "Element at index [2]: " << seq.at(2) << std::endl;

    return 0;
}
