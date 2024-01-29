//
//  ClientDate.hpp
//  26.01.24
//
//  Created by Ralitsa Toneva on 26.01.24.
//

#ifndef ClientDate_hpp
#define ClientDate_hpp

#include <stdio.h>

#include <string>
#include <string>

class ClientData
{
public:
   // default ClientData constructor
   ClientData( int = 0, std::string = "", std::string = "", double = 0.0 );

   // accessor functions for accountNumber
   void setAccountNumber( int );
   int getAccountNumber() const;

   // accessor functions for lastName
   void setLastName( std::string );
   std::string getLastName() const;

   // accessor functions for firstName
   void setFirstName( std::string );
   std::string getFirstName() const;

   // accessor functions for balance
   void setBalance( double );
   double getBalance() const;
private:
   int accountNumber;
   char lastName[15];
   char firstName[10];
   double balance;
}; // end class ClientData

#endif /* ClientDate_hpp */
