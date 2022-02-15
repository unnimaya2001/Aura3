#include <iostream>
#include<string>
using namespace std;

struct student{
    int roll_num;
    float mark[5];
    string name,branch;
}S;
void student_details(int R,string N,string B)
{
    S.roll_num=R;
    S.name=N;
    S.branch=B;
    cout<<"Student details are stored successfully"<<endl;
}
void student_marks()
{
    cout<<"Enter"<<endl<<"\tSubject 1 mark:";
    cin>>S.mark[0];
    cout<<"\tSubject 2 mark:";
    cin>>S.mark[1];
    cout<<"\tSubject 3 mark:";
    cin>>S.mark[2];
    cout<<"\tSubject 4 mark:";
    cin>>S.mark[3];
    cout<<"\tSubject 5 mark:";
    cin>>S.mark[4];
    cout<<"\tMarks of students are successfully stored."<<endl;
}

void insert_mark(int key)
{
    if(key>5)
{
    cout<<"invalid option"<<endl;

}else
    {
        if(S.mark[key-1]==-1)
        {
            cout<<"Enter mark that is to be inserted as the mark of subject"<<key<<" "<<endl;
            cin>>S.mark[key-1];
            cout<<"Mark is inserted successfully"<<endl;
        }
        else
        {
            cout<<"Mark is already inserted for the subject"<<key<<"."<<endl;
           
           
        }
    }
}
void delete_mark(int key)
{
    if(key>5)
{
    cout<<"invalid option"<<endl;

}
else
   {
       S.mark[key-1]=-1;
   
        cout<<" Mark of the subject"<<key<<" is deleted "<<endl;
    }
}

void modify_mark(int key)

{
    int value;
    
    if(key>5)
{
    cout<<"invalid option"<<endl;

}
else
    {
        if(S.mark[key-1]!=-1)
        {
            cout<<"Enter the new mark of subject"<<key<<":"<<endl;
            cin>>value;
            S.mark[key-1]=value;
            cout<<"Mark is modified successfully"<<endl;
        }
        else
        {
            cout<<"Mark is not inserted for the subject"<<key<<".Please select insert operation"<<endl;
           
           
        }
    }
}
void mark_operations()

{

int your_choice,subject_choice;

while(your_choice!=6)

{
    cout<<"\tPress"<<endl<<"\t1 to insert mark"<<endl<<"\t2 to delete mark"<<endl<<"\t3 to modify mark"<<endl<<"\t6 to exit this menu"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>your_choice;
    
    switch(your_choice){
       
        case 1:{
            cout<<"\tPress the key accordingly to insert the mark of the particular subject"<<endl<<"\t1 for subject 1"<<endl<<"\t2 for subject 2"<<endl<<"\t3 for subject 3"<<endl<<"\t4 for subject 4"<<endl<<"\t5 for subject 5"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>subject_choice;
            insert_mark(subject_choice);
            break;
        }
        
        case 2:{
            cout<<"\tPress the key accordingly to delete the mark of the particular subject"<<endl<<"\t1 for subject 1"<<endl<<"\t2 for subject 2"<<endl<<"\t3 for subject 3"<<endl<<"\t4 for subject 4"<<endl<<"\t5 for subject 5"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>subject_choice;
            
            delete_mark(subject_choice);
            break;
        }
        
        case 3:{
            cout<<"\tPress the key accordingly to modify the mark of the particular subject"<<endl<<"\t1 for subject 1"<<endl<<"\t2 for subject 2"<<endl<<"\t3 for subject 3"<<endl<<"\t4 for subject 4"<<endl<<"\t5 for subject 5"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>subject_choice;
           
            modify_mark(subject_choice);
            break;
           
        }
        case 6:{
            cout<<"Exit back to main menu"<<endl;
            break;
        }
        default:
        cout<<"Invalid entry";
        break;
    }
}
}
void view_mark(int key)
{
    if(S.mark[key-1]==-1)
    {
    cout<<"\tMark is unavailable"<<endl;
    }
    else
    {
        cout<<"Subject"<<key<<"-"<<S.mark[key-1]<<endl;
    }
}
void display_studentdetails()
{
    cout<<"\tStudent name:"<<S.name<<endl;
    cout<<"\tstudent branch:"<<S.branch<<endl;
    cout<<"\tstudent roll number"<<S.roll_num<<endl;
    cout<<"\tNewly updated marks of 5 subjects"<<endl;
   
    view_mark(1);
    view_mark(2);
    view_mark(3);
    view_mark(4);
    view_mark(5);
}

int main()

   { 
    int roll_num;
    string name,branch;
    
    while(true){
    cout<<"press"<<endl<<"\t1 to enter details of the student"<<endl<<"\t2 to enter the mark of the student"<<endl<<"\t3 to insert/delete/modify the mark of the student"<<endl<<"\t4 to display the details of the student with marks"<<endl<<"\t5 to exit"<<endl;
    cout<<"Enter your choice"<<endl;
    
    int choice;
    
    cin>>choice;
   
    if(choice==1)
    {cout<<"Enter name of the student"<<endl;
    cin>>name;
    cout<<"Enter roll number of the student"<<endl;
    cin>>roll_num;
    cout<<"Enter the branch of the student"<<endl;
    cin>>branch;
   
    student_details(roll_num, name, branch);
    }
    else if(choice==2)
    {
        student_marks();
    }
    else if(choice==3)
    {
        mark_operations();
    }
    else if(choice==4)
    {
        display_studentdetails();
    }
    else if(choice==5)
    {
        exit(0);
    }
    else
    {
    cout<<"invalid choice"<<endl;
    }
    }
    return 0;
}
