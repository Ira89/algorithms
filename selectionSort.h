#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

void selectionSort(int sortArray[], int sizeArray)
{
    for(int i = 0; i < sizeArray - 1; ++i)
    {
        int indexMinValue = i;
        for(int j = i + 1; j < sizeArray; ++j)
            if(sortArray[j] < sortArray[indexMinValue]) indexMinValue = j;

        if(indexMinValue == sortArray[i]) continue;
        int temp = sortArray[indexMinValue];
        sortArray[indexMinValue] = sortArray[i];
        sortArray[i] = temp;
    }
}

void selectionSortR(int sortArray[], int sizeArray)
{
    for(int i = 0; i < sizeArray - 1; ++i)
    {
        int indexMaxValue = i;
        for(int j = i + 1; j < sizeArray; ++j)
            if(sortArray[j] > sortArray[indexMaxValue]) indexMaxValue = j;

        if(indexMaxValue == sortArray[i]) continue;
        int temp = sortArray[indexMaxValue];
        sortArray[indexMaxValue] = sortArray[i];
        sortArray[i] = temp;
    }
}

#endif // SELECTION_SORT_H
