#include <iostream>
using namespace std;
float getGradePoint(float marks)
{
if (marks >= 85) return 4.0;
else if (marks >= 70) return 3.0;
else if (marks >= 55) return 2.0;
else if (marks >= 40) return 1.0;
else return 0.0;
}
int main()
{
int semesters, subjects;
float marks, totalPoints, semesterGPA, totalGPA = 0;
cout << "Enter number of semesters: ";
cin >> semesters;
for (int s = 1; s <= semesters; s++)
{
totalPoints = 0;
cout << "Enter number of subjects: ";
cin >> subjects;
for (int i = 1; i <= subjects; i++)
{
cin >> marks;
totalPoints += getGradePoint(marks);
}
semesterGPA = totalPoints / subjects;
totalGPA += semesterGPA;
}
float CGPA = totalGPA / semesters;
cout << "Final CGPA: " << CGPA;
return 0;

