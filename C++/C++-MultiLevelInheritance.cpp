//User function Template for C++

//MultiLevel Inheritance in CPP
//SOlution:
class test: public student 
{
    public:
        float marks[5];
        void set_marks(float arr[])
        {
            for(int i=0;i<5;i++)
            marks[i]=arr[i];
        }
};

class result: public test
{
    public:
    void display()
    {
        float total=0,average=0;
        for(int i=0;i<5;i++)
        {
             total += marks[i];
        }
        cout<<roll_number<<" "<<total<<" "<<(total)/5<<"\n";
    }
};