#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstdlib>
#include <string>
#include <limits>
#include <bits/stdc++.h>

using namespace std;

void appendToRegistrationFile(string s)
{
   fstream my_file;
   my_file.open("registrationRecord.txt", ios::app);
   if (!my_file)
   {
      cout << "File not created!";
   }
   else
   {
      cout << "..";
      s.erase(remove(s.begin(), s.end(), ' '), s.end()); // Removes spaces from a string
      my_file << s << std::endl;
      my_file.close();
   }
}
string getRegistrationFromFile(string phoneNumber)
{

   string regCode = " ";
   string pNumber;
   // Read from the text file
   ifstream MyReadFile("registrationRecord.txt");
   // Use a while loop together with the getline() function to read the file line by line
   while (getline(MyReadFile, pNumber))
   {
      if (pNumber == phoneNumber)
      {
         getline(MyReadFile, regCode);

         break;
      }
   }

   // Close the file
   MyReadFile.close();
   return regCode;
}

bool isRegistrationPresent(string regno)
{

   string regCode = " ";
   bool isPresent = false;
   // Read from the text file
   ifstream MyReadFile("registrationRecord.txt");
   // Use a while loop together with the getline() function to read the file line by line
   while (getline(MyReadFile, regCode))
   {
      if (regCode == regno)
      {
         isPresent = true;

         break;
      }
   }

   // Close the file
   MyReadFile.close();
   return isPresent;
}

string randomRegistrationNumber()
{ // This function generates a random 6 digit number
   srand((unsigned)time(0));
   int random_integer;
   int lowest = 100000, highest = 999999;
   int range = (highest - lowest) + 1;

   random_integer = lowest + int(range * rand() / (RAND_MAX + 1.0));
   return to_string(random_integer);
}
void appendToAppointmentFile(string s)
{

   fstream my_file;
   my_file.open("appointmentRecord.txt", ios::app);
   if (!my_file)
   {
      cout << "File not created!";
   }
   else
   {
      cout << "..";
      remove(s.begin(), s.end(), ' '); // Removes spaces from a string
      my_file << s << std::endl;
      my_file.close();
   }
}
bool isAppointmnetPresent(string regno)
{

   string regCode;
   bool isPresent = false;
   // Read from the text file
   ifstream MyReadFile("appointmentRecord.txt");
   // Use a while loop together with the getline() function to read the file line by line
   while (getline(MyReadFile, regCode))
   {
      if (regCode == regno)
      {
         isPresent = true;
         break;
      }
   }
   // Close the file
   MyReadFile.close();
   return isPresent;
}
int getSlotCount(string slot)
{

   string slotToCheck = slot;
   int count = 0;
   string Slot;
   // Read from the text file
   ifstream MyReadFile("appointmentRecord.txt");
   // Use a while loop together with the getline() function to read the file line by line
   while (getline(MyReadFile, Slot))
   {
      if (slotToCheck == Slot)
      {
         count = count + 1;
      }
   }
   // Close the file
   MyReadFile.close();
   return count;
}

