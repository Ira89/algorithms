#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

void insertionSort(int sortArray[], int sizeArray)
{
    for(int i = 1; i < sizeArray; ++i)
    {
        int temp = sortArray[i];
        for(int j = i - 1; j >= 0; --j)
        {
            if(sortArray[j] < temp) break;
            sortArray[j + 1] = sortArray[j];
            sortArray[j] = temp;
        }
    }
}

void insertionSortR(int sortArray[], int sizeArray)
{
    for(int i = 1; i < sizeArray; ++i)
    {
        int temp = sortArray[i];
        for(int j = i - 1; j >= 0; --j)
        {
            if(sortArray[j] > temp) break;
            sortArray[j + 1] = sortArray[j];
            sortArray[j] = temp;
        }
    }
}

#endif // INSERTION_SORT_H
