# HTML-table-builder
Jade Chuapakdee 64011397

pseudocode


declare variable myfile as fstream type

myfile.open(name as mytable.txt,writing mode)
<tr><th>StudentId << \n\t << <th>C_programing << \n\t << <th>Logic << \n\t << <th>Python << \n\t <th>Calculus << \n\t << <th>Elec write into myfile

print(Enter numbers of student: )
get numbers of student
cin.ignore() for avoid skipping some line
int c=0
int n=1
While numbers of students greater than C
       print(studentID (order of student) : )
       get student id

       print(C_programing: )
       get grade of C_programing

       print(Logic: )
       get grade of Logic

        print(Python: )
       get grade of Python

       print(Calculus: )
       get grade of Calculus

       print(Elec: )
       get grade of Elec


      write "\n</tr><tr>\n\t<th>" << StudentID << "\n\t" << "<th>" << C_programing << "\n\t" << "<th>" << Logic << "\n\t" << "<th>" << Python << "\n\t" << "<th>" << Calculas << "\n\t" << "<th>" << Elec; into myfile

      c=c+1
      n=n+1

Endwhile

close myfile


declared first_file ifstream type
declared h as string type which contain "<!DOCTYPE html>\n<html>\n<head> <style> table, th, td { border: 2px solid green; } </style> </head><body>\n<table>\n";
declared t as string type which contain <table>
declared e as string type which contain </th>
declared second_file as ofstream type
first_file.open(mytable.txt,set the stream's position indicator to the end of the stream before each output operation)
second_file.open(name as mytable.html)
put variable h into second_file
declared n as string type

While getline function read contents in first_file and store into n
        put n into second_file
        put e into second_file

Endwhile
 put t into second_file

declared read_my_file as fstream type
read_my_file .open(mytable.txt,read mode)

if read_my_file is open then
   declared content as string type
   While getline function read contents in read_my_file and store into content
        print content and new line
   Endwhile

close read_my_file




pass the commands that can be executed

  

