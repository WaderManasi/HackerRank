/////////////////////////////////////////////////////////////////////////////////
class Student :  public Person{
	private:
		vector<int> testScores;  
        int scores;
        int subs=0;

	public:
        Student(string fn,string ln,int id,vector<int> sc):Person(fn,ln,id)
        {
                this->testScores=sc;
                subs=testScores.size();               
        }
	/////////////////////////////////function to return grade/////////////////
        char calculate()
{           char res;
            double sum=0.0;
            for(int i=0;i<subs;i++)
            {
                sum=sum+testScores[i];
            }
            int avg=sum/subs;
            if(avg<=100 && avg>=90)
            {
                res= 'O';
            }
            else 
            if(avg>=80 && avg<90)
            {
                res= 'E';
            }
            else
            if(avg>=70 && avg<80)
            {
               res= 'A';
            }
            else
            if(avg>=55 && avg<70)
            {
                res= 'P';
            }
            else
            if(avg>=40 && avg<55)
            {
                res= 'D';
            }
            else
            if(avg<40 )
            {
                res= 'T';
            }
            return res;
        }
};
////////////////////////////////////////////////////////////////////////////////
