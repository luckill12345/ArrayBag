#ifndef ARRAY_BAG_H
#define ARRAY_BAG_H

#icnlude <vector>
using namespace std;
template<class ItemType>

class ArrayBag
{
  priavte:
    static const final int DEFAULT_CAPACITY = 6 ;
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItem
    int getIndexOf(const ItemType target) const;
  public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add (const ItemType& newEntry);
    bool remove (const ItemType& anEntry);
    int getFrequrncyOf(const ItemType& anEntry) const;
    bool contains(const ItemType& target);
    void clear;
    vector<ItemType> toVector() const;
};
 
 #endif