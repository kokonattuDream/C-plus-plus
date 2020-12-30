#include <iostream>
#include <string>
 
enum ItemType
{
    itemtype_sword,
    itemtype_torch,
    itemtype_potion
};
 
std::string getItemName(ItemType itemType)
{
    if (itemType == itemtype_sword)
        return "Sword";
    if (itemType == itemtype_torch)
        return "Torch";
    if (itemType == itemtype_potion)
        return "Potion";
 
    // Just in case we add a new item in the future and forget to update this function
    return "???";
}
 
int main()
{
    // ItemType is the enumerated type we've defined above.
    // itemType (lower case i) is the name of the variable we're defining (of type ItemType).
    // itemtype_torch is the enumerated value we're initializing variable itemType with.
    ItemType itemType{ itemtype_torch };
 
    std::cout << "You are carrying a " << getItemName(itemType) << '\n';
 
    return 0;
}