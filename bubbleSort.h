#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

void bubbleSort(int sortArray[], int sizeArray)
{
    for(int i = sizeArray - 1; i >= 0; --i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(sortArray[j] > sortArray[i])
            {
                int temp = sortArray[j];
                sortArray[j] = sortArray[j + 1];
                sortArray[j + 1] = temp;
            }
        }
    }
}

void bubbleSortR(int sortArray[], int sizeArray)
{
    for(int i = sizeArray - 1; i >= 0; --i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(sortArray[j] < sortArray[i])
            {
                int temp = sortArray[j];
                sortArray[j] = sortArray[j + 1];
                sortArray[j + 1] = temp;
            }
        }
    }
}

#endif // BUBBLE_SORT_H
