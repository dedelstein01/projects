#include <iostream>
using namespace std;

      int main () {
          int a, c;
          double trans, draw, deposit, save = 0, chk = 0;
          do {
          system("cls");
          system("color 70");
          cout << "\t\tWelcome to Daniel's ATM Program\n\n";
          cout << "Please select one: \n";
          cout << "1 - Account Info\n";
          cout << "2 - Deposit\n";
          cout << "3 - Withdraw\n";
          cout << "4 - Transfer\n";
          cout << "5 - Exit\n\n";
          cout << "Please make your selection: ";
          cin >> a;
          
           
          switch (a) {
                 
                 case 1:
                      {
                 system("cls");
                 cout << "Here is your account information: \n\n";
                     cout << "Checking Account Balance:\t$" << chk << endl;
                     cout << "Savings Account Balance:\t$" << save << endl << endl;
                     system("pause"); 
                break;
                      }
                
              case 2:
                {
                system("cls");
                cout << "Choose which account you would like to deposit to: \n\n";
                      cout << "1 - Checking\n";
                      cout << "2 - Savings\n\n";
                      cout << "Your selection: ";
                      cin >> c;
               if (c == 1) {
               cout << "How much would you like to deposit into checking?: $";
               cin >> deposit;
               chk = chk + deposit;
               cout <<"\nYour New Balance is: $" << chk << endl << endl;
               system("pause");
                     }          
               if (c == 2) {
               cout << "How much would you like to deposit in savings?: $";
               cin >> deposit;
               save = save + deposit;
               cout << "\nYour new balance is: $" << save << endl << endl;
               system("pause");
                    }
               break;
               }
               
               case 3:
               {
               system("cls");
               cout << "Choose which account you would like to withdraw from: \n\n";
                      cout << "1 - Checking\n";
                      cout << "2 - Savings\n\n";
                       cout << "Your selection: ";
                      cin >> c;
               if (c == 1){{
               cout << "How much would you like to withdraw from checking?: $";
               cin >> draw;
                   } 
                          
                   if (draw > chk){
                       cout << "You don't have enough money.. sorry:(\n\n";
                       system("pause");
                               }    
                                  
                       else   if (draw < chk){
                            chk = chk - draw;
                            cout << "Take your g-d damn money\n";
                            cout << "Your new balance is: $" << chk << endl << endl;
                            system("pause");
                                 }
                            }                           
                            
                   if (c == 2) {{ 
                        cout << "How much would you like to withdraw from savings?: $";
                        cin >> draw;
                   } 
                   
                          
                   if (draw > save){
                       cout << "You don't have enough money.. sorry:(\n\n";
                       system("pause");
                       
                            }      
                       else   if (draw < save){
                            save = save - draw;  
                            cout << "Take your g-d damn money\n";
                            cout << "Your new balance is: $" << save << endl << endl;
                            system("pause");
                                     }
                                     }
               break;
               }
               
               case 4:
                    {
                    system("cls");
               cout << "Choose which account you would like to transfer to: \n\n";
                      cout << "1 - Checking\n";
                      cout << "2 - Savings\n\n";
                      cout << "Your selection: ";
                      cin >> c;
               if (c == 1){
               cout << "How much would you like to transfer from savings?: $";
               cin >> trans;
               if (save > trans){
                        chk = chk + trans;
                        save = save - trans;
                        cout << "Thank you, your new balances are as follows: \n\n";
                        cout << "Checking account balance: $" << chk << endl;
                        cout << "Savings account balance: $" << save << endl << endl;
                        system("pause");
                        }
               else if (save < trans){
                        cout << "Sorry, you don't have enough money in your savings account to transfer.\n\n";
                        system("pause");
                             }
                             
                        }
               if (c == 2){
               cout << "How much would you like to transfer from checking?: $";
               cin >> trans;
               if (chk > trans){
                        chk = chk - trans;
                        save = save + trans;
                        cout << "Thank you, your new balances are as follows: \n\n";
                        cout << "Checking account balance: $" << chk << endl;
                        cout << "Savings account balance: $" << save << endl << endl;
                        system("pause");
                        }
               else if (chk < trans){
                        cout << "\nSorry, you don't have enough money in your checking account to transfer.\n\n";
                        system("pause");
                             }
                             
                        }
                    break;                 
                    }
                    
              case 5:
                   {
                  cout << "\nThank you for using my program. Goodbye.\n\n"; 
                    break;                        
                   }   
            
              default:
                 {
              cout << "Wrong Input!";
              break;
                 }
              }
              }
                 
            while (a != 5);  
                
          system("Pause");
          return 0;
          }
