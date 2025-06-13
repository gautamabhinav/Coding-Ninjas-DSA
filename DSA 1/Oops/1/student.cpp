class Student{
    public:
        int rollNo ;

    private:
        int age;

    public:

        // Default Constructor
        Student(){
            cout << "Constructor Called !" << endl;
        }

        //Paremetrized Constructor
        Student(int r){
            cout << "Constructor called 2" << endl;
            this -> rollNo = r;
        }

        Student(int a , int r){
            cout << "this  :" << this << endl;
            cout << "Constructor called 3 !" << endl;
            this -> age = a;
            this -> rollNo = r;

        }

        void display(){
            cout << age << " " << rollNo << endl;
        }

        int getAge(){
            return age;
        }

        void setAge(int a , int password){
            if(password != 123){
                return;
            }
            if(a < 0){
                return;
            }
            age = a;
        }
};