#ifndef MERGE_SORTR_H
#define MERGE_SORTR_H

void mergeArrayR(int sortArray[], int firstIndex, int lastIndex)
{
    if(lastIndex == firstIndex) return;
    if(lastIndex - firstIndex == 1)
    {
        if(sortArray[lastIndex] > sortArray[firstIndex])
        {
            int temp = sortArray[firstIndex];
            sortArray[firstIndex] = sortArray[lastIndex];
            sortArray[lastIndex] = temp;
        }
        return;
    }

    int midIndex = (firstIndex + lastIndex) / 2;
    mergeArrayR(sortArray, firstIndex, midIndex);
    mergeArrayR(sortArray, midIndex + 1, lastIndex);

    int buffer[lastIndex + 1];
    int start = firstIndex;
    int center = midIndex + 1;
    int targetIndex = 0;

    while(lastIndex - firstIndex + 1 != targetIndex)
    {
        if(start > midIndex) buffer[targetIndex++] = sortArray[center++];
        else if(center > lastIndex) buffer[targetIndex++] = sortArray[start++];
        else if(sortArray[start] < sortArray[center]) buffer[targetIndex++] = sortArray[center++];
        else buffer[targetIndex++] = sortArray[start++];
    }

    for(int i = 0; i < targetIndex; ++i)
        sortArray[i + firstIndex] = buffer[i];
}

void mergeSortR(int sortArray[], int sizeArray)
{
    int firstIndex = 0;
    int lastIndex = sizeArray - 1;
    mergeArrayR(sortArray, firstIndex, lastIndex);
}

#endif // MERGE_SORTR_H
