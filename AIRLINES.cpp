#include <iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int dom=1000; //inter variables
int inter=5000;

class domesticbooking //class  for domestic booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7]; //protected members
    int date;
    int choice,destination;
public://public member functions
    void domesticpnr()
    {
        dom++; // increment variable
        pnr=dom;
    }
   void domestic_details() // function declaration and definition for domestic journey
    {
        cout<<"....ENTER THE DATE OF FLIGHT...."<<endl;
		cout<<"ENTER IN THIS FORMAT(DDMMYYYY) => "<<endl;
		cout<<"_______________________________________________"<<endl;
		cin>>date;
        cout << "\n1.MUMBAI \n2.DELHI \n3.CHENNAI\n4.BANGLORE\n5.KOLKATA\n6.AHMEDABAD"<<endl;
        cout<< ":::SELECT YOUR DESTINATION:::"<<endl;
        cin>>destination;
		
        if(destination==1)//condition
        {
         cout<<        "___________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!__________________"<<endl;
	     cout<<"\n1.Spice Jet =>   \t\tDeparture:8:00pm  \t\t Price:2000"<<endl;
		 cout<<"\n2.Air India =>   \t\tDeparture:4:00pm  \t\tPrice:2500"<<endl;
		 cout<<"\n3.Indigo =>      \t\tDeparture:10:00am \t\tPrice:1800"<<endl;
		 cout<<"_____________________________________________________________________________"<<endl<<endl;
		}

        else if(destination==2)//condition
        {
            cout<<     "______________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!_____________________"<<endl;
			cout<<"\n1.Spice Jet => \t\tDeparture:9:00pm \tPrice:8000"<<endl;
			cout<<"\n2.Air India => \t\tDeparture:4:00pm \tPrice:7800"<<endl;
			cout<<"\n3.Indigo =>    \t\tDeparture:8:00am \tPrice:8200"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
			
        }

        else if(destination==3)//condition
        {
            cout<<     "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________"<<endl;
			cout<<"\n1.Spice Jet => \t\tDeparture:8:30pm  \tPrice:5000"<<endl;
			cout<<"\n2.Air India => \t\tDeparture:4:00pm  \tPrice:5500"<<endl;
			cout<<"\n3.Indigo =>    \t\tDeparture:9:30am  \tPrice:5200"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }

        else if(destination==4)//condition
        {
			cout<<    "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!_________________"<<endl;
			cout<<"\n1.Spice Jet => \t\tDeparture:7:30am   \tPrice:4000"<<endl;
			cout<<"\n2.Air India => \t\tDeparture:10:30pm  \tPrice:3800"<<endl;
			cout<<"\n3.Indigo =>    \t\tDeparture:10:00am  \tPrice:4200"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }
		 else if(destination==5)//condition
        {
			cout<<    "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________"<<endl;
			cout<<"\n1.Spice Jet => \t\tDeparture:7:30am    \tPrice:5000"<<endl;
			cout<<"\n2.Air India => \t\tDeparture:10:30pm   \tPrice:5200"<<endl;
			cout<<"\n3.Indigo =>    \t\tDeparture:10:00am   \tPrice:5100"<<endl;
			cout<<"_________________________________________________________________________"<<endl<<endl;
        }
		 else if(destination==6)//condition
        {
			cout<<    "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________"<<endl;	
			cout<<"\n1.Spice Jet => \t\tDeparture:7:30am   \tPrice:3700"<<endl;
			cout<<"\n2.Air India => \t\tDeparture:10:30pm  \tPrice:3800"<<endl;
			cout<<"\n3.Indigo =>    \t\tDeparture:10:00am  \tPrice:3750"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
		 }
        
      
        else
        {
            cout <<    "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" << endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
          
        }

    }
	
		void select_flightd()
		{
		 cout << "\n****------SELECT YOUR CHOICE------****" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\n~~~~YOUR SELECTED FLIGHT~~~~"<<endl;
                cout << "===> Spice jet <==="<<endl;
                strcpy(f_d,"Spice jet");//copy to string
				cout << "**** DEPARTURE TIME =} 08:00 ****"<<endl;
				strcpy(tojd,"Departure:8:00"); //copy to string
             
		  break;
		  case 2://condition
                cout << "\n~~~~YOUR SELECTED FLIGHT~~~~"<<endl;
                cout << "===> Air India <==="<<endl;
                strcpy(f_d,"Air India");//copy to string
                cout << "**** DEPARTURE TIME =} 14:00 ****"<<endl;
				strcpy(tojd,"Departure:14:00");//copy to string
              
				break;
		case 3://condition
                cout << "\n~~~~YOUR SELECTED FLIGHT~~~~"<<endl;
                cout << "===> Indigo <===" << endl;
                strcpy(f_d,"Air India");//copy to string
                cout << "**** DEPARTURE TIME =} 19:00 ****" << endl;
				strcpy(tojd,"Departure:19:00");//copy to string
              
		  break;
		  default://condition
                cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" << endl;
                
		}
		}
		};
 