void setApplointmentFromFile(string regno, string slotUpgrade)
{

   string regCode;
   string slot;
   // Read from the text file
   ifstream filein("appointmentRecord.txt");//File to read from
   ofstream fileout("fileout.txt"); //Temporary file
   string strTemp;
    
   while (getline(filein, regCode))
   {  
      strTemp = regCode;
      strTemp += "\n";
      fileout << strTemp;   

      if (regCode == regno)
      {
         getline(filein, slot);
         strTemp = slotUpgrade;
         strTemp += "\n";
         fileout << strTemp; 
      }
     
   }
   // Close the file
    
   filein.close();
   fileout.close();
   remove("appointmentRecord.txt");
   rename("fileout.txt", "appointmentRecord.txt");
}
void appointmentModify()
{
   cout << "Welcome to COVID Vaccination Appointment Modification Portal." << endl
        << "**Please Note slot change is conditional to availabilty"
        << endl
        << "Please Enter your Registration number : " << endl;
   string regno;
   cout << "Registration Number : ";
   cin >> regno;
   int slot1_max = 60;
   int slot2_max = 60;
   if (isRegistrationPresent(regno))
   {
      if (isAppointmnetPresent(regno))
      {
         cout << "You can select Slot 1 or slot 2 based on availability below"
              << endl
              << "Slot Details:"
              << endl
              << "Slot 1 - 07-07-2021 from 9:00 AM to 12:00 PM"
              << endl
              << "Slot 2 - 08-07-2021 from 9:00 AM to 12:00 PM"
              << endl;
         cout << "Slot Availabiltiy:"
              << endl
              << "Slot 1 " << slot1_max - getSlotCount("slot1") << endl
              << "Slot 2 " << slot2_max - getSlotCount("slot2") << endl
              << endl;
         int input = 0;
         cout << "Press 1 for slot 1 and Press 2 for slot 2";
         while (true)
         {
            try
            {
               cin >> input;
               if (input == 1)
               {
                  if (slot1_max - getSlotCount("slot1") != 0)
                  {
                     setApplointmentFromFile(regno, "slot1");
                     cout << "Appointment Modified to slot 1 Successfull";
                     return;
                  }
                  else
                  {
                     cout << "Slot full. Try again after some time";
                     return;
                  }
               }
               else if (input == 2)
               {
                  if (slot2_max - getSlotCount("slot2") != 0)
                  {
                     setApplointmentFromFile(regno, "slot2");
                     cout << "Appointment Modified to slot 2 Successfull";
                     return;
                  }
                  else
                  {
                     cout << "Slot full. Try again after some time";
                     return;
                  }
               }
               else
               {
                  cout << "Wrong Input. Try again";
               }
            }
            catch (exception e)
            {
               cout << "Wrong Input. Try again";
            }
         }
      }
      else
      {
         cout << "No Appointment Found"
              << endl
              << "Kindly book an appointment first or check your registration number";
         return;
      }
   }
   else
   {
      cout << "No Registration Found"
           << endl
           << "Kindly Register yourself first or check your registration number";
      return;
   }
}
void appointment()
{
   cout << "Welcome to COVID Vaccination Appointment Portal." << endl
        << "Please Enter your Registration number : " << endl;
   string regno;
   cout << "Registration Number : ";
   cin >> regno;
   int slot1_max = 60;
   int slot2_max = 60;
   if (isRegistrationPresent(regno))
   {
      if (!isAppointmnetPresent(regno))
      {
         cout << "You can select Slot 1 or slot 2 based on availability below"
              << endl
              << "Slot Details:"
              << endl
              << "Slot 1 - 07-07-2021 from 9:00 AM to 12:00 PM"
              << endl
              << "Slot 2 - 08-07-2021 from 9:00 AM to 12:00 PM"
              << endl;
         cout << "Slot Availabiltiy:"
              << endl
              << "Slot 1 " << slot1_max - getSlotCount("slot1") << endl
              << "Slot 2 " << slot2_max - getSlotCount("slot2") << endl
              << endl;
         int input = 0;
         cout << "Press 1 for slot 1 and Press 2 for slot 2";
         while (true)
         {
            try
            {
               cin >> input;
               if (input == 1)
               {
                  if (slot1_max - getSlotCount("slot1") != 0)
                  {
                     appendToAppointmentFile(regno);
                     appendToAppointmentFile("slot1");
                     cout << "Appointment Successfull";
                     return;
                  }
                  else
                  {
                     cout << "Slot full. Try again after some time";
                     return;
                  }
               }
               else if (input == 2)
               {
                  if (slot2_max - getSlotCount("slot2") != 0)
                  {

                     appendToAppointmentFile(regno);
                     appendToAppointmentFile("slot2");
                     cout << "Appointment Successfull";
                     return;
                  }
                  else
                  {
                     cout << "Slot full. Try again after some time";
                     return;
                  }
               }
               else
               {
                  cout << "Wrong Input. Try again";
               }
            }
            catch (exception e)
            {
               cout << "Wrong Input. Try again";
            }
         }
      }
      else
      {
         cout << "You are already Registered"
              << endl
              << "Kindly modify your appoinrmnet if required";
         return;
      }
   }
   else
   {
      cout << "No Registration Found"
           << endl
           << "Kindly Register yourself first or check your registration number";
      return;
   }
}
void registration()
{
   cout << "Welcome to COVID Vaccination registeration Portal." << endl
        << "Please Enter your details" << endl;
   char name[60];
   string phoneNumber;
   cout << "Press Enter to Continue";
   cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
   cout << "Name : ";
   cin.getline(name, 60);
   cout << "Press Enter to Continue";
   cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
   while (true)
   {
      cout << "Phone Number : ";
      cin >> phoneNumber;
      if (phoneNumber.length() != 10)
      {
         cout << "Phone Number should be of 10 digits."
              << endl
              << "Please enter a valid phone number;";
      }
      else
      {
         break;
      }
   }
   if (!isRegistrationPresent(phoneNumber))
   {
      appendToRegistrationFile(name);
      appendToRegistrationFile(phoneNumber);
      appendToRegistrationFile(randomRegistrationNumber());

      cout << endl
           << "Registration Successfull"
           << endl
           << randomRegistrationNumber() << " is you registration number. Please store it for future referance."
           << endl;
   }
   else
   {
      cout << "User Already Registered";
   }
   int input = 0;
   cout << endl
        << "To book an applointmnet for vaccination press 1. To go back to main portal press 2" << endl;
   while (true)
   {
      try
      {
         cin >> input;
         if (input == 1)
         {
            appointment();
            break;
         }
         else if (input == 2)
         {
            cout << endl
                 << "Thank you for Registeration. To book a slot. Re-Execute the program and select 'Book Appointmnet' " << endl;
            break;
         }
         else
         {
            cout << "Wrong Input. Try again";
         }
      }
      catch (exception e)
      {
         cout << "Wrong Input. Try again";
      }
   }
}

