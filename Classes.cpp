#include <iostream>
#include <cstdlib>

// This Program is to refresh on C++ Classes
// Made by Daily

// Function declartions
int AnotherStud();
int Stud1();
int Stud2();
int Stud3();


// This is a data type Student
class Student
{
    public:
        std::string name;
        std::string major;
        int gpa;

};

// Main Fucntion
int main()
{
    std::cout << "Welcome to the Student Class Program" << std::endl;
    std::cout << "Press any key to begin ";
    // This will allow for any input to begin
    std::cin.get();
    std::cout << "========================" << std::endl;

    // This will clear the screen
    std::system("cls");

    // Goes to Another Student Function
    AnotherStud();

    return 0;

}

int AnotherStud()
{
    // User input
    int input1;

    std::cout << "Would you like to see a Student?" << std::endl;
    std::cout << "1 = Yes | 2 = Exit" << std::endl; 

    std::cin >> input1;
    if(input1 == 1)
    {
        // User input of choice
        int choice;

        std::cout << "Which student would you like to see?" << std::endl;
        std::cout << "1,2, or 3?" << std::endl;
        
        std::cin >> choice;
        if(choice == 1)
        {
             // This will clear the screen
            std::system("cls");
            // Goes to the Stud1 Function
            Stud1();
        }
        if(choice == 2)
        {
            // This will clear the screen
            std::system("cls");
            // Goes to Stud2 Function
            Stud2();
        }
        if(choice == 3)
        {
            Stud3();
        }
        else
        {
            std::cout <<"Wrong input try again!" << std::endl;
            AnotherStud();
        }

    }
    if(input1 == 2)
    {
        // Will exit the program
        exit(0);

    }
    else
    {
        std::cout << "You entered a wrong input";
        AnotherStud();

    }


    return 0;
}


// Student1
int Stud1()
{
    // This is making an instance of the Student class
    Student stud1;
    // the "." is ues to access and assign values
    stud1.name = "Mike";
    stud1.major = "Computer Science";
    stud1.gpa = 3.2;
    
    // Intro string
    std::cout << "Heres the info on Student1" << std::endl;
    std::cout << "Press any key" << std::endl;
    std::cin.get();

    // Student1 Info
    std::cout << stud1.name << std::endl;
    std::cout << stud1.major << std::endl;
    std::cout << stud1.gpa << std::endl;
    
    // User Input 
    std::cout << "Press any Key ";
    std::cin.get();

    AnotherStud();

    return 0;

}

// Student 2
int Stud2()
{
    // stud2 is make an instance of Student class
    Student stud2;
    // the "." is ues to access and assign values
    stud2.name = "Jake";
    stud2.major = "Biology";
    stud2.gpa = 2.8;

    // Intro string
    std::cout << "Heres the info on Student1" << std::endl;
    std::cout << "Press any key" << std::endl;
    std::cin.get();

    std::cout << stud2.name << std::endl;
    std::cout << stud2.major << std::endl;
    std::cout << stud2.gpa << std::endl;

    // User Input 
    std::cout << "Press any Key ";
    std::cin.get();

    AnotherStud();

    return 0;

}


// Student 2
int Stud3()
{


    return 0;

}



// Finishing adding Stud3
// Next add the feature for input!