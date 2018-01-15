/*
Lecture 1 - In Class Exercise 
Eggs are pacakged in cartons holding 1 dozen eggs and then boxes that store 5 cartons each. 
Given a number of eggs by the user, compute how many cartons and boxes the pacakger will need.
*/

#include <iostream>
#include <math.h>
using namespace std; 

int main() {
   // Declare a variable to store the number of eggs
   //  since we must declare a variable before storing to it
   int num_eggs;               

   // Output a prompt to ask for the number of eggs
   cout << "How many eggs do you have?" << endl;
   // Read in the number of eggs
   cin >> num_eggs;

   int num_cartons, num_boxes;

   // Write code to compute the number of boxes & cartons needed
   num_boxes = ceil(double(num_eggs)/(12*5));
   num_cartons = ceil(double(num_eggs)/5);

   cout << "You need " << num_boxes << " boxes and " << num_cartons << " cartons" << endl;
   return 0;
}