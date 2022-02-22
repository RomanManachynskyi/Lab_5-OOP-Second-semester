using namespace std;
#include <iostream>

float MinElement (int array[])
{
    int size = sizeof(array)/sizeof(array[0]);
    int maxElement = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[i + 1])
            maxElement = array[i];
        else
            maxElement = array[i + 1];
    }

    return minElement;
}

int MaxElement (int array[])
{
    int size = sizeof(array)/sizeof(array[0]);
    int maxElement = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[i + 1])
            maxElement = array[i + 1];
        else
            maxElement = array[i];
    }

    return maxElement;
}

float MinElementIndex (int array[])
{
    int size = sizeof(array)/sizeof(array[0]);
    int minElementIndex = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[i + 1])
            minElementIndex = i;
        else
            minElementIndex = i + 1;
    }

    return minElementIndex;
}

float MaxElementIndex (int array[])
{
        int size = sizeof(array)/sizeof(array[0]);
    int maxElementIndex = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[i + 1])
            maxElementIndex = i + 1;
        else
            maxElementIndex = i;
    }

    return maxElementIndex;
}

float* CreateArray(ifstream& F, float** array)
{
    float plug;
    int size = sizeof(array)/sizeof(array[0]);
    for (size_t i = 0; i < size; i++)
        if (!F.eof())
        {
            F >> plug;
            F >> *(*array + i);
        }

    return *array;
}

int main()
{
    ifstream File = "Result.txt";
    float* array[];
    array = CreateArray(F, &array);
    cout << "Min element is:\t" << MinElement(array) << endl;
    cout << "Min element index is:\t" << MinElementIndex(array) << endl;
    cout << "Max element is:\t" << MaxElement(array) << endl;
    cout << "Max element index is:\t" << MaxElementIndex(array) << endl;

    return 0;
}