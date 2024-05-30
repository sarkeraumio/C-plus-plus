//to do list
//add task
//view tasks
//mark them as completed

#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{

    cout<<"Tasks to do: "<<endl;

    for(int i=0; i<task_count ; i++)
    {
        cout<<"Task "<<i<<" "<<tasks[i]<<endl;

    }
}

int main()
{
    string tasks[20];
    int task_count = 0;

    int option = -1;
    while(option)
    {
        cout<<"TO DO LIST"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2. View Tasks"<<endl;
        cout<<"3. Mark them as complete"<<endl;
        cout<<"0. End program"<<endl;
        cin>>option;

        switch(option)
        {
        case 1:
            {
                if(task_count > 9)
                {
                    cout<<" Task is full "<<endl;

                }
                else
                {

                    cout<<"Enter a new task "<<endl;
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                }
                break;

            }
        case 2:
            print_tasks(tasks,task_count);
            break;
        case 3:
            {
                int del_task = 0;
                cout<<"Enter the task number that is completed: " ;
                cin>>del_task;
                if(del_task<0 || del_task >9)
                {
                    cout<<"You entered invalid tasks ";
                    break;
                }
                for(int i = del_task; i<task_count ; i++ )
                {
                    tasks[i] = tasks[i+1];
                }
                task_count = task_count-1;
                break;
            }
        }
    }
    return 0;
}
