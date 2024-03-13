#include <iostream>
#include <chrono>

#include <vector>
#include "LinkedListInt\LinkedList.h"

using namespace std;
using namespace chrono;

template <class B, class T>
void print_info(T value, B bitset)
{
    cout << "Address: " << &value;
    cout << " | size in bytes: " << sizeof(&value) << endl;
    cout << "Bits: " << bitset << endl;
} 

void linked_list_insert_test(int amountToAdd)
{
    LinkedList linked_list;   
    for (int i = 0; i < amountToAdd; i++)
    {
        linked_list.insert(0, 50);
    }
}

void vector_insert_test(int amountToAdd)
{
    vector<int> array;

    for (int i = 0; i < amountToAdd; i++)
    {
        array.insert(array.begin(), 50);
    }
}

void linked_list_add_test(int amountToAdd)
{
    LinkedList linked_list;   
    for (int i = 0; i < amountToAdd; i++)
    {
        linked_list.add(50);
    }
}

void vector_push_back_test(int amountToAdd)
{
    vector<int> array;

    for (int i = 0; i < amountToAdd; i++)
    {
        array.push_back(50);
    }
}

int sum_from_to(int first, int last)
{
    int output = 0;

    const int tempFirst = first < last? first : last;
    const int tempLast = first < last? last : first;
    
    for (int i = tempFirst; i <= tempLast; i++)
    {
        output += i;
    }

    return output;
}

double get_average(double* array, const int size)
{
    double total = 0;
    
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    total /= size;
    return total;
}


int main()
{
    /*
    const auto listInsertAverageTime = new double[20];
    const auto vectorInsertAverageTime = new double[20];
    const auto listAddAverageTime = new double[20];
    const auto vectorPushBackAverageTime = new double[20]; 
    
    for (int i  = 0; i < 20; i++)
    {
        constexpr int iterations = 50000;
        const auto startInsertListTime = high_resolution_clock::now();
        linked_list_insert_test(iterations);
        const auto endInsertListTime = high_resolution_clock::now();

        const auto startInsertVectorTime = high_resolution_clock::now();
        vector_insert_test(iterations);
        const auto endInsertVectorTime = high_resolution_clock::now();
        
        const auto startAddListTime = high_resolution_clock::now();
        linked_list_add_test(iterations);
        const auto endAddListTime = high_resolution_clock::now();

        const auto startPushBackVectorTime = high_resolution_clock::now();
        vector_push_back_test(iterations);
        const auto endPushBackVectorTime = high_resolution_clock::now();
        
        listInsertAverageTime[i] = duration<double, milli>(endInsertListTime - startInsertListTime).count();
        vectorInsertAverageTime[i] = duration<double, milli>(endInsertVectorTime - startInsertVectorTime).count();
        listAddAverageTime[i] = duration<double, milli>(endAddListTime - startAddListTime).count();
        vectorPushBackAverageTime[i] = duration<double, milli>(endPushBackVectorTime - startPushBackVectorTime).count();
    }
    
    cout << "LinkedList Average Insertion Time => " << get_average(listInsertAverageTime, 20) << "ms" << endl;
    cout << "Vector Average Insertion Time=> " << get_average(vectorInsertAverageTime, 20) << "ms" << endl;
    cout << "LinkedList Average Add Time => " << get_average(listAddAverageTime, 20) << "ms" << endl;
    cout << "Vector Average Pushback Time=> " << get_average(vectorPushBackAverageTime, 20) << "ms" << endl;
    */
    
    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.print_list();

    cout << list[3] << endl;
    
    return 0; 
}






