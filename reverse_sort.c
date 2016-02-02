int compare(int a, int b) {
	    return b - a;
}

// For qsort
int compareq (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}