class internationalbooking//class for international booking
{
protected://protected members
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    int date;
    int destination,choice;
public://public member functions
    void i_pnr()
    {
        inter++;//increment variable
        pnri=inter;
    }
   
   void international_details()// function declaration and definition for journey domestic_detailss
    {
        cout << "....ENTER THE DATE OF FLIGHT...."<<endl;
	    cout<< "ENTER IN THIS FORMAT(DDMMYYYY) => "<<endl;
		cout<<"_______________________________________________"<<endl;
        cin >>date;
        cout << "\n1.LONDON \n2.DUBAI \n3.SINGAPORE \n4.NEWYORK \n5.AUSTRALIA " << endl;
        cout << "\n:::SELECT YOUR DESTINATION:::" ;
        cin >> destination;
        cout << "*****Flights Found*****" << endl << endl;
        if(destination==1)//condition
        {
            cout << "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________"<<endl;
            cout << "1.Vistara =>     \t10:00\t\t14:05 \tRs.25000"<<endl;
            cout << "2.Air India(2) =>\t14:00\t\t18:05 \tRs.21500"<<endl;
            cout << "3.Emirates =>    \t18:00\t\t22:05 \tRs.24000"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }

        else if(destination==2)//condition
        {
            cout << "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________"<<endl;
            cout << "\n1.Vistara =>  \t10:00\t\t14:05 \tRs.25500"<<endl;
            cout << "\n2.Air India =>\t14:00\t\t18:05 \tRs.21300"<<endl;
            cout << "\n3.Emirates => \t18:00\t\t22:05 \tRs.24650"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }

        else if(destination==3)//condition
        {
            cout << "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________";
            cout << "\n1.Vistara => \t10:00\t\t14:05 \tRs.52500"<<endl;
            cout << "\n2.Air India=>\t14:00\t\t18:05 \tRs.59420"<<endl;
            cout << "\n3.Emirates=> \t18:00\t\t22:05 \tRs.64892"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }

        else if(destination==4)//condition
        {
            cout << "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________";
            cout << "\n1.Vistara =>\t10:00\t\t14:05\t\tRs.17800"<<endl;
            cout << "\n2.Air India\t14:00\t\t18:05\t\tRs.14900"<<endl;
            cout << "\n3.Emirates\t18:00\t\t22:05\t\tRs.18700"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }
		 else if(destination==5)//condition
        {
            cout << "_________________!!!!!!!!!!!AVAILABLE FLIGHTS!!!!!!!!!!________________";
            cout << "\n1.Vistara =>  \t10:00\t\t14:05 \tRs.17800"<<endl;
            cout << "\n2.Air India =>\t14:00\t\t18:05 \tRs.14900"<<endl;
            cout << "\n3.Emirates => \t18:00\t\t22:05 \tRs.18700"<<endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
        }

    
        else//condition
            {
            cout <<    "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" << endl;
			cout<<"__________________________________________________________________________"<<endl<<endl;
          
           
        }

    }

