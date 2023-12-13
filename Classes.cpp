#include <iostream>
#include <cstdlib>

// This Program is to refresh on C++ Classes
// Made by Daily
// I use 2 different methods to use the classes..
// 1 with constructors the other without...

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
        int gpa;
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
    std::cout << "Press any key to begin ";
    // This will allow for any input to begin
    std::cin.get();
    std::cout << "========================" << std::endl;

    // This will clear the screen
    std::system("cls");

    std::cout << "Did you want info on Student or Prof?" <<std::endl;
    std::cout << "1 for Student | 2 for Prof ";

    std::cin >> stud_prof;
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
        std::cout << "You entered a wrong input" << std::endl;
        AnotherStud();
    }


    return 0;

}


int AnotherProf()
{

    int input2;

    std::cout << "Would you like to see a Prof?" << std::endl;
    std::cout << "1 = Yes | 2 = Exit" << std::endl; 

    std::cin >> input2;
    if(input2 == 1)
    {
        // User input of choice
        int choice2;

        std::cout << "Which Prof would you like to see?" << std::endl;
        std::cout << "1,2, or 3?" << std::endl;

        std::cin >> choice2;
        if(choice2 == 1)
        {
            Prof prof1("Jones","CSULA");
            std::cout << prof1.name << std::endl;
            std::system("cls");
            AnotherProf();
        }

        if(choice2 == 2)
        {
            Prof prof2("Timmy", "CSULB");
            std::cout << prof2.name << std::endl;
            std::cout << prof2.school << std::endl; 
            std::system("cls");
            AnotherProf();

        }
        if(choice2 == 3)
        {
            Prof prof3("Carol", "LBCC");
            std::cout << prof3.name << std::endl;
            std::cout << prof3.school <<std::endl;
            std::system("cls");
            AnotherProf();
        }
        else
        {
            std::cout << "You entered a wrong input" << std::endl;
            AnotherProf();
        }
    if(input2 == 2)
    {
        // Will exit the program
        exit(0);
    }
    else
    {
        std::cout << "You entered a wrong input" << std::endl;
        AnotherStud();
    }

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
    // stud2 is make an instance of Student class
    Student stud3;
    // the "." is ues to access and assign values
    stud3.name = "Timmy";
    stud3.major = "Psychology";
    stud3.gpa = 2.5;

    // Intro string
    std::cout << "Heres the info on Student2" << std::endl;
    std::cout << "Press any key" << std::endl;
    std::cin.get();

    // After input 
    std::cout << stud3.name << std::endl;
    std::cout << stud3.major << std::endl;
    std::cout << stud3.gpa << std::endl;

    // User Input 
    std::cout << "Press any Key ";
    std::cin.get();

    AnotherStud();

    return 0;


}


/* Updates: 
- I added constructors 
- Added Stud3
*/

/* Updates: 
-I added constructors 

*/

// Finishing adding Stud3
// Next add the feature for input!

// I added constructors