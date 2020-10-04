#ifndef ARRAYBAG_
#define ARRAYBAG_


template<typename ItemType
> 
class ArrayBag 
{
protected:
static const int DEFAULT_CAPACITY = 200;  // max size of items_ 
ItemType items_[DEFAULT_CAPACITY];        // items in the array bag
int item_count_;                          // Current count of items in bag

/**
 @param target to be found in items_
 @return either the index target in the array items_ or -1,
 if the array does not contain the target.
 **/
int getIndexOf(const ItemType &target) const;

public:
/** 
 Default Constructor
 item_count_  <- 0
**/
ArrayBag();

/**
 @return item_count_ : the current size of the bag
**/
int getCurrentSize() const;

/**
 @return true if item_count_ == 0, false otherwise
 **/
bool isEmpty() const;

/**
 @return true if new_entry was successfully added to items_, false otherwise
 **/
bool add(const ItemType &new_entry);

/**
 @return true if an_entry was successfully removed from items_, false otherwise
 **/
bool remove(const ItemType &an_entry);

/**
 @post item_count_ == 0
 **/
void clear();

/**
 @return true if an_entry is found in items_, false otherwise
 -> THIS METHOD MUST CALL getIndexOf() <-
 **/
bool contains(const ItemType &an_entry) const;

/**
 @return the number of times an_entry appears in items_
 **/
int getFrequencyOf(const ItemType &an_entry) const;
};
#include "ArrayBag.cpp"

#endif