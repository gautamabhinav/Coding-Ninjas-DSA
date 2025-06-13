 class Student {
    public :

        int age;
        const int rollNumber;       //Initializer list
        int &x;                     // age reference variable

        Student(int r , int age) : rollNumber(r) , age(age) , x(this -> age ){
                                // const rollNumber = r;
        }
        // Student(int r) : rollNumber(101){

        // }
};