#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class BinarySearch {
public:
	BinarySearch (int size);
	~BinarySearch ();	
	void FillRandomData ();
	//void GetUserInput ();
	bool SearchKey (int key);
	
private:
	int size;
	int * arr;	
};

BinarySearch::BinarySearch (int size)
{
	arr = new int[n];
	size = size;
}

BinarySearch::~BinarySearch ()
{
	delete[] arr;
}

void BinarySearch::FillRandomData ()
{
	srand (time (NULL));
	
	for (int i = 0; i < size; i++){		
		arr[i] = rand();
	}
}

bool SearchKey (int key)
{
	sort (arr, arr + size);
	
	int st, end, middle;
	st = 0;
	end = size-1;	
	
	while (end >= st) {
	
		middle = st + ((st - end) / 2);
	
		if (arr[middle] == key)
			return true;
		else if (key < arr[middle]) 
			end = middle - 1;					
		else 
			st = middle + 1;			
	}
	
	return false;
}