  void select_flighti()//function declaration and definition for selecting flight
    {
        cout << " \n****------SELECT YOUR CHOICE------**** " << endl;
        cin >> choice;
       
			switch(choice) // switch case
        {
          
                
        case 1://condition
            cout << "\n~~~~YOUR SELECTED FLIGHT~~~~" <<endl;
            cout << " ===> Vistara <===" << endl;
            strcpy(f_i,"Vistara");//copy to string
            cout << "**** DEPARTURE TIME =} 10:00" << endl;
            strcpy(tojdi,"10:00");//copy to string
            break;
        case 2://condition
               cout << "\n~~~~YOUR SELECTED FLIGHT~~~~" << endl;
               cout << "===> Air India <===" << endl;
               strcpy(f_i,"Air India");//copy to string
               cout << "**** DEPARTURE TIME =} 14:00" << endl;
               strcpy(tojdi,"14:00");//copy to string
                break;
        case 3://condition
            cout << "\n~~~~YOUR SELECTED FLIGHT~~~~" << endl;
            cout << "===> Emirates <===" << endl;
            strcpy(f_i,"Emirates");//copy to string
            cout << "**** DEPARTURE TIME =} 18:00" << endl;
            strcpy(tojdi,"18:00");//copy to string
            break;
        default://condition
            cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" << endl;
         
        }
    }
};


class passenger: public domesticbooking,public internationalbooking//class passenger publicly inherited from class d_booking and i_booking
{
protected://protected members
    char first_name[30],last_name[20],email[50],gen[10];
    int age;
    long long int contact_no;
public://public member functions
    void p_domestic_details(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        {  international_details();//function call
          select_flightd();//function call
        }
          else
          { domestic_details();//function call1353
             select_flighti();//function call
          }
       
    }
 
	
       void more_domestic_detailss()//to take more domestic_detailss of the passenger
       {
         cout << "\n\n\n-----DETAILS OF THE PASSENGER-----";
        cout << "\n\nFIRST NAME = ";
        cin >> first_name;
        cout << "LAST NAME = ";
        cin >> last_name;
		cout << "Gender = ";
        cin >> gen;
		cout << "AGE = ";
        cin >> age;
        cout << "Email Id = ";
        cin >> email;
        cout << "Contact number(10 digits)=> ";
        cin >>contact_no;
        cout << "\n\n!!!!!ENTERED DETAILS!!!!!\n"<<endl;
        cout << "Name=> " << first_name << " " << last_name << endl;
        cout << "Gender=> " << gen<< endl;      //displaying domestic_detailss
        cout << "Age=> " << age << endl;
        cout << "Email Id=> " << email << endl;
        cout << "Contact Number=> " <<contact_no<< endl;
    }


     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

     void disp()//function to display domestic_detailss for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << first_name << " " << last_name << endl;
         //cout<<"DOJ:"<<date<< endl;
         cout<<"Departure Time:" << tojd << endl;
         
     }

      void dispi()//function to display domestic_detailss for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << first_name << " " << last_name << endl;
         //cout<<"DOJ:"<<date<< endl;
         cout<<"Departure Time:" << tojdi << endl;
       
     }
};



