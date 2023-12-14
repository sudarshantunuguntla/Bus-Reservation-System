#include<iostream>
#include<string.h>
using namespace std;
int key2,count2=1,key3;
int no_customers=0,i,j;
int bza=0,guntur1=0,tenali1=0;
class customers
{
public:
    char registered_bus_name[99],registered_driver[99],registered_start_point[99];
    char registered_bus_stop[99];
    char registered_arrival_time[99];
    char name[99],id[99];
    void customer_input()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter ID number : ";
        cin>>id;
    }
    void display_registration()
    {
        cout<<"\n*****************************************************************"<<endl;
        cout<<"Name             : "<<name<<endl;
        cout<<"ID number        : "<<id<<endl;
        cout<<"Bus name         : "<<registered_bus_name<<endl;
        cout<<"driver name      : "<<registered_driver<<endl;
        cout<<"Starting point   : "<<registered_start_point<<endl;
        cout<<"bus stop         : "<<registered_bus_stop<<endl;
        cout<<"arrival time     : "<<registered_arrival_time<<endl;
    }

};

class buses
{
public:
    char driver[99],starting_point[99];
    char bus_name[99];
    int no_stops,seats;
    struct stops
    {
        char bus_stop[99];
        char arrival_time[99];
    };
    stops points[14];
    void load_bus_route()
    {
        cout<<"Bus number : ";
        cin>>bus_name;
        cout<<"Bus driver name : ";
        cin>>driver;
        cout<<"No of seats : ";
        cin>>seats;
        cout<<"Starting point : ";
        cin>>starting_point;
        cout<<"No of stops between "<<starting_point<<" and SRM AP UNIVERSITY : ";
        cin>>no_stops;
        for(i=0;i<no_stops;i++)
        {
            cout<<"enter stop "<<i+1<<" : ";
            cin>>points[i].bus_stop;
            cout<<"enter arrival time : ";
            cin>>points[i].arrival_time;
        }
    }
    void display_to_admin()
    {
        cout<<"Bus name : "<<bus_name<<endl;
        cout<<starting_point<<" --->  SRM AP UNIVERSITY"<<endl;
        cout<<"No of seats available : "<<seats<<endl;
    }
    void display_to_customers()
    {
        cout<<"Bus name : "<<bus_name<<endl;
        cout<<starting_point<<" ---> SRM AP UNIVERSITY"<<endl;
        cout<<"bus stops : "<<endl;
        for(j=0;j<no_stops;j++)
        {
            cout<<j+1<<"   "<<points[j].bus_stop<<"     "<<points[j].arrival_time<<"am"<<endl;
        }
    }
};
class vijayawada:public buses
{
public:

};
class guntur:public buses
{
public:

};
class tenali:public buses
{
public:
};
int main()
{
    int choose,num1,num2,num3,num4,count1=1;
    char temp_bus[99];
    vijayawada route1[99];
    guntur route2[99];
    tenali route3[99];
    customers a[999];
    cout<<"\t\t\t\t\t BUS RESERVATION SYSTEM "<<endl;
    while(1)
    {
        count1=1;
        count2=1;
        cout<<"***********************"<<endl;
        cout<<"1 - Customer login "<<endl;
        cout<<"2 - Bus admin login "<<endl;
        cout<<"3 - to exit   "<<endl;
        cout<<"***********************"<<endl;
        cout<<">> ";
        cin>>choose;
        switch(choose)
        {
            case 1:cout<<" 1 - to add a customer "<<endl;
                   cout<<" 2 - to delete a customer "<<endl;
                   cout<<" 3 - to modify a customer details "<<endl;
                   cout<<">> ";
                   cin>>choose;
                   switch(choose)
                   {
                       case 1:a[no_customers].customer_input();
                              for(i=0;i<no_customers;i++)
                              {
                                  if(strcmp(a[no_customers].name,a[i].name)==0)
                                  {
                                     count1=0;
                                     key3=i;
                                     break;
                                  }
                              }
                              if(count1==0)
                              {
                                  cout<<"\nYou have already registered in bus"<<endl;
                                  a[key3].display_registration();
                              }
                              else
                              {
                                  cout<<"You are not registered in bus."<<endl;
                                  that:
                                  cout<<"\n-----------------------------------------"<<endl;
                                  cout<<" 1 - to register in vijayawada bus "<<endl;
                                  cout<<" 2 - to register in guntur bus "<<endl;
                                  cout<<" 3 - to register in Tenali bus "<<endl;
                                  cout<<">> ";
                                  cin>>choose;
                                  switch(choose)
                                  {
                                      case 1:cout<<"---------------------------------"<<endl;
                                            for(i=0;i<bza;i++)
                                            {
                                                if(strcmp(route1[i].bus_name,"NA")!=0)
                                                {
                                                    route1[i].display_to_customers();
                                                    cout<<"-----------------------------"<<endl;
                                                }
                                            }
                                            cout<<"Enter bus name : ";
                                            cin>>temp_bus;
                                            cout<<"Choose your stop number : ";
                                            cin>>choose;

                                            for(i=0;i<=bza;i++)
                                            {
                                                if(strcmp(temp_bus,route1[i].bus_name)==0)
                                                {
                                                    count2=0;
                                                    key2=i;
                                                }
                                            }
                                            if(count2==0)
                                            {
                                                //register_in_bus(a[no_customers],route1[key2]);
                                                strcpy(a[no_customers].registered_bus_name,route1[key2].bus_name);
                                                strcpy(a[no_customers].registered_start_point,route1[key2].starting_point);
                                                strcpy(a[no_customers].registered_driver,route1[key2].driver);
                                                strcpy(a[no_customers].registered_bus_stop,route1[key2].points[choose-1].bus_stop);
                                                strcpy(a[no_customers].registered_arrival_time,route1[key2].points[choose-1].arrival_time);
                                                cout<<"\t\t\t Your Registration"<<endl;
                                                a[no_customers].display_registration();
                                                no_customers++;
                                            }
                                            else
                                            {
                                                 cout<<"Enter a valid bus name "<<endl;
                                                 goto that;
                                            }break;
                                      case 2:cout<<"---------------------------------"<<endl;
                                            for(i=0;i<guntur1;i++)
                                            {
                                                if(strcmp(route2[i].bus_name,"NA")!=0)
                                                {
                                                    route2[i].display_to_customers();
                                                    cout<<"-----------------------------"<<endl;
                                                }
                                            }
                                            cout<<"Enter bus name : ";
                                            cin>>temp_bus;
                                            cout<<"Choose your stop number : ";
                                            cin>>choose;

                                            for(i=0;i<=guntur1;i++)
                                            {
                                                if(strcmp(temp_bus,route2[i].bus_name)==0)
                                                {
                                                    count2=0;
                                                    key2=i;
                                                }
                                            }
                                            if(count2==0)
                                            {
                                                //register_in_bus(a[no_customers],route1[key2]);
                                                strcpy(a[no_customers].registered_bus_name,route2[key2].bus_name);
                                                strcpy(a[no_customers].registered_start_point,route2[key2].starting_point);
                                                strcpy(a[no_customers].registered_driver,route2[key2].driver);
                                                strcpy(a[no_customers].registered_bus_stop,route2[key2].points[choose-1].bus_stop);
                                                strcpy(a[no_customers].registered_arrival_time,route2[key2].points[choose-1].arrival_time);
                                                cout<<"\t\t\t Your Registration"<<endl;
                                                a[no_customers].display_registration();
                                                no_customers++;
                                            }
                                            else
                                            {
                                                 cout<<"Enter a valid bus name "<<endl;
                                                 goto that;
                                            }break;
                                      case 3:cout<<"---------------------------------"<<endl;
                                            for(i=0;i<tenali1;i++)
                                            {
                                                if(strcmp(route3[i].bus_name,"NA")!=0)
                                                {
                                                    route3[i].display_to_customers();
                                                    cout<<"-----------------------------"<<endl;
                                                }
                                            }
                                            cout<<"Enter bus name : ";
                                            cin>>temp_bus;
                                            cout<<"Choose your stop number : ";
                                            cin>>choose;

                                            for(i=0;i<=tenali1;i++)
                                            {
                                                if(strcmp(temp_bus,route3[i].bus_name)==0)
                                                {
                                                    count2=0;
                                                    key2=i;
                                                }
                                            }
                                            if(count2==0)
                                            {
                                                //register_in_bus(a[no_customers],route1[key2]);
                                                strcpy(a[no_customers].registered_bus_name,route3[key2].bus_name);
                                                strcpy(a[no_customers].registered_start_point,route3[key2].starting_point);
                                                strcpy(a[no_customers].registered_driver,route3[key2].driver);
                                                strcpy(a[no_customers].registered_bus_stop,route3[key2].points[choose-1].bus_stop);
                                                strcpy(a[no_customers].registered_arrival_time,route3[key2].points[choose-1].arrival_time);
                                                cout<<"\t\t\t Your Registration"<<endl;
                                                a[no_customers].display_registration();
                                                no_customers++;
                                            }
                                            else
                                            {
                                                 cout<<"Enter a valid bus name "<<endl;
                                                 goto that;
                                            }break;
                                  }
                             }break;
                       case 2:cout<<"Enter the name of the customer : ";
                              char temp2[99];
                              cin>>temp2;
                              for(i=0;i<no_customers;i++)
                              {
                                  if(strcmp(a[i].name,temp2)==0)
                                  {
                                      a[i].display_registration();
                                      strcpy(a[i].name,"NA");
                                      cout<<"customer deleted successfully"<<endl;
                                      break;
                                  }
                              }break;
                      case 3:cout<<"Enter the name of the customer : ";
                             char temp3[99];
                             cin>>temp3;
                             for(i=0;i<no_customers;i++)
                             {
                                 if(strcmp(a[i].name,temp3)==0)
                                 {
                                     cout<<"1 - to register in vijayawada"<<endl;
                                     cout<<"2 - to register in guntur"<<endl;
                                     cout<<"3 - to register in tenali"<<endl;
                                     cout<<">> ";
                                     cin>>choose;
                                     switch(choose)
                                     {
                                         case 1:cout<<"---------------------------------"<<endl;
                                                for(int u=0;u<bza;u++)
                                                {
                                                    if(strcmp(route1[u].bus_name,"NA")!=0)
                                                    {
                                                        route1[u].display_to_customers();
                                                        cout<<"-----------------------------"<<endl;
                                                    }
                                                }
                                                cout<<"Enter bus name : ";
                                                cin>>temp_bus;
                                                cout<<"Choose your stop number : ";
                                                cin>>choose;

                                                for(int u=0;u<=bza;u++)
                                                {
                                                    if(strcmp(temp_bus,route1[u].bus_name)==0)
                                                    {
                                                        count2=0;
                                                        key2=u;
                                                    }
                                                }
                                                if(count2==0)
                                                {
                                                    //register_in_bus(a[no_customers],route1[key2]);
                                                    strcpy(a[i].registered_bus_name,route1[key2].bus_name);
                                                    strcpy(a[i].registered_start_point,route1[key2].starting_point);
                                                    strcpy(a[i].registered_driver,route1[key2].driver);
                                                    strcpy(a[i].registered_bus_stop,route1[key2].points[choose-1].bus_stop);
                                                    strcpy(a[i].registered_arrival_time,route1[key2].points[choose-1].arrival_time);
                                                    cout<<"\t\t\t Your Registration"<<endl;
                                                    a[i].display_registration();
                                                }break;
                                         case 2:cout<<"---------------------------------"<<endl;
                                                for(int u=0;u<guntur1;u++)
                                                {
                                                    if(strcmp(route2[u].bus_name,"NA")!=0)
                                                    {
                                                        route2[u].display_to_customers();
                                                        cout<<"-----------------------------"<<endl;
                                                    }
                                                }
                                                cout<<"Enter bus name : ";
                                                cin>>temp_bus;
                                                cout<<"Choose your stop number : ";
                                                cin>>choose;

                                                for(int u=0;u<=guntur1;u++)
                                                {
                                                    if(strcmp(temp_bus,route2[u].bus_name)==0)
                                                    {
                                                        count2=0;
                                                        key2=u;
                                                    }
                                                }
                                                if(count2==0)
                                                {
                                                    //register_in_bus(a[no_customers],route1[key2]);
                                                    strcpy(a[i].registered_bus_name,route2[key2].bus_name);
                                                    strcpy(a[i].registered_start_point,route2[key2].starting_point);
                                                    strcpy(a[i].registered_driver,route2[key2].driver);
                                                    strcpy(a[i].registered_bus_stop,route2[key2].points[choose-1].bus_stop);
                                                    strcpy(a[i].registered_arrival_time,route2[key2].points[choose-1].arrival_time);
                                                    cout<<"\t\t\t Your Registration"<<endl;
                                                    a[i].display_registration();
                                                }break;
                                         case 3:cout<<"---------------------------------"<<endl;
                                                for(int u=0;u<tenali1;u++)
                                                {
                                                    if(strcmp(route3[u].bus_name,"NA")!=0)
                                                    {
                                                        route3[u].display_to_customers();
                                                        cout<<"-----------------------------"<<endl;
                                                    }
                                                }
                                                cout<<"Enter bus name : ";
                                                cin>>temp_bus;
                                                cout<<"Choose your stop number : ";
                                                cin>>choose;

                                                for(int u=0;u<=tenali1;u++)
                                                {
                                                    if(strcmp(temp_bus,route3[u].bus_name)==0)
                                                    {
                                                        count2=0;
                                                        key2=u;
                                                    }
                                                }
                                                if(count2==0)
                                                {
                                                    //register_in_bus(a[no_customers],route1[key2]);
                                                    strcpy(a[i].registered_bus_name,route3[key2].bus_name);
                                                    strcpy(a[i].registered_start_point,route3[key2].starting_point);
                                                    strcpy(a[i].registered_driver,route3[key2].driver);
                                                    strcpy(a[i].registered_bus_stop,route3[key2].points[choose-1].bus_stop);
                                                    strcpy(a[i].registered_arrival_time,route3[key2].points[choose-1].arrival_time);
                                                    cout<<"\t\t\t Your Registration"<<endl;
                                                    a[i].display_registration();
                                                }break;
                                     }
                                    break;
                                 }
                             }
                   }break;
            case 2:cout<<"***************************************"<<endl;
                   cout<<" 1 - Add bus route"<<endl;
                   cout<<" 2 - Delete the bus"<<endl;
                   cout<<" 3 - Modify the bus data"<<endl;
                   cout<<" 4 - Display all the Buses"<<endl;
                   cout<<"***************************************"<<endl;
                   cout<<">> ";
                   cin>>num2;
                   switch(num2)
                   {
                       case 1:cout<<"1 - add bus in vijayawada "<<endl;
                              cout<<"2 - add bus in guntur "<<endl;
                              cout<<"3 - add bus in Tenali "<<endl;
                              cout<<">> ";
                              cin>>num3;
                              cout<<"-------------------------------"<<endl;
                              cout<<"Enter the bus details : "<<endl;
                              switch(num3)
                              {
                                  case 1:route1[bza];
                                         route1[bza].load_bus_route();
                                         bza++;break;
                                  case 2:route2[guntur1];
                                         route2[guntur1].load_bus_route();
                                         guntur1++;break;
                                  case 3:route3[tenali1];
                                         route3[tenali1].load_bus_route();
                                         tenali1++;break;
                              }break;
                        case 2:char del_bus[99];
                               cout<<" 1 - Delete Bus from Vijayawada "<<endl;
                               cout<<" 2 - Delete Bus from Guntur "<<endl;
                               cout<<" 3 - Delete bus from Tenali "<<endl;
                               cout<<">> ";
                               cin>>choose;
                               switch(choose)
                               {
                                   case 1:if(bza!=0)
                                          {
                                              cout<<"--------------------------"<<endl;
                                              for(i=0;i<bza;i++)
                                              {
                                                  if(strcmp(route1[i].bus_name,"NA")!=0)
                                                  {
                                                      route1[i].display_to_admin();
                                                      cout<<"--------------------------"<<endl;
                                                  }
                                              }
                                              cout<<"enter the bus name to delete : ";
                                              cin>>del_bus;
                                              for(i=0;i<bza;i++)
                                              {
                                                  if(strcmp(del_bus,route1[i].bus_name)==0)
                                                  {
                                                      strcpy(route1[i].bus_name,"NA");
                                                      cout<<del_bus<<" is deleted succesfully."<<endl;
                                                      break;
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Vijayawada."<<endl;

                                          }break;
                                    case 2:if(guntur1!=0)
                                          {
                                              for(i=0;i<guntur1;i++)
                                              {
                                                  if(strcmp(route2[i].bus_name,"NA")!=0)
                                                  {
                                                      route2[i].display_to_admin();
                                                      cout<<"--------------------------"<<endl;
                                                  }
                                              }
                                              cout<<"enter the bus name to delete : ";
                                              cin>>del_bus;
                                              for(i=0;i<guntur1;i++)
                                              {
                                                  if(strcmp(del_bus,route2[i].bus_name)==0)
                                                  {
                                                      strcpy(route2[i].bus_name,"NA");
                                                      cout<<del_bus<<" is deleted succesfully."<<endl;
                                                      break;
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Guntur."<<endl;
                                          }
                                          break;
                                    case 3:if(tenali1!=0)
                                          {
                                              for(i=0;i<tenali1;i++)
                                              {
                                                  if(strcmp(route3[i].bus_name,"NA")!=0)
                                                  {
                                                      route3[i].display_to_admin();
                                                      cout<<"--------------------------"<<endl;
                                                  }
                                              }
                                              cout<<"enter the bus name to delete : ";
                                              cin>>del_bus;
                                              for(i=0;i<tenali1;i++)
                                              {
                                                  if(strcmp(del_bus,route3[i].bus_name)==0)
                                                  {
                                                      strcpy(route3[i].bus_name,"NA");
                                                      cout<<del_bus<<" is deleted succesfully."<<endl;
                                                      break;
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Tenali."<<endl;
                                          }
                                          break;
                               }break;
                        case 4:cout<<" 1 - display vijayawada buses"<<endl;
                               cout<<" 2 - display guntur buses "<<endl;
                               cout<<" 3 - display Tenali buses"<<endl;
                               cout<<">> ";
                               cin>>num4;
                               switch(num4)
                               {
                                   case 1:if(bza!=0)
                                          {
                                              for(i=0;i<bza;i++)
                                              {
                                                  if(strcmp(route1[i].bus_name,"NA")!=0)
                                                  {
                                                      cout<<endl;
                                                      route1[i].display_to_admin();
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Vijayawada."<<endl;

                                          }break;
                                    case 2:if(guntur1!=0)
                                          {
                                              for(i=0;i<guntur1;i++)
                                              {
                                                  if(strcmp(route3[i].bus_name,"NA")!=0)
                                                  {
                                                      cout<<endl;
                                                      route2[i].display_to_admin();
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Guntur."<<endl;
                                          }
                                          break;
                                    case 3:if(tenali1!=0)
                                          {
                                              for(i=0;i<tenali1;i++)
                                              {
                                                  if(strcmp(route3[i].bus_name,"NA")!=0)
                                                  {
                                                      route3[i].display_to_admin();
                                                  }
                                              }
                                          }
                                          else
                                          {
                                              cout<<"No Buses are registered from Tenali."<<endl;
                                          }
                                          break;
                               }break;
                        case 3:cout<<"1 - Modify the bus from vijayawada."<<endl;
                               cout<<"2 - Modify the bus from Tenali."<<endl;
                               cout<<"3 - Modify the bus from Guntur."<<endl;
                               cout<<">> ";
                               cin>>choose;
                               switch(choose)
                               {
                                   case 1:for(i=0;i<bza;i++)
                                          {
                                              if(strcmp(route1[i].bus_name,"NA")!=0)
                                              {
                                                  cout<<endl;
                                                  route1[i].display_to_admin();
                                              }
                                          }
                                          cout<<"enter the bus name to modify : ";
                                          cin>>temp_bus;
                                          for(i=0;i<bza;i++)
                                          {
                                              if(strcmp(route1[i].bus_name,temp_bus)==0)
                                              {
                                                  route1[i].load_bus_route();
                                                  break;
                                              }
                                          }break;
                                    case 2:for(i=0;i<guntur1;i++)
                                          {
                                              if(strcmp(route2[i].bus_name,"NA")!=0)
                                              {
                                                  cout<<endl;
                                                  route2[i].display_to_admin();
                                              }
                                          }
                                          cout<<"enter the bus name to modify : ";
                                          cin>>temp_bus;
                                          for(i=0;i<guntur1;i++)
                                          {
                                              if(strcmp(route2[i].bus_name,temp_bus)==0)
                                              {
                                                  route2[i].load_bus_route();
                                                  break;
                                              }
                                          }break;
                                    case 3:for(i=0;i<tenali1;i++)
                                          {
                                              if(strcmp(route3[i].bus_name,"NA")!=0)
                                              {
                                                  cout<<endl;
                                                  route3[i].display_to_admin();
                                              }
                                          }
                                          cout<<"enter the bus name to modify : ";
                                          cin>>temp_bus;
                                          for(i=0;i<tenali1;i++)
                                          {
                                              if(strcmp(route3[i].bus_name,temp_bus)==0)
                                              {
                                                  route3[i].load_bus_route();
                                                  break;
                                              }
                                          }break;
                               }break;
                   }break;
            case 3:return 0;
                   break;
        }
    }
}
