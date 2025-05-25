//
// Created by stacy on 5/24/2025.
//
#include <iostream>
#include <string>
using namespace std;


class Task{
  private:
  int id;
  string description;
    bool isComplete;
    string dueDate;
    public:
      Task() : id(0), description(""), isComplete(false), dueDate(""){} //default constructor
      Task(int id, string description, bool isComplete, string dueDate) :
 id(id), description(description), isComplete(isComplete), dueDate(dueDate){}
      int getId(){return id;}
      string getDescription(){return description;}
      bool getIsComplete(){return isComplete;}
      string getDueDate(){ return dueDate;}

  void setId(int ID) { id = ID; }
  void setDescription(string Description) { description = Description; }
  void setIsComplete(bool IsComplete) { isComplete = IsComplete; }
  void setDueDate(string DueDate) { dueDate = DueDate; }




      void markComplete(){
        if(!isComplete){
          isComplete = true;
          cout << "Task Completed" << endl;
        }
        else{cout<< "Task Already Done" << endl;}
      }

     string toString(){
       //Change bool to text
       string status = isComplete ? "Complete" : "Failed";
       string myReturn;
       myReturn += to_string(id) +  "  ||  Description: " + description + "  ||  " + "Due Date: " + dueDate
                + "\nStatus: " + status;

       return myReturn;
     }
  };

  //ID:1  || Description           || Due Date:}
  //Status: incomeplete
  //