class payment//class for payment
{
public://protected members
    int choice,bank,date,cvv,user_id;
	long long int card;
    char password[10];
	int exp_date;
public://public members functions
    void pay_domestic_details()//function declaration and definition for payment method
    {     cout << "\n\n\n[[[[PAYMENT OPTIONS]]]]\n";
        cout << "\n1.Debit Card \n2.Credit Card \n3.Net Banking";
        cout << "\n\nEnter your choice =>";
        cin >> choice;
        switch(choice)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.=>";
            cin >> card;
            cout << "\nEnter expiry date=>";
            cin >> exp_date;
            cout << "\nEnter CVV number =>";
            cin >> cvv;
            cout << "\n$$$$$$ Transacted Successfully $$$$$$\n";
			cout << "\n ^^^^^^THANK YOU^^^^^^\n";
            break;
        case 2://condition
            cout << "\nEnter card no.=>";
            cin >> card;
            cout << "\nEnter expiry date=>";
            cin >> exp_date;
            cout << "\nEnter CVV no.=>";
            cin >> cvv;
           cout << "\n$$$$$$ Transacted Successfully $$$$$$\n";
			cout << "\n ^^^^^^THANK YOU^^^^^^\n";
            break;
        case 3://condition
            cout << "Banks Available:\n \t1.State Bank Of India \t2.HDFC Bank\t3.Axis Bank\t4.ICICI\t5.Bank Of Baroda";
            cout << "\nSelect your bank=>";
            cin >> bank;
            cout << "\nYou have selected=> " << bank;
            cout << "\nEnter user id=>";
            cin >> user_id;
            cout << "\nEnter password=>";
            cin >> password;
           cout << "\n$$$$$$ Transacted Successfully $$$$$$\n";
			cout << "\n ^^^^^^THANK YOU^^^^^^\n";
            break;
        default://condition
            cout << "\n!!!!!!Wrong input entered!!!!!!\nTry again\n\n";
            break;
        }
    }

};

void createfile(passenger p)//file creation for domestic booking
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display domestic_detailss
         cout<<"<<endl\n!!!!!! YOUR TICKET IS GETTING CANCEL !!!!!!\n" << "$$$$$$ AMOUNT REFUNDED => Rs 1000 $$$$$$\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"!!!!!!TICKET NOT FOUND!!!!!!\n";
   fout.close();//closing file
   fin.close();//closing file
  // remove("domestic.txt");//deleting old file
   //rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {p.disp();//display domestic_detailss
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"!!!!!!TICKET NOT FOUND!!!!!!"<<endl;

}

