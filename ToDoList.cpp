#include<iostream>
#include<vector>
#include<string>
using namespace std;

//1. Add Task
void addTask(vector<vector<string>>&table)
{
    string task;
    cin.ignore();
    cout<<"Enter task: ";
    getline(cin, task);
    table.push_back({task, "pending"});
}

//2. Remove task
void removeTask(vector<vector<string>>&table)
{
    if(table.size()==1)
    {
        cout<<"NO task to remove."<<endl;
        return;
    }
    int number;
    cout<<"Task number: ";
    cin>>number;
    table.erase(table.begin() + number);
}

// 3. View All Task
void viewAll(vector<vector<string>>&table)
{
    if(table.size()==1)
    {
        cout<<"Noting to do."<<endl;
        return;
    }
    cout<<"Task number      Task                Status"<<endl;
    for(int i=1; i<table.size(); i++)
    {
        cout<<i<<"                "<<table[i][0]<<"              "<<table[i][1]<<endl;
    }
}

// 4.View tasks by status
void viewTask(vector<vector<string>>&table)
{
    if(table.size()==1)
    {
        cout<<"Noting to do."<<endl;
        return;
    }
    string status;
    cout<<"Task Status: ";
    cin>>status;
    cout<<"Task number      Task                Status"<<endl;
    for(int number=1; number<table.size(); number++)
    {
        if(table[number][1]==status)
        cout<<number<<"                "<<table[number][0]<<"              "<<table[number][1]<<endl;
    }
}

// 5. Update task
void update(vector<vector<string>>&table)
{
    if(table.size()==1)
    {
        cout<<"No task to update."<<endl;
        return;
    }
    int number; 
    cout<<"Task- number: ";
    cin>>number;
    if(table[number][1]=="pending")
        table[number][1]="completed";
    else
        table[number][1]=="pending";
}

int main()
{
    vector<vector<string>>table;
    table.push_back({"Task", "status"});
    int option=-1;
    cout<<"_____To-Do List_____\n\n.....Option.....\n1. Add Task:\n2. Remove Task: \n3. View All Task: \n4. View Tasks by status: \n5. Update Task: \n6. Exit";
    while(option!=6)
    {
        cout<<"\nEnter the option: ";
        cin>>option;
        switch (option)
        {
            case 1:
                addTask(table);
                break;
            case 2:
                removeTask(table);
                break;
            case 3:
                viewAll(table);
                break;
            case 4:
                viewTask(table);
                break;                        
            case 5:
                update(table);
                break;
            case 6:
                option=6;
                break;
        }
    }
    return 0;
}                