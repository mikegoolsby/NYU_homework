// Author: Mike Goolsby
// Email: mg7276@nyu.edu
// Program computes how much a customer has to pay after
// purchasing two items according to BOGO promotion and tax.


#include <iostream>
using namespace std;

int main()
{
    // initializing variables
    int itemOne, itemTwo;
    int basePrice;
    char hasClubCard; //show proof of membership, always
    double tax;
    double priceAfterDiscounts, totalPrice;

    // capturing user input & I/O stream
    cout<<"Enter price of first item: $";
    cin>>itemOne;
    cout<<"Enter price of second item: $";
    cin>>itemTwo;

    // logic for capturing club card info
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>hasClubCard;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax;

    // print base price
    basePrice = itemOne + itemTwo;
    cout<<"Base price: $"<<basePrice<<endl;

    if(itemOne < itemTwo) //if item one is cheaper
    {
        itemOne = (double)itemOne / 2; //item one is now half off
        basePrice = itemOne + (double)itemTwo;
    }
    else
    {
        itemTwo = (double)itemTwo / 2;//otherwise, item two is half off
        basePrice = itemTwo + (double)itemOne;
    }

    // if customer has a membership card, we take addtl 10 pct off
    if(hasClubCard == 'Y' || hasClubCard == 'y')
    {
        priceAfterDiscounts = basePrice * (.90);
    }
    else
    {
        priceAfterDiscounts = basePrice;
    }

    cout<<"Price after discounts: $"<<priceAfterDiscounts<<endl;

    // multiply by user-given tax rate and return total price
    tax = tax / 100;
    totalPrice = priceAfterDiscounts * (1 + tax);

    cout<<"Total price: $"<<totalPrice<<endl;

    return 0;
}