void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else
     {
         p.dispi();//display domestic_detailss
         cout<<"<<endl\n!!!!!! YOUR TICKET IS GETTING CANCEL !!!!!!\n" << "$$$$$$ AMOUNT REFUNDED => Rs 1000 $$$$$$\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"\n!!!!!!TICKET NOT FOUND!!!!!!\n";
   fout.close();//closing file
   fin.close();//closing file
 //  remove("international.txt");//deleting old file
   //rename("international1.txt","international.txt");//renaming new file

}
void checkticketi(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {p.dispi();//display domestic_detailss
      cout<<"\nYOUR TICKET"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"!!!!!!TICKET NOT FOUND!!!!!!"<<endl;

}




int main()//main function
{

    class domesticbooking d1;//object for class d_booking
    class internationalbooking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n;//integer variables
    char input;//character variables
    do//do while loop
    {
    	
    cout << "      \n\n\t     ----||||| WELCOME TO PANC AIRLINES |||||----    "<<endl;
    cout <<"\t   ************************************************\n"<<endl;
    cout << "\t             WHERE DO YOU WANT TO EXPLORE?  "<<endl;
   
	cout << "\t         { EXPLORE AT AFFORDABLE PRICE $$$$$! }  "<<endl;
    cout <<"\t   *************************************************\n";
    
    cout << "\n\n\t\t\t1.Book Flight \n\t\t\t2.Cancel Flight \n\t\t\t3.Check Ticket \n\t\t\t4.To know about us \n\t\t\t5.Exit"<<endl;
    cout << "\n\t\t----PLEASE SELECT YOUR CHOICE---- ";
    cin >> ch;
      switch(ch)//witch case
      {
          case 1://condition
          
              cout << "\n\n1.DOMESTIC FLIGHTS" <<endl;
			  cout << "\n\n2.INTERNATIONAL FLIGHTS"<<endl<<endl;
			  cout <<"*************************************************\n";
			  cout << "\n:::SELECT YOUR OPTION::: "<<endl;
              cin >> ch1;
              switch(ch1)//inner switch case
              {
                   case 1://for booking domestic ticket
                        p1.domesticpnr();
                        p1.domestic_details();//function calls
						p1.select_flightd();
                       // p1.gender_check();
                        p1.more_domestic_detailss();
                        p2.pay_domestic_details();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                   case 2: //for booking international ticket
                           p1.p_domestic_details(1);//function calls
                           p1.i_pnr();
                           //p1.gender_check();
                           p1.more_domestic_detailss();
                           p2.pay_domestic_details();
                           p1.dispi();
                           createfilei(p1);//call to create file
                           break;
                   default://wrong input
                    cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" <<endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              
              cout << "\n\n1.DOMESTIC FLIGHTS"<<endl;
			  cout << "\n\n2.INTERNATIONAL FLIGHTS"<<endl<<endl;
			  cout <<"*************************************************\n";
			  cout << "\n:::SELECT YOUR OPTION::: "<<endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << " ENTER PNR No.: "<<endl;      
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << " ENTER PNR No.: "<<endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
               else
               {
                   cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3://for displaying booked ticket domestic_detailss
          
              cout << "\n\n1.DOMESTIC FLIGHTS"<<endl;
			  cout << "\n\n2.INTERNATIONAL FLIGHTS"<<endl<<endl;
			  cout <<"*************************************************\n";
			  cout << "\n:::SELECT YOUR OPTION::: "<<endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "ENTER PNR No.: "<<endl;
                  cin>>n;
                  checkticket(n);}//function call to display domestic ticket domestic_detailss
                  else if(ch1==2)
                  {  cout << " ENTER PNR No.: "<<endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket domestic_detailss
                  }
                   else
               {
                   cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			cout<<"********************************************************************************\n\n";
		  cout<<"\t\t!!!!!!!!CONTACT DETAILS!!!!!!!!\n"<<endl<<endl;
		  cout<<"Mobile No.:(+91)7020291699"<<endl;
		  cout<<"	   (+91)7020291658\n"<<endl;
		  cout<<"E-mail:checkin@panc.in\n"<<endl;
		  
		  cout<<"********************************************************************************\n\n";
		  cout<<"\t\t\t--------- OUR STORY ---------\n"<<endl;
		  cout<<"THE STORY OF PANC AIRLINES BEGAN IN 2000 WHEN WE BEAGN FLYING WITH A SINGLE\n";
		  cout<<"AIRLINER TO MUMBAI.AND TODAY,WE FLY WITH THE WORLD'S BIGGEST FLEETS OF BOEING-747s,\n";
		  cout<<"OFFERING OUR PASSENGERS WORLD CLASS SAFETY AND LUXURY WHILE THEY TRAVEL.\n";
		  cout<<"WE HAVE INSPIRED,AND WILL CONTINUE TO INSPIRE TRAVELERS AROUND THE domE WITH\n";
		  cout<<"OUR GROWING NETWORK OF WORLDWIDE DESTINATIONS,LEADING IN-FLIGHT ENTERTAINMENT,\n";
		  cout<<"CUISNE,IN LINE WITH THE FLAVOURS OF THE REGIONS WE TRAVEL TO.\n\n\n";
		  cout<<"********************************************************************************\n";
		 break;

			case 5:
				return 0;
				break;
          default://for wrong input
            cout << "\n!!!!!!WRONG INPUT!!!!!!\nTry again\n\n\n" << endl;
            break;
      }
	  cout<<"\n\n\n######DO YOU WISH TO CONTINUE:(Y/N)######" << endl;
    cin >> input;
  }while(input=='N' || input=='Y');//condition for do while loop
getch();
}







