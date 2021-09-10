#ifndef _ARRAY_BAG_CPP
#define _ARRAY_BAG_CPP
#include <vector>
#include "ArrayBag.h"
using namespace std;

template<class ItemType>
int ArrayBag<ItemType> :: getIndexOf(const ItemType& target) const
{
  bool found = false;
  int result = -1;
  int searchIndex = 0;

  while(!found && (searchIndex < itemCount))
  {
    if (items[searchIndex] == target)
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
bool ArrayBag<ItemType> :: add(const ItemType &newEntry)
{
  bool hasRoomtoAdd = (itemCount < maxItems);
  if (hasRoomtoAdd)
  {
    items[itemCount] = newEntry;
    itemCount++;
  }
  return hasRoomtoAdd;
}

template<class ItemType> 
int ArrayBag<ItemType> :: getCurrentSize() const
{
  return itemCount;
}

template<class ItemType>
bool ArrayBag<ItemType> :: isEmpty() const
{
  return itemCount == 0;
}

template<class ItemType>
bool ArrayBag<ItemType> :: remove(const ItemType& anEntry)
{
  int localIndex = getIndexOf(anEntry);
  bool canremoveItem = !isEmpty() && (localIndex > -1);

  if (canremoveItem)
  {
    itemCount--;
    items[localIndex] = items[itemCount];
  }
}

template<class ItemType>
int ArrayBag<ItemType> :: getFrequencyOf(const ItemType &anEntry) const
{
  int frequency = 0;
	int curIndex = 0;
	while(curIndex < itemCount)
	{
		if(items[curIndex] == anEntry) {
			frequency++;
		}
		curIndex++;
	} 
	return frequency;
}
template<class ItemType>
bool ArrayBag<ItemType> :: contains(const ItemType& target) const
{
  return getIndexOf(target) > -1;
}

template<class ItemType>
void ArrayBag<ItemType> :: clear()
{
  itemCount = 0;
}

template<class ItemType>
vector<ItemType> ArrayBag<ItemType> :: toVector() const
{
  vector<ItemType> bagContents;
  for (int i =0; i < itemCount; i++ )
  {
    bagContents.push_back(items[i]);
  }
  return bagContents;
}
#endif