#include <iostream>
using namespace std;

class Hospital
{
private: // Private Scope
   int p_bill;
   static int total_bill;
   int p_facilites;

   string p_name;
   string p_mob;
   string p_city;

public: // Public Scope
   Hospital()
   {
      p_bill = 0;
      p_facilites = 0;
   }
   void get()
   { // Function Get() #Input Basic Patient Details
      cout << "-----------------------" << endl;
      cout << "Add New Patient" << endl;
      cout << "Name: ";
      cin >> p_name;
      cout << "City: ";
      cin >> p_city;
      cout << "Contact: ";
      cin >> p_mob;
      cout << "\n"
           << endl;
   }
   void getFacilities()
   {
      cout << "-----------------------" << endl;
      cout << "S.no\tName\tPrice\n"
           << endl;
      cout << "1\tECG\tRs 500" << endl;
      cout << "2\tNormal Check\tRs 100" << endl;
      cout << "3\tMed checkup\tRs 100" << endl;
      cout << "4\tBp Check\tRs 100" << endl;
      cout << "5\tLab Test\tRs 100" << endl;
      cout << "6\tX-Ray\tRs 100" << endl;
   }
   void display()
   {
      cout << "-----------------------" << endl;
      cout << "Name: " << p_name << endl;
      cout << "Ciy: " << p_city << endl;
      cout << "Contact: " << p_mob << endl;
      cout << "Facilites Availed: " << p_facilites << endl;
      cout << "Bill: " << p_bill << endl;
   }
   void addp_facility(int amt)
   {
      p_bill += amt;
      total_bill += amt;
      p_facilites++;
   }
   string getp_name()
   {
      return p_name;
   }
   string getp_city()
   {
      return p_city;
   }
   string getp_mob()
   {
      return p_mob;
   }
   int getp_bill()
   {
      return p_bill;
   }
   int getp_facilites()
   {
      return p_facilites;
   }
   static int getTotalBill()
   {
      return total_bill;
   }
};

int Hospital::total_bill = 0;

int main()
{

   int total_patient;
   int select_p;
   int count = 0;
   cout << "Welcome To ABC Hospital" << endl;
   cout << "How Many Patients you want to add: ";
   cin >> total_patient;

   Hospital p_obj[total_patient];

   for (int i = 0; i < total_patient; i++)
   {
      p_obj[i].get();
   }

   int ch = 0;
   do
   {
      cout << "0. Exit" << endl;
      cout << "1. Select Patient" << endl;
      cout << "2. Count Patients Having 3 Faciliets" << endl;
      cout << "3. Get Patient Data with Bill > 100" << endl;
      cout << "4. Total Amt of the Day" << endl;
      cin >> ch;
      switch (ch)
      {
      case 1: // Select Patient
         cout << "S.no\tName\tCity" << endl;
         for (int i = 0; i < total_patient; i++)
         {
            cout << i + 1 << "\t" << p_obj[i].getp_name() << "\t" << p_obj[i].getp_city() << endl;
         }
         cin >> select_p;
         select_p--;
         cout << "1. Avail Facility" << endl;
         cout << "2. Display Detail" << endl;
         cout << "3. Get Bill" << endl;
         cin >> ch;
         switch (ch)
         {
         case 1: // Avail Facility
            cout << "Select A Facility to avail" << endl;
            p_obj[select_p].getFacilities();
            cin >> ch;
            switch (ch)
            {
            case 1: // ECG 500
               p_obj[select_p].addp_facility(500);
               break;
            case 2: // Normal Check 100
               p_obj[select_p].addp_facility(100);
               break;
            case 3: // Med 100
               p_obj[select_p].addp_facility(100);
               break;
            case 4: // Bp 100
               p_obj[select_p].addp_facility(100);
               break;
            case 5: // lab 100
               p_obj[select_p].addp_facility(100);
               break;
            case 6: // xry 100
               p_obj[select_p].addp_facility(100);
               break;
            }
            break;
         case 2: //Display Detail
            p_obj[select_p].display();
            break;
         case 3: // Get Bill
            cout << "Total Billed Amt: " << p_obj[select_p].getp_bill();
            break;
         }
         break;
      case 2: // Count 3 Faciliets
         count = 0;
         for (int i = 0; i < total_patient; i++)
         {
            if (p_obj[i].getp_facilites() == 3)
            {
               cout << p_obj[i].getp_name() << "\t" << p_obj[i].getp_bill() << endl;
               count++;
            }
         }
         cout << "Total --> " << count << endl;
         break;
      case 3: // bill > 100
         count = 0;
         for (int i = 0; i < total_patient; i++)
         {
            if (p_obj[i].getp_bill() > 100 && p_obj[i].getp_city() == "chd")
            {
               cout << i << "\t" << p_obj[i].getp_name() << "\t" << p_obj[i].getp_bill() << endl;
               count++;
            }
         }
         cout << "Total --> " << count << endl;
         break;
      case 4: //total Bill Amt
         cout << "Total Bill Amount: " << Hospital::getTotalBill() << endl;
         break;
      }
   } while (ch != 0);
   return 0;
}