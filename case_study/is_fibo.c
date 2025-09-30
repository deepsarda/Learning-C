#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned long *numbers;
    size_t size;
    size_t capacity;
} FibCache;

void initCache(FibCache *cache, size_t initialCapacity)
{
    cache->numbers = (unsigned long *)malloc(initialCapacity * sizeof(unsigned long));
    cache->size = 0;
    cache->capacity = initialCapacity;
}

void freeCache(FibCache *cache)
{
    free(cache->numbers);
    cache->numbers = NULL;
    cache->size = 0;
    cache->capacity = 0;
}

void addToCache(FibCache *cache, unsigned long val)
{
    // If the array is full, double its capacity
    if (cache->size == cache->capacity)
    {
        size_t newCapacity = cache->capacity * 2;
        unsigned long *newNumbers = (unsigned long *)realloc(cache->numbers, newCapacity * sizeof(unsigned long));
        cache->numbers = newNumbers;
        cache->capacity = newCapacity;
    }

    cache->numbers[cache->size] = val;
    cache->size++;
}

int isFibo(FibCache *cache, unsigned long n)
{

    unsigned long lastFib = cache->numbers[cache->size - 1];

    if (n <= lastFib)
    {
        int l = 0, r = cache->size - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (cache->numbers[mid] == n)
                return 1;
            if (cache->numbers[mid] > n)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return 0;
    }

    // Continue generating the sequence
    while (lastFib < n)
    {
        unsigned long a = cache->numbers[cache->size - 2];
        unsigned long b = cache->numbers[cache->size - 1];

        unsigned long nextFib = a + b;
        addToCache(cache, nextFib);
        lastFib = nextFib;
    }

    return (lastFib == n);
}

int main()
{
    int T;
    scanf("%d", &T);

    // Create and initialize the cache of fib numbers
    FibCache fibCache;
    initCache(&fibCache, 16);

    addToCache(&fibCache, 0);
    addToCache(&fibCache, 1);

    for (int i = 0; i < T; i++)
    {
        unsigned long N;
        scanf("%lu", &N);

        if (isFibo(&fibCache, N))
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
    }

    // Free memory
    freeCache(&fibCache);

    return 0;
}