#include "Employee.cpp"

#include "DoublyLinkedQueue.cpp"

#include <iostream>

using namespace std;

int main(){

// declare integer queue

Queue<int> queueInteger;

cout<<"Enqueue postive numbers (Enter -1 to stop): \n";

// read integer value to enqueue

do{

int intVal;

cin>>intVal;

if (intVal == -1){

break;

}

queueInteger.enqueue(intVal);

}while(true);

cout<<"print queue: ";

queueInteger.print(); // print elements of integer queue

int k;

cout<<"How many numbers to be removed from queue : ";

cin>>k;

// dequeue k elements

while(k-->0 && !queueInteger.empty()){

queueInteger.dequeue();

}

cout<<"print queue "<<k<<" elements: ";

queueInteger.print(); // print element after dequeue k elements

cout<<endl<<endl;

// declare string queue

Queue<string> queueString;

cout<<"Enqueue string (Enter exit to stop): \n";

// read string value

do{

string stringVal;

cin>>stringVal;

if (stringVal == "exit"){

break;

}

queueString.enqueue(stringVal);

}while(true);

cout<<"print queue: ";

queueString.print(); // print element of string queue

cout<<"How many strings to be removed from queue : ";

cin>>k;

// dequeue k elements

while(k-->0 && !queueString.empty()){

queueString.dequeue();

}

cout<<"print queue "<<k<<" elements: ";

queueString.print(); 

cout<<endl<<endl;

// declare employee queue

void employeeList()
{
//create linkedlist object 
LinkedList<Employee> l1;
cout<<"Create a list of employees: \n";
//take input till exit is entered
string x="";
int id=1;
string name;
string dept;
string key;
int count=0;
//get input 
while(id!=0)

    //print the message
    cout<<"Enqueue employee id, name, dept (enter id 0 to stop): ";
    cin>>id;
    cin>>name;
    cin>>dept;
    //if 0 break
    if(id==0)
        break;
    //create new employee
    Employee e(id,name,dept);
    //insert into the linked list
    l1.push_front(e); 
}

Employee employeeVal(employeeName, employeeId, employeeDept);

queueEmployee.enqueue(employeeVal);

}while(true);

cout<<"print queue: ";

Employee.print(); // print employee queue

cout<<"How many strings to be removed from queue: ";

cin>>k;

// dequeue k employee from queue

while(k-->0 && !queueString.empty()){

queueEmployee.dequeue();

}

cout<<"print queue "<<k<<" elements: ";

queueEmployee.print(); // print employee details after dequeue of k employee

}
