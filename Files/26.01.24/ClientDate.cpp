//
//  ClientDate.cpp
//  26.01.24
//
//  Created by Ralitsa Toneva on 26.01.24.
//

#include "ClientDate.hpp"

// default ClientData constructor
ClientData::ClientData( int accountNumberValue,
   std::string lastNameValue, std::string firstNameValue, double balanceValue )
{
   setAccountNumber( accountNumberValue );
   setLastName( lastNameValue );
   setFirstName( firstNameValue );
   setBalance( balanceValue );
} // end ClientData constructor

// get account-number value
int ClientData::getAccountNumber() const
{
   return accountNumber;
} // end function getAccountNumber

// set account-number value
void ClientData::setAccountNumber( int accountNumberValue )
{
   accountNumber = accountNumberValue; // should validate
} // end function setAccountNumber

// get last-name value
std::string ClientData::getLastName() const
{
   return lastName;
} // end function getLastName

// set last-name value
void ClientData::setLastName( std::string lastNameString )
{
   // copy at most 15 characters from string to lastName
   const char *lastNameValue = lastNameString.data();
   int length = lastNameString.size();
   length = ( length < 15 ? length : 14 );
   std::strncpy( lastName, lastNameValue, length );
   lastName[ length ] = '\0'; // append null character to lastName
} // end function setLastName

// get first-name value
std::string ClientData::getFirstName() const
{
   return firstName;
} // end function getFirstName

// set first-name value
void ClientData::setFirstName( std::string firstNameString )
{
   // copy at most 10 characters from string to firstName
   const char *firstNameValue = firstNameString.data();
   int length = firstNameString.size();
   length = ( length < 10 ? length : 9 );
   std::strncpy( firstName, firstNameValue, length );
   firstName[ length ] = '\0'; // append null character to firstName
} // end function setFirstName

// get balance value
double ClientData::getBalance() const
{
   return balance;
} // end function getBalance

// set balance value
void ClientData::setBalance( double balanceValue )
{
   balance = balanceValue;
} // end function setBalance

