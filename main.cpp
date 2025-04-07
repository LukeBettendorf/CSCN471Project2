/*
The cost to become a member of a fitness center is as follows:
	(a) the senior citizens monthly membership discount is 30%;
	(b) the discount for chosing to prepay the annual membership cost is 15%; and
	(c) if more than five personal training sessions are bought and paid for, the discount on each session is 20% (the discounts in a and b above do not apply to personal
	training).


Write a menu-driven program that determines the annual cost of a new membership. Your program must contain
	a function that displays the general information about the fitness center and its charges,
	a function to get all of the necessary information to determine the membership cost, and (use pass-by-reference parameters)
	a function to determine the membership cost.


Use appropriate parameters to pass information in and out of a function. (Do not use any global variables.)


Malik, Ch 6, Programming Exercise 25 (page 463)


*/


//Include statements
#include <iostream>
#include <string>


using namespace std;


//Global declarations: Constants and type definitions only -- no variables
const float MONTHLY_MEMBERSHIP_RATE = 25.00;
const float PERSONAL_SESSION_RATE = 50.00;




//Function prototypes
void wait();


int main()
{
    //In cout statement below substitute your name and lab number
    cout << "Your name -- Lab Number" << endl << endl;


    //Variable declarations


    //Program logic


    //Closing program statements
    wait(); //Halts the program until the user is ready to finish
    return 0;
}


//Function Definitions
void wait()
{
    //The following if-statement checks to see how many characters are in cin's buffer
    //If the buffer has characters in it, the clear and ignore methods get rid of them.
    if (cin.rdbuf()->in_avail() > 0) //If the buffer is empty skip clear and ignore
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); //Clear the input buffer
    }
    cout << "Press the Enter key to continue ... ";
    cin.get();
}