int main()
{
   cout << endl
        << "------------" << endl
        << "Welcome to COVID Vaccination portal" << endl;

   while (true)
   {
      cout << "Press 1 to register yourself" << endl
           << "Press 2 to book an applointment for vaccination shot" << endl
           << "Press 3 to modify your booking" << endl
           << "Press 4 to know your ID" << endl
           << "Press 5 to exit"
           << endl;

      int input = 0;
      try
      {
         cin >> input;
         if (input == 1)
         {
            registration();
            cout << endl
                 << "To Exist press 0, To continue press 1";
            cin >> input;
         }
         else if (input == 2)
         {
            appointment();
            cout << endl
                 << "To Exist press 0, To continue press 1";
            cin >> input;
         }
         else if (input == 3)
         {
            appointmentModify();
            cout << endl
                 << "To Exist press 0, To continue press 1";
            cin >> input;
         }
         else if (input == 4)
         {
            cout << endl
                 << "Enter you phoneNumber";
            string phoneNumber;
            cin >> phoneNumber;
            if (getRegistrationFromFile(phoneNumber) != " ")
            {
               cout << "Your Registration Number is : " << getRegistrationFromFile(phoneNumber);
            }
            else
            {
               cout << "No Record Found";
            }
         }
         else if (input == 5)
         {
            cout << "Thank you for using the portal"
                 << endl
                 << "Stay home, Be safe";
            break;
         }
         if (input == 0)
         {
            cout << "Thank you for using the portal"
                 << endl
                 << "Stay home, Be safe";
            break;
         }
         else
         {
            cout << endl
                 << "*--------*"
                 << endl;
         }
      }
      catch (exception e)
      {
         cout << "Wrong Input. Try again";
      }
   }
   return 0;
}