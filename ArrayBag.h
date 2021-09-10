#ifndef _ARRAY_BAG_H
#define _ARRAY_BAG_H

#include <vector>
using namespace std;

template<class ItemType>
class ArrayBag
{
  private:
    static const int DEFAULT_CAPACITY = 6 ;
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
    int getIndexOf(const ItemType& target) const;
  public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add (const ItemType& newEntry);
    bool remove (const ItemType& anEntry);
    int getFrequencyOf(const ItemType& anEntry) const;
    bool contains(const ItemType& target) const;
    void clear();
    vector<ItemType> toVector() const;
};
 
#include "ArrayBag.cpp"
#endif