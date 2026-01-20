/*PROJECT
E-Commerce Website — Shipping Cost Calculator
An online store wants a function to compute shipping cost.
Write a function that takes:
Weight (kg)
Distance (km)
Delivery type: standard or express
Rules:
1. Base cost = 100
2. Cost per kg = 50
3. Cost per km = 1
4. Express adds +500 extra
5. Return total shipping cost.
Also create a function to display a shipping receipt.*/


#include<iostream>
using namespace std;

int shippingCost(int weight, int distance, string shippingType)
{
   int base_cost = 100;
   int Costperkg = 50;
   int Costperkm = 1;
   int total_shipping_cost = base_cost + (weight * Costperkg) + (distance * Costperkm);
   if(shippingType == "express"){
   total_shipping_cost = total_shipping_cost + 500;
    }
  
   return total_shipping_cost;
}

int  shipping_receipt(int weight, int distance, string shippingType, int total_shipping_cost){
    cout<<" SHIPPING RECEIPT "<<endl;
    cout<<" item weight: "<<weight<<endl;
    cout<<" item distance: "<<distance<<endl;
    cout<<" shipping type: "<<shippingType<<endl;
    cout<<" total shipping cost: "<<total_shipping_cost<<endl;
    cout<<" thank you ";
    return 0;
}

int main()
{
    int weight, distance;
    string shippingType;
    cout<<"Enter item weight: ";
    cin>>weight;
    cout<<"Enter item distance: ";
    cin>>distance;
    cout<<"Enter shipping type: ";
    cin>>shippingType;
    int total_shipping_cost = shippingCost(weight, distance, shippingType);
    shipping_receipt(weight, distance, shippingType, total_shipping_cost);
    return 0;

}