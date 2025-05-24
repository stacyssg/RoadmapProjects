//
// Created by stacy on 5/23/2025.
//
#include <iostream>
//features, resets every 24hr

 //Done, In Progress, Not started
//Create list of tasks
//resets 24 hours - maybe
//Add, Delete, Quit, Completed
//pops up a cute cat everytime you complete a task
//Goal Section
//Planner like with the week
//Can choose daily, weekly, or monthly formats
 //These are for future progression, keep it simple for now girly
class Solution {
private:


public:
    list<string> tasks;




};



void Add(string addTask) {
    cout << "Adding Task to List\n";
    cout << "Enter Your Desired Task: ";
    cin >> addTask;
}
void Delete(int delTask) {
    cout << "Choose task to Delete: ";
    cin >> delTask;
    cout << "Deleting " << delTask << " from List\n";
}
void Complete(string comTask) {
    cout << "Choose task Completed: ";
    cin >> comTask;
    cout << comTask << " now Completed\n";

}
void Quit() {
    cout << "Successfully Exited\n";
}



int main() {
    char input_choice;
  std::cout << "This is my To-do List!!!\n\n";
    std::cout <<"What would you like to do: ";
    std::cout << "";
    std::cin >> input_choice;
    for (int i = 0; i < input_choice; i++)
    {
        if (input_choice == 'N')
        {
            std::cout <<"Creating New Task.";
        }
        else if(input_choice == 'Q') {
            std::cout << "Quiting TO-DO List.";
        }
        else if (input_choice == 'C')
        {
            std::cout <<"Task Completed";
        }
        else
        {
            std::cout << "Invalid Input. Try Again.";
        }
    }

  return 0;
}
