// Create a shopping list Shopping List Vector
//
//Paul Ayala 
//Dr. Tyson McMillan 
//TCCD Trinity River 
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//Vector for shopping list
vector <string> shoppingList;
//For decending sort
bool wayToSort(string s1, string s2) {
   return s1 > s2;
}
//Sorting the list
void sortList() {
   std::sort(shoppingList.begin(), shoppingList.end(),wayToSort);
}
//Printing the list
void printList() {
   for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
       cout << *it << " ";
   }
   cout << endl;
}
//Add items to shopping list till end is entered
void addToList() {
   string item;
   while (1) {
       cout << "Enter the item to added to the list" << endl;
       cin>>item;
       if (item == "end") {
           return;
       }
       shoppingList.push_back(item);
   }
}
//main function
int main()
{
   int i = 0;
   addToList();
   cout << "Before sorting the list" << endl;
   printList();
   sortList();
   cout << "After sorting the list" << endl;
   printList();
   getchar();
   getchar();
   return 0;
}
