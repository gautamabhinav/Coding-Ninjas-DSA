class Student {
    static int totalStudents;   //Total number of students present  

    public :

    int rollNumber;
    int age;

    

    Student() {
        totalStudents++;
    }

    int getRollNumber() {
        return rollNumber;
    }
    static int getTotalStudent() {
        return totalStudents;
    }
};

int Student :: totalStudents = 0; //initialize static data members