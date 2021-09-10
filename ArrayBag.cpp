#include "ArrayBag.h"
#include <vector>
using namespace std;

template<class ItemType>
int ArrayBag<ItemType> :: getIndexOf(const ItemType& target) const
{
  bool found = false;
  int result = -1;
  int searchIndex = 0;

  while(!found && (searchIndex < itemCount))
  {
    if (items[searchIndex] = target)
    {
      found = true;
      result = searchIndex;
    }
    searchIndex++;
  }
  return result;
}

template<class ItemType>
ArrayBag<ItemType> :: ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY){}

template<class ItemType>
ArrayBag<ItemType> :: add(const ItemType &newEntry)
{
  bool hasRoomtoAdd = (itemCount < maxItem);
  if (hasRoomtoAdd)
  {
    items[itemCount] = newEntry;
    itemCount++;
  }
  return hasRoomtoAdd;
}

template<class ItemType> 
int ArrayBag<ItemType> :: getCurrentSize()
template<class ItemType>
bool ArrayBag<ItemType> :: isEmpty()
{
  return 
}
template<class ItemType>
template<class ItemType>
template<class ItemType>
template<class ItemType>
