#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string StudentID;
    string C_programing;
    string Logic;
    string Python;
    string Calculas;
    string Elec;
    int numbers_of_student;



    fstream myfile;

    myfile.open("mytable.txt",ios::out);
    myfile<< "<tr><th>StudentID" << "\n\t" << "<th>C_programing" << "\n\t" << "<th>Logic" << "\n\t" << "<th>Python"<< "\n\t" << "<th>Calculas"<< "\n\t" << "<th>Elec";


    int c=0;
    int n=1;
    cout << "Enter numbers of student:";
    cin >> numbers_of_student ;
    cin.ignore();
    while(numbers_of_student>c)
    {

        cout << "\nStudentID " << n << " :";
        getline(cin, StudentID);

        cout << "\nC_programing " << " :";
        getline(cin, C_programing);


        cout << "\nLogic " << " :";
        getline(cin, Logic);

        cout << "\nPython " << " :";
        getline(cin, Python);

        cout << "\nCalculas " << " :";
        getline(cin, Calculas);

        cout << "\nElec " << " :";
        getline(cin, Elec);

        myfile<< "\n</tr><tr>\n\t<th>" << StudentID << "\n\t" << "<th>" << C_programing << "\n\t" << "<th>" << Logic << "\n\t" << "<th>" << Python << "\n\t" << "<th>" << Calculas << "\n\t" << "<th>" << Elec;

        c=c+1;
        n=n+1;
    }
    myfile.close();



    {



    ifstream first_file;
    string h= "<!DOCTYPE html>\n<html>\n<head> <style> table, th, td { border: 2px solid green; } </style> </head><body>\n<table>\n";
    string t= "</table>";
    string e= "</th>\n";

    ofstream second_file;
    first_file.open("mytable.txt", std::ios::app);
    second_file.open("mytable.html");
    second_file << h;
    string n;
    while(getline(first_file,n)){
        second_file << n;
        second_file << e;
    }
    second_file<< t;
    }


    fstream read_my_file;
    read_my_file.open("mytable.txt",ios::in);
    if (read_my_file.is_open()){
        string content;
        while(getline(read_my_file,content)){
            cout << content << endl;
        }
        read_my_file.close();
    }





    system("mytable.html");


}
