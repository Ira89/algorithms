#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

int binarySearch(int arrayOfSearch[], int sizeArray, int key)
{
    int firstIndex = 0;
    int midIndex = 0;
    int lastIndex = sizeArray - 1;

    while(firstIndex < lastIndex)
    {
        midIndex = firstIndex + (lastIndex - firstIndex) / 2;
        key <= arrayOfSearch[midIndex] ? lastIndex = midIndex : firstIndex = midIndex + 1;
        if(key == arrayOfSearch[lastIndex]) return lastIndex;
    }

    return -1;
}

#endif // BINARY_SEARCH_H
