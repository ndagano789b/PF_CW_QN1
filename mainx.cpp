#include <iostream>

using namespace std;

int main()
{
//declarations of variables
int id, password, savedID, savedPass;
    char choice, chice2;
    double balance = 0;/*here i initialize my balance because it is impossible
	to create an account that has something already but also the initiale value of balance can't be null*/

    cout << "Hi! Welcome to the ATM Machine! \n";/*this one is designed to be seen just once in the program that is why it
	is out of the do while loop*/
do {//do all these things below first and keep repeating them unitl you meet he exit condition
        if(choice!='c'){cout << "Please select an option from the menu below: \n";}
        cout << "l -> Login \n";
        cout << "c -> Create New Account \n";
        cout << "q -> Quit\n";
        cin >> choice;/*here i allow the user to choose among the choices
		 below but note that this will not work if do not use switch statement*/
switch (choice) {/*now the choice that will choose will display some result, for example for the case c it will show you
the messages that follow below and it is the same to case l and q, briefly now we can choose and see result*/
case 'c':
                cout << "Please enter your user id: ";
                cin >> savedID;
                cout << "Please enter your password: ";
                cin >> savedPass;
                cout << "Thank You! Your account has been created!\n";


                break;

case 'q':
                cout << "Thanks for visiting!";
                break;

case 'l':

                cout << "Please enter your user id: ";
                cin >> id;
                cout << "Please enter your password: ";
                cin >> password;

                if (id == savedID && password == savedPass) {
                	/*if the id is the same as the id stored while creating the \
					account and the password is the same with stored password do this*/
                    cout << "Access Granted! \n";

                    while (chice2 != 'q') {//here we are showing the exit condition for the next switch statement
                        cout << "d -> Deposit Money \n";
                        cout << "w -> Withdraw Money \n";
                        cout << "r -> Request Balance\n";
                        cout << "q -> Quit \n";
                        cin >> chice2;

                        switch (chice2) {
                        	//legend: char d refer to deposit, w refer to withdraw and r refer to request the balance
                            case 'd':
                                int deposit;
                                cout << "Amount of deposit: $ ";
                                cin >> deposit;
                                balance += deposit;
                                break;

                            case 'w':
                                double withdraw;
                                cout << "Amount of withdrawal: $ ";
                                cin >> withdraw;

                                if (withdraw <= balance) {//if statement for verifying if balance is greater than withdraw
                                    balance -= withdraw;
                                    cout << "";
                                } else {
                                    cout << "Your account is too low! \n";//if withdraw is greater than balance display this
                                }
                                break;

                            case 'r':
                            	cout << "Your balance is $" << balance << "\n";//r will show you ur current balance
                                break;

                            case 'q':
                                cout << "\n";
                                break;

                            default:
                                cout << "Invalid choice! \n";// display invalid if none of these choices above were choosen

                                break;
                        }
                    }//the first switch end by here but it has another switch statement inside it for transactions
                } else {
                    cout << "*** LOGIN FAILED! *** \n";/*if id is different to stored id and password different
					to stored password just say login failed*/
                }
                break;

            default:
                cout << "Invalid choice! \n";/*this concerns the login and creation of account,
				when you choose another char than l or c or q*/
                break;
        }
    } while (choice != 'q');//exit condition for our do

    return 0;
}




