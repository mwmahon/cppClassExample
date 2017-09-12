

/**
 *  mike mahon
 *  gradebookClassExample.cpp
 *  c++ program to illustrate object orientation
 *  based on paul deitel and harvey deitel, c++ how to program, 8e, isbn: 978-0-273-75276-9, page 110
 */


/**< preprocessor directives */
#include <iostream>
#include <string>


using namespace std;


/**< gradebook class definition */
class GradeBook
{
public:
    /**< constructor initializes courseName with string supplied as argument */
    GradeBook (string name)
    {
        setCourseName (name);
    }

    /**< function that sets the course name */
    void setCourseName(string name)
    {
        courseName = name;
    }

    /**< function that gets the course name */
    string getCourseName()
    {
        return courseName;
    }

    /**< function that displays a welcome message */
    void displayMessage()
    {
        cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
    }
private:
    string courseName;
};


/**< main() function */
int main(void)
{
    GradeBook gradeBook1("PROG H1609 - Introduction to Computer Programming");
    GradeBook gradeBook2("PROG H2607 - Computer Programming for Engineers");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() <<
            "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    /**< variable declaration */
    //string nameOfCourse;

    /**< object initialization */
    //GradeBook myGradeBook;

    /**< display initial value of course name */
    //cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    /**< prompt for input and set course name */
    //cout << "\nPlease enter the course name: " << endl;
    //getline(cin, nameOfCourse);
    //myGradeBook.setCourseName(nameOfCourse);

    /**< display message with new course name */
    //cout << endl;
    //myGradeBook.displayMessage();
}
