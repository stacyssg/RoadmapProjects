//
// Created by stacy on 5/23/2025.
//
#include <iostream>
//features, resets every 24hr

 //Done, In Progress, Not started
//Create list of tasks

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