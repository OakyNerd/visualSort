#ifndef FUNC_HPP
#define FUNC_HPP

/*Include statements*/

#include <iostream> //std::cin, std::cout
#include <string> //std::string
#include <vector> //std::vector

/*Using statements*/

using namespace std;
using intArr = vector<int>;

/*Function declarations*/

/*Hello World*/
void helloWorld();

/*Bubble sort*/
intArr bubbleSort(intArr a);
/*Insertion sort*/
intArr insertionSort(intArr a);
/*Selection sort*/
intArr selectionSort(intArr a);
/*Quick sort*/
intArr quickSort(intArr a);

/*Structs*/

struct saveState {
    intArr array;
    int index1, index2;
}

#endif