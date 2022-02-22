#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;


float MinElement (int* array, int arraySize)
{
    float minElement = array[0];
    for(int i = 0; i < arraySize; i++)
    {
        if(minElement > array[i])
            minElement = array[i];
    }

    return minElement;
}

float MinElementIndex (int* array, int arraySize)
{
    float minElementIndex = 0;
    for(int i = 0; i < arraySize; i++)
    {
        if(minElementIndex > array[i])
            minElementIndex = i;
    }

    return minElementIndex;
}

float MaxElement (int* array, int arraySize)
{
    float minElement = array[0];
    for(int i = 0; i < arraySize; i++)
    {
        if(minElement < array[i])
            minElement = array[i];
    }

    return minElement;
}

float MaxElementIndex (int* array, int arraySize)
{
    float maxElementIndex = 0;
    for(int i = 0; i < arraySize; i++)
    {
        if(maxElementIndex < array[i])
            maxElementIndex = i;
    }

    return maxElementIndex;
}
/*
float CreateArray(ifstream& F, float array)
{
    float plug;
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        if (!F.eof())
        {
            F >> plug;
            F >> (array + i);
        }
    }

    return array;
}
*/
int main()
{
    //ifstream File = "Result.txt";
    //float array[];
    //array = CreateArray(F, array);
    int size = 8;
    int array[size] = {-8, 1, 2, 3, 14, -15, 3, 2};
    cout << "Min element is:\t" << MinElement(array, size) << endl;
    cout << "Min element index is:\t" << MinElementIndex(array, size) << endl;
    cout << "Max element is:\t" << MaxElement(array, size) << endl;
    cout << "Max element index is:\t" << MaxElementIndex(array, size) << endl;

    return 0;
}
