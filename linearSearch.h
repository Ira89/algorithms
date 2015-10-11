#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

int linearSearch(int arrayOfSearch[], int sizeArray, int key)
{
    int lastIndex = sizeArray - 1;
    if(arrayOfSearch[lastIndex] == key) return lastIndex;

    int temp = arrayOfSearch[lastIndex];
    arrayOfSearch[lastIndex] = key;

    int currentIndex = 0;
    while(arrayOfSearch[currentIndex++] != key);
    if(--currentIndex == lastIndex) currentIndex = -1;

    arrayOfSearch[lastIndex] = temp;
    return currentIndex;
}

#endif // LINEAR_SEARCH_H
