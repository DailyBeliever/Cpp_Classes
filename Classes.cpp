#include <iostream>
#include <cstdlib>

// This Program is to refresh on C++ Classes
// Made by Daily
// I use 2 different methods to use the classes..
// 1 with constructors and the other without...

// Function declartions
int AnotherStud();
int AnotherProf();
int Stud1();
int Stud2();
int Stud3();


// This is a data type Student
// No Constructor Here
class Student
{
    public:
        std::string name;
        std::string major;
        double gpa;
};

// This is a data type Prof
class Prof
{
    public:
    // The variables need to be defined
    std::string name;
    std::string school;

    // This has to be the same ass Class name | Constructor
    Prof(std::string aName, std::string aSchool)
    {
        name = aName;
        school = aSchool;
    }
};

// Main Fucntion
int main()
{
    int stud_prof;

    std::cout << "Welcome to the Student | Prof Class Program" << std::endl;
    std::cout << "Press Enter to begin " ;
    // This will allow for any input to begin
    std::cin.get();
  //std::cout << "========================" << std::endl;

    // This will clear the screen
    std::system("cls");

    std::cout << "Did you want info on Student or Prof?" <<std::endl;
    std::cout << "1 for Student | 2 for Prof | 3 to exit" << std::endl;

    std::cout << "Your Input: "; std::cin >> stud_prof;
    if(stud_prof == 1)
    {
    std::system("cls");      
    // Goes to Another Student Function
    AnotherStud();
    }
    if(stud_prof == 2)
    {
    std::system("cls");
    AnotherProf();
    }
    if(stud_prof ==3)
    {
        exit(0);        
    }
    else
    {
        std::cout <<"Wrong input try again!" << std::endl;
        main();
    }

    return 0;

}


int AnotherStud()
{
    // User input
    int input1;

    std::cout << "Would you like to see a Student?" << std::endl;
    std::cout << "1 = Yes | 2 = Go Back | 3 = Exit" << std::endl; 

    std::cout << "Your Input: "; std::cin >> input1;
    if(input1 == 1)
    {
        // User input of choice
        int choice;

        std::cout << "Which student would you like to see?" << std::endl;
        std::cout << "1,2, or 3?" << std::endl;
        
        std::cout << "Your Input: "; std::cin >> choice;
        if(choice == 1)
        {
             // This will clear the screen
            std::system("cls");
            // Goes to the Stud1 Function
            Stud1();
        }
        else if(choice == 2)
        {
            // This will clear the screen
            std::system("cls");
            // Goes to Stud2 Function
            Stud2();
        }
        else if(choice == 3)
        {
            // This will clear the screen
            std::system("cls");
            // Goes to Stud2 Function
            Stud3();
        }
        else
        {
            std::cout <<"Wrong input try again!" << std::endl;
            AnotherStud();
        }
    }
    else if(input1 == 2)
    {
        main();
    }
    else if(input1 = 3)
    {
        // Will exit the program
        exit(0);
    }
    else
    {
        std::cout << "You entered a wrong input" << std::endl;
        AnotherStud();
    }

    return 0;

}


int AnotherProf()
{

    int input2;

    std::cout << "Would you like to see a Prof?" << std::endl;
    std::cout << "1 = Yes | 2 = Go Back | 3 = Exit" << std::endl; 

    std::cout << "Your Input: "; std::cin >> input2;
    if(input2 == 1)
    {
        // User input of choice
        int choice2;

        std::cout << "Which Prof would you like to see?" << std::endl;
        std::cout << "1,2, or 3?" << std::endl;

        std:: cout << "Your Input: "; std::cin >> choice2;
        if(choice2 == 1)
        {
            std::system("cls");
            Prof prof1("Jones","CSULA");
            std::cout << "Name: " << prof1.name << std::endl;
            std::cout << "School: " << prof1.school << std::endl;
            AnotherProf();
        }

        else if(choice2 == 2)
        {
            std::system("cls");
            Prof prof2("Timmy", "CSULB");
            std::cout << "Name: " << prof2.name << std::endl;
            std::cout << "School:" << prof2.school << std::endl; 
            AnotherProf();

        }
        else if(choice2 == 3)
        {
            std::system("cls");
            Prof prof3("Carol", "LBCC");
            std::cout << "Name: " << prof3.name << std::endl;
            std::cout << "School: " << prof3.school <<std::endl;
            AnotherProf();
        }
        else
        {
            std::cout << "You entered a wrong input" << std::endl;
            AnotherProf();
        }
    }
    else if(input2 == 2)
    {
        main();
    }
    else if(input2 == 3)
    {
        // Will exit the program
        exit(0);
    }
    else
    {
        std::cout << "You entered a wrong input" << std::endl;
        AnotherProf();
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
    
    // Clear input buffer
    std::cin.ignore();

    // Intro string
    std::cout << "Heres the info on Student1: " << std::endl;
    // std::cout << "Press any key" << std::endl;

    // Student1 Info
    std::cout << "Name: " << stud1.name << std::endl;
    std::cout << "Major: " << stud1.major << std::endl;
    std::cout << "GPA: " << stud1.gpa << std::endl;
    
    // User Input 
    std::cout << "Press Enter to continue " << std::endl;
    std::cin.get();

    // Returns to AnotherStud Function
    AnotherStud();
    // Clears the screen
    std::system("cls"); // <-- Determine if this is needed?

    return 0;

}

// Student 2
int Stud2()
{
    // stud2 is an instance of Student class
    Student stud2;
    // the "." is ues to access and assign values
    stud2.name = "Jake";
    stud2.major = "Biology";
    stud2.gpa = 2.8;

    // Clear input buffer
    std::cin.ignore();

    // Intro string
    std::cout << "Heres the info on Student2: " << std::endl;
    // std::cout << "Press any key" << std::endl;

    // Student2 Info
    std::cout << "Name: " << stud2.name << std::endl;
    std::cout << "Major: " << stud2.major << std::endl;
    std::cout <<"GPA: " << stud2.gpa << std::endl;

    // User Input 
    std::cout << "Press Enter to continue ";
    std::cin.get();

    // Returns to AnotherStud Function
    AnotherStud();
    // Clears the screen
    std::system("cls"); // <-- Determine if this is needed?

    return 0;

}


// Student 2
int Stud3()
{
    // stud2 is an instance of Student class
    Student stud3;
    // the "." is ues to access and assign values
    stud3.name = "Timmy";
    stud3.major = "Psychology";
    stud3.gpa = 2.5;

    // Intro string
    std::cout << "Heres the info on Student3: " << std::endl;
    // std::cout << "Press Enter to continue ";

    // Clear input buffer
    std::cin.ignore();

    // After input 
    std::cout << "Name: " << stud3.name << std::endl;
    std::cout <<"Major: " << stud3.major << std::endl;
    std::cout <<"GPA: " << stud3.gpa << std::endl;

    // User Input 
    std::cout << "Press enter to continue ";
    std::cin.get();

    // Returns to AnotherStud Function
    AnotherStud();
    // Clears the screen
    std::system("cls"); // <-- Determine if this is needed?

    return 0;

}