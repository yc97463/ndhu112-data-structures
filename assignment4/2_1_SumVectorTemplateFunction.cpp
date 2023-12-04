#include <vector>
#include <iostream>

// What is STL || Vector in C++ https://youtu.be/-tDAAOYFehc

template <typename T>
T sum(const std::vector<T> &v)
{
    T total = T(); // init the total to the default value of type T
    for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it)
    {
        total += *it; // add each element to the total
    }
    return total;
}

int main()
{
    std::vector<int> vec; // init vector(vec)
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::cout << "Sum: " << sum(vec) << std::endl; // output: 15

    std::vector<double> vecDouble; // init vector(vecDouble)
    vecDouble.push_back(1.5);
    vecDouble.push_back(2.5);
    vecDouble.push_back(3.5);

    std::cout << "Sum: " << sum(vecDouble) << std::endl; // output: 7.5

    return 0;
}
