#ifndef MERGE_SORT_H
#define MERGE_SORT_H

void mergeArray(int sortArray[], int firstIndex, int lastIndex)
{
    if(lastIndex == firstIndex) return;
    if(lastIndex - firstIndex == 1)
    {
        if(sortArray[lastIndex] < sortArray[firstIndex])
        {
            int temp = sortArray[firstIndex];
            sortArray[firstIndex] = sortArray[lastIndex];
            sortArray[lastIndex] = temp;
        }
        return;
    }

    int midIndex = (firstIndex + lastIndex) / 2;
    mergeArray(sortArray, firstIndex, midIndex);
    mergeArray(sortArray, midIndex + 1, lastIndex);

    int buffer[lastIndex + 1];
    int start = firstIndex;
    int center = midIndex + 1;
    int targetIndex = 0;

    while(lastIndex - firstIndex + 1 != targetIndex)
    {
        if(start > midIndex) buffer[targetIndex++] = sortArray[center++];
        else if(center > lastIndex) buffer[targetIndex++] = sortArray[start++];
        else if(sortArray[start] > sortArray[center]) buffer[targetIndex++] = sortArray[center++];
        else buffer[targetIndex++] = sortArray[start++];
    }

    for(int i = 0; i < targetIndex; ++i)
        sortArray[i + firstIndex] = buffer[i];
}

void mergeSort(int sortArray[], int sizeArray)
{
    int firstIndex = 0;
    int lastIndex = sizeArray - 1;
    mergeArray(sortArray, firstIndex, lastIndex);
}

#endif // MERGE_SORT_H
