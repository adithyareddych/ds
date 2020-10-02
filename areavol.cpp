/* write a c++ program to calculate Area and Volume of  a Room.
create two methods
1. calculateArea(): to calculate area of room
2. calculateVolume(): to calculate volume of room
call these methods in main.

case=1
Enter length,width & hight values
2
3
4
Area of Room =  6
Volume of Room =  24

case=2
Enter length,width & hight values                                                                                       
4                                                                                                                       
7                                                                                                                       
3                                                                                                                       
Area of Room =  28                                                                                                      
Volume of Room =  84   
*/
#include <iostream>
using namespace std;

// create a class
class Room {

   //declare varaibles under access specifier
   public:
      int length,width,height;
    
    double calculateArea() {
      //return area 
      return length*width;
    }

    double calculateVolume() {
        //return volume
    
        return length*width*height;
    }
};

int main() {
   
    // create object of Room class and call methods
    Room r1;
    cout<<"Enter length,width & hight values"<<endl;
      cin>>r1.length;
      cin>>r1.width;
      cin>>r1.height;
    cout<<"Area of Room =  "<<r1.calculateArea()<<endl;;
    cout<<"Volume of Room = "<<r1.calculateVolume();
    
}
