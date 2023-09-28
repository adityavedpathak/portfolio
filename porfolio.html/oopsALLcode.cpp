
#include<iostream>
using namespace std;
class bank{
    private:
    char name[100];
    int acc_number;
    int balance=10000;
    int withdrawal;
    int deposit;

    public:
    void getdata(){
        cout<<"Enter your Name: "<<endl;
        cin>>name;
        cout<<"Enter your account number:"<<endl;
        cin>>acc_number;
        cout<<"Enter the amount to withdrawal"<<endl;
        cin>>withdrawal;
       
    }

    void displaydata(){
        cout<<"Customer name: "<<name<<endl;
        cout<<"Account Number:  "<<acc_number<<endl;
        cout<<"Balance: "<<balance<<endl;
        if(withdrawal>balance){
            cout<<"Isufficient balance deposit money to withdrawal "<<endl;
            cin>>deposit;
            cout<<"Name:"<<name<<endl;
            cout<<"Your Balance is: "<<(balance+deposit-withdrawal)<<endl;
            
        }else{
            cout<<"Money is withdrawaled and ";
            cout<<"Your Balance is: "<<(balance-withdrawal)<<endl;
            cout<<"deposit Money"<<endl;
        cin>>deposit;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance: "<<(balance-withdrawal+deposit)<<endl;
        }
        

        
}

};



int main(){
    bank cust1;
    cust1.getdata();
    cust1.displaydata();

    bank cust2;
    cust1.getdata();
    cust1.displaydata();
    return 0;
};


 #include <iostream>
#include<string.h>
using namespace std;

class student{
    string name,address,blood_grp;
    int roll_no;
    char division;
    long int contact,DOB;
    public:
    static int count;
    student(){
        cout<<"Constructor Called"<<endl;
    }
    void input();
    void display();
    static void scount(){
    count++;
    }
    ~student(){
        cout<<"Destructor Called"<<endl;
    }
};
  int student::count;
void  student :: input(){
    cout<<"Enter student Name: ";
    cin>>name;
    cout<<"Enter Roll number: ";
    cin>>roll_no;
    cout<<"Enter contact Number: ";
    cin>>contact;
    cout<<"Enter DOB: ";
    cin>>DOB;
    cout<<"Enter Division: ";
    cin>>division;
    cout<<"Enter Address: ";
    cin>>address;
    cout<<"Enter Blood Group: ";
    cin>>blood_grp;
    cout<<"*********************************************"<<endl;
    scount();
}
 inline void student :: display(){
     cout<<"student Name : "<<name<<endl;
     cout<<"student Roll Number : "<<roll_no<<endl;
     cout<<"student Contact Number : "<<contact<<endl;
     cout<<"student DOB : "<<DOB<<endl;
     cout<<"student Division : "<<division<<endl;
     cout<<"student Address : "<<address<<endl;
     cout<<"student Blood Group : "<<blood_grp<<endl;
     cout<<"Number of students = "<<count<<endl;
}

int main() {
   student stud;
   
   stud.input();
   stud.display();
   
    return 0;
}


#include <iostream>
using namespace std;
{
    
} // namespace std;

class Number2; // Forward declaration

class Number1 {
private:
    int num;

public:
    Number1(int n) : num(n) {}

    friend int findMax(Number1, Number2);
};

class Number2 {
private:
    int num;

public:
    Number2(int n) : num(n) {}

    friend int findMax(Number1, Number2);
};

int findMax(Number1 n1, Number2 n2) {
    return (n1.num > n2.num) ? n1.num : n2.num;
}

int main() {
    Number1 num1(5);
    Number2 num2(8);

    int max = findMax(num1, num2);

    std::cout << "Maximum number is: " << max << std::endl;

    return 0;
}

 #include <iostream>

class Money {
private:
    int euros;
    int centimes;

public:
    // Constructor
    Money(double amount) {
        euros = static_cast<int>(amount);
        centimes = static_cast<int>((amount - euros) * 100);
    }

    // Destructor (not explicitly needed in this case)

    // Member function to print money info
    void print() {
        std::cout << euros << "," << centimes << " Euros in simple words and simple language" << std::endl;
    }
};

int main() {
    Money m(2.99);
    m.print();

    return 0;
}
 #include <iostream>

class Money {
private:
    int euros;
    int centimes;

public:
    // Constructor
    Money(int euros, int centimes) {
        this->euros = euros;
        this->centimes = centimes;
    }

    // Accessor methods
    int getEuros() {
        return euros;
    }

    int getCentimes() {
        return centimes;
    }

    // Print method to display the money information
    void print() {
        std::cout << euros << " euros and " << centimes << " centimes" << std::endl;
    }
};

int main() {
    // Create a Money object
    Money myMoney(10, 50);

    // Access and print the money information
    std::cout << "Money: ";
    myMoney.print();

    return 0;
}
 #include <iostream>

class Box {
private:
    double length;
    double width;
    double height;
    static int objectCount; // Static member to keep track of objects created

public:
    // Constructor with parameters
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        objectCount++; // Increment the object count when a new Box is created
    }

    // Function to calculate the volume of the box
    double calculateVolume() {
        return length * width * height;
    }

    // Static member function to get the total number of objects created
    static int getObjectCount() {
        return objectCount;
    }
};

// Initialize the static member variable
int Box::objectCount = 0;

int main() {
    // Create some Box objects
    Box box1(3.0, 2.0, 4.0);
    Box box2(1.5, 2.5, 3.0);

    // Calculate and display the volume of each box
    std::cout << "Volume of box1: " << box1.calculateVolume() << std::endl;
    std::cout << "Volume of box2: " << box2.calculateVolume() << std::endl;

    // Get the total number of objects created
    std::cout << "Total number of Box objects created: " << Box::getObjectCount() << std::endl;

    return 0;
}