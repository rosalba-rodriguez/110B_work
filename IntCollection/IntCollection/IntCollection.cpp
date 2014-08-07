

#include "IntCollection.h"
#include <iostream>

IntCollection::IntCollection()
{
  size = 0;
  capacity = 4;
  data = new int[4];
}

void IntCollection::add(int value)
{
    // Check to see if we need more space
    if (size == capacity)
    {
      doubleArraySize();
    }
    
    // Add the new value
    data[size] = value;
    size++;
}

int IntCollection::get(int index)
{
    return data[index];
}

int IntCollection::getSize()
{
    return size;
}

/*************************
 * Helpers		 *
 *************************/

void IntCollection::doubleArraySize()
{
  // Allocate a new array, twice as big
  int *newArray = new int[capacity * 2];
  
  // Copy values from data to new array
  for (int i = 0; i < size; i++)
  {
      newArray[i] = data[i];
  }
  
  // delete the old array? 
  
  // point data at the new array
  data = newArray;

  // double capacity value
  capacity *= 2;
  
  // Debugging output
  std::cout << "(capacity doubled: " << capacity << ")\n";
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    


