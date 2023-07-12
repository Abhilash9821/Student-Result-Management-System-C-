#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
using namespace std;

bool authenticateUser(const string& username, const string& password) {
    // Compare the provided username and password with the stored values
    string storedUsername = "a";
    string storedPassword = "b";
    return (username == storedUsername && password == storedPassword);
}

class student {
private:
    string s_name, m_name, f_name, c_name, cr_name, usn, rgln, dd, mm, yy, grade, result;
    float per;
    int oop, dsu, dte, dms, cgr,sem, sum;

public:
    void menu();
    void insert();
    void display();
    void deleted();
    void search1();
};



void student::menu() {
start:
    system("cls");
    int choice;
    string rollno;
    student s;
    char x;

    cout << "\n\n\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t |    STUDENT RESULT MANAGEMENT SYSTEM    | " << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t 1. Enter New Record " << endl;
    cout << "\t\t\t\t 2. Display Record " << endl;
    cout << "\t\t\t\t 3. Delete Record " << endl;
    cout << "\t\t\t\t 4. Search Record by USN " << endl;
    cout << "\t\t\t\t 5. Exit " << endl;

    cout << "\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl<<endl<<endl;
    cout << " \t\t\t\t--> Please Enter Your Choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            do {
                insert();
                cout << "\n--> Add New Record (y/n)";
                cin >> x;
            } while (x == 'Y' || x == 'y');
            break;

        case 2:
            display();
            break;

        case 3:
            deleted();
            break;

        case 4:
		search1();
            break;

        case 5:
            exit(0);

        default:
            cout << "\n-->Invalid Choice..!! Please Try Again " << endl;
    }
    getch();
    goto start;
}





void student::insert() {
    fstream file;
    system("cls");
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER  |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
 cout << "\t\t\t--> Enter Student Semester : ";
    cin >> sem;
     switch (sem) {
     	 case 1:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
        	
        	
        	
	           	cout<<"\t\t\t-----------------------------------------------"<<endl;	
				cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
				cout<<"\t\t\t-----------------------------------------------"<<endl;	
				cout<<"\t\t\t--> 18CS11 : ";
				cin>>oop;
				cout<<"\t\t\t--> 18CS12 : ";
				cin>>dsu;
				cout<<"\t\t\t--> 18CS13  : ";
				cin>>dte;
				cout<<"\t\t\t--> 18CS14  : ";
				cin>>dms;
				cout<<"\t\t\t--> 18CS15  : ";
				cin>>cgr;
				
//				for semester 1 it is 
				
				
	
				// calculate total marks, percentage, and grade
				sum = oop + dsu + dte + dms + cgr;
				per = sum / 5;
				
				if (per >= 80) {
				    grade = "A";
				    result = "PASS";
				} else if (per >= 60) {
				    grade = "B";
				    result = "PASS";
				} else if (per >= 35) {
				    grade = "C";
				    result = "PASS";
				} else {
				    grade = "-";
				    result = "FAIL";
				}
	
				// creating a file STUDENTRESULT.TXT to store the records of students
				file.open("studentresult1.txt", ios::out | ios::app);
				file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " <<usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				file.close();
	            break;

        case 2:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
			    
			    cout<<"\t\t\t-----------------------------------------------"<<endl;	
				cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
				cout<<"\t\t\t-----------------------------------------------"<<endl;	
				cout<<"\t\t\t--> 18CS21  : ";
				cin>>oop;
				cout<<"\t\t\t--> 18CS22  : ";
				cin>>dsu;
				cout<<"\t\t\t--> 18CS23  : ";
				cin>>dte;
				cout<<"\t\t\t--> 18CS24  : ";
				cin>>dms;
				cout<<"\t\t\t--> 18CS25  : ";
				cin>>cgr;
				
				// calculate total marks, percentage, and grade
				sum = oop + dsu + dte + dms + cgr;
				per = sum / 5;
				
				if (per >= 80) {
				    grade = "A";
				    result = "PASS";
				} else if (per >= 60) {
				    grade = "B";
				    result = "PASS";
				} else if (per >= 35) {
				    grade = "C";
				    result = "PASS";
				} else {
				    grade = "-";
				    result = "FAIL";
				}
				
				// creating a file STUDENTRESULT.TXT to store the records of students
				file.open("studentresult2.txt", ios::out | ios::app);
				file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " <<usn<< " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				file.close();
	            break;

        case 3:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS31  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS32  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS33  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS34  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS35  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult3.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " <<usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;

        case 4:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS41  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS42  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS43  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS44  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS45  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult4.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;
        case 5:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS51  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS52  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS53  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS54  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS55  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult5.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " <<  usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;
            
        case 6:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS61  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS62  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS63  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS64  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS65  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult6.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;

        case 7:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS71  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS72  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS73  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS74  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS75  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult7.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;
            
        case 8:
        	    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
			    cout << "\t\t\t\t\t\t | Add Student Details |" << endl;
			    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        	    cout << "\t\t\t--> Enter Student Name : ";
			    cin >> s_name;
			    cout << "\t\t\t--> Enter Student Mother Name : ";
			    cin >> m_name;
			    cout << "\t\t\t--> Enter Student Father Name : ";
			    cin >> f_name;
			    cout << "\t\t\t--> Enter Student collage Name : ";
			    cin >> c_name;
			    cout << "\t\t\t--> Enter Course Name : ";
			    cin >> cr_name;
			    cout << "\t\t\t--> Enter USN  : ";
			    cin >> usn;
			    cout << "\t\t\t--> Enter Birth Date (DD MM YY) : ";
			    cin >> dd >>mm >> yy;
              cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t\t Enter Your Marks Subject Wise "<<endl;
			cout<<"\t\t\t-----------------------------------------------"<<endl;	
			cout<<"\t\t\t--> 18CS81  : ";
			cin>>oop;
			cout<<"\t\t\t--> 18CS82  : ";
			cin>>dsu;
			cout<<"\t\t\t--> 18CS83  : ";
			cin>>dte;
			cout<<"\t\t\t--> 18CS84  : ";
			cin>>dms;
			cout<<"\t\t\t--> 18CS85  : ";
			cin>>cgr;
			
			// calculate total marks, percentage, and grade
			sum = oop + dsu + dte + dms + cgr;
			per = sum / 5;
			
			if (per >= 80) {
			    grade = "A";
			    result = "PASS";
			} else if (per >= 60) {
			    grade = "B";
			    result = "PASS";
			} else if (per >= 35) {
			    grade = "C";
			    result = "PASS";
			} else {
			    grade = "-";
			    result = "FAIL";
			}
			
			// creating a file STUDENTRESULT.TXT to store the records of students
			file.open("studentresult8.txt", ios::out | ios::app);
			file << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " <<  usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
			file.close();
            break;

        default:
            cout << "\n-->Invalid Choice..!! Please Try Again " << endl;
    }
    
}






//
//
void student::display() {
	cout<<"\n\t\t\tEnter the SEMESTER: " ;
	cin>> sem;
		system("cls");
		fstream file;
	switch(sem){
		case 1: 
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 1 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult1.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
						cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS11      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS12      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS13      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS14      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS15      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				    
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
				
		case 2: 
			
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 2 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult2.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS21      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS22      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS23      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS24      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS25      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				   
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 3: 
				
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 3 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult3.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS31      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS32      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS33      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS34      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS35      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				    
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 4: 
				
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 4 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult4.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS41      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS42      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS43      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS44      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS45      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				    
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 5: 
			
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 5 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult5.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS51      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS52      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS53      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS54      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS55      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 6: 
			
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 6 RESULT DETAILS|" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult6.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> m_name >> f_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS61      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS62      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS63      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS64      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS65      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				       
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 7: 
			
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 7 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult7.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS71      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS72      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS73      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS74      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS75      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				    
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		case 8: 
				
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t | SEMESTER 8 RESULT DETAILS |" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
				file.open("studentresult8.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found ......";
				    file.close();
				} else {
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        cout << "\n\n\t CLASS  : " << cr_name << endl;
				        cout << "\t COLLAGE  : " << c_name << endl;
				
				
				        cout << "\n\n\t STUDENT'S NAME : " << s_name;
				        cout << "\t\t\t\t\t USN : " << usn << endl;
				        cout << "\n\t MOTHER'S NAME : " << m_name;
				        cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
				        cout << "\n\t FATHER'S NAME : " << f_name;
				        cout << "\t\t\t\t\t Regulation : " << usn << endl;
				
				        cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
				        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
				        cout << "\n\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t|\t 18CS81      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS82      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS83      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
				        cout << "\t| \t 18CS84      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t| \t 18CS85      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
				        cout << "\t+----------------------------------------------------------------------------------------+";
				        cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
				      
				
				        cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
				
				        file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    }
				}
				file.close();
				break;
		default:
            cout << "\n-->Invalid Choice..!! Please Try Again " << endl;
			
	}
	
}

// Definition of the delete function












void student::deleted() {
system("cls");
fstream file, file1;
string rollno;
int found = 0;
cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "\t\t\t\t\t\t | Delete Student Record |" << endl;
cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
    cin >> rollno;
    cout << "\n\t\t\t--> Enter SEM from which you want to delete the data : ";
    cin >> sem;
    
    switch(sem){
    	case 1:
	    		// ----------------------------------------------------------------------------------------------------------------- SEMESTER 1------
				file.open("studentresult1.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 1 ......";
				    file.close();
				} else {
				    
				    file1.open("temp1.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult1.txt");
				rename("temp1.txt", "studentresult1.txt");
				}
				break;
		case 2: 
						//----------------------------------------------------------------------------------------------------------------SEMESTER 2
				file.open("studentresult2.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in semester 2 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp2.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult2.txt");
				rename("temp2.txt", "studentresult2.txt");
				}
				break;
		case 3:
							// ----------------------------------------------------------------------------------------------------------------- SEMESTER 3  -----
				file.open("studentresult3.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 3 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp3.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult3.txt");
				rename("temp3.txt", "studentresult3.txt");
				}
				break;
		case 4:
							// ----------------------------------------------------------------------------------------------------------------- SEMESTER 4------
				file.open("studentresult4.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 4 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp4.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult4.txt");
				rename("temp4.txt", "studentresult4.txt");
				}
				break;
		case 5:
							// ----------------------------------------------------------------------------------------------------------------- SEMESTER 5------
				file.open("studentresult5.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 5 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp5.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult5.txt");
				rename("temp5.txt", "studentresult5.txt");
				}
				break;
		case 6: 
						// ----------------------------------------------------------------------------------------------------------------- SEMESTER 6------
				file.open("studentresult6.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 6 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp6.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult6.txt");
				rename("temp6.txt", "studentresult6.txt");
				}
				break;
		case 7:
							// ----------------------------------------------------------------------------------------------------------------- SEMESTER 7------
				file.open("studentresult7.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 7 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp7.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult7.txt");
				rename("temp7.txt", "studentresult7.txt");
				}
				break;
		case 8:
			
				// ----------------------------------------------------------------------------------------------------------------- SEMESTER 8------
				file.open("studentresult8.txt", ios::in);
				if (!file) {
				    cout << "\n\t\t\t No Data Is Found in Semester 8 ......";
				    file.close();
				} else {
				//    cout << "\n\t\t\t--> Enter USN. Of Student Which You Want To delete The Data : ";
				//    cin >> rollno;
				    file1.open("temp8.txt", ios::out | ios::app);
				
				    file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				    while (!file.eof()) {
				        if (rollno != usn) {
				            file1 << " " << s_name << " " << f_name << " " << m_name << " " << c_name << " " << cr_name << " " << usn << " " << dd << " " << mm << " " << yy << " " << oop << " " << dsu << " " << dte << " " << dms << " " << cgr << " " << sum << " " << per << " " << grade << " " << result << "\n";
				
				        } else {
				            found++;
				            cout << "\n\t\t\t Record Is Successfully Deleted.....";
				
				        }
				
				        file >> s_name >> f_name >> m_name >>
				c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
				}
				if (found == 0) {
				cout << "\n\t\t\t Student USN Is Not found...!!! ";
				}
				file.close();
				file1.close();
				remove("studentresult8.txt");
				rename("temp8.txt", "studentresult8.txt");
				}
				break;
		default:
            cout << "\n-->Invalid Choice..!! Please Try Again " << endl;
		
			}
}







// Function to verify the username and password
bool verifyUser(const string& username, const string & password) {
// Replace the following with your own verification logic
string validUsername = "a";
string validPassword = "b";
if (username == validUsername && password == validPassword) {
return true;
} else {
return false;
}
}






void student::search1() {
    system("cls");
    fstream file;
    string rollno;
    int found = 0;
    
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 1 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult1.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS11      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS12      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS13      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS14      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS15      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
     cout << "\n\n\n\n----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 2 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    
    file.open("studentresult2.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//        cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS21      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS22      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS23      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS24      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS25      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
     cout << "\n\n\n\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 3 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult3.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS31      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS32      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS33      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS34      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS35      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
    
     cout << "\n\n\n\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 4 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult4.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS41      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS42      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS43      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS44      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS45      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
    
         cout << "\n\n\n\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 5 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult5.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS51      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS52      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS53      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS54      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS55      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
    
         cout << "\n\n\n\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 6 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult6.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS61      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS62      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS63      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS64      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS65      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
    
         cout << "\n\n\n\n----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 7 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult7.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS71      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS72      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS73      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS74      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS75      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
         cout << "\n\n\n\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t | SEMESTER 8 DETAILS |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    file.open("studentresult8.txt", ios::in);
    if (!file) { 
        cout << "\n\t\t\t No Data Is Found ......";
        file.close();
    } else {
//        cout << "\n\t\t\t--> Enter USN. Of Student To Search: ";
//       cin >> rollno;

        file >> s_name >> f_name >> m_name >> c_name >> cr_name >> usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        while (!file.eof()) {
            if (rollno == usn) {
                found++;
                cout << "\n\n\t CLASS  : " << cr_name << endl;
                cout << "\t COLLAGE  : " << c_name << endl;

                cout << "\n\n\t STUDENT'S NAME : " << s_name;
                cout << "\t\t\t\t\t USN : " << usn << endl;
                cout << "\n\t MOTHER'S NAME : " << m_name;
                cout << "\t\t\t\t\t DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
                cout << "\n\t FATHER'S NAME : " << f_name;
                cout << "\t\t\t\t\t Regulation : " << usn << endl;

                 cout << "\n\t+----------------------------------------------------------------------------------------+";               //whole structure of the result table........
        cout << "\n\t|   Subject Name     | Marks Obtained |\tOut-Of   |  Percentage            |\tGrade    |";
        cout << "\n\t+----------------------------------------------------------------------------------------+";
        cout << "\n\t|\t 18CS81      |\t    "  << oop << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS82      |\t    "  << dsu << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS83      |\t    "  << dte << "        |\t" << 100 << "\t |" << "\t" << per << "%\t          |\t" << grade << "\t |" << endl;
        cout << "\t| \t 18CS84      |\t    "  << dms << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t| \t 18CS85      |\t    "  << cgr << "        |\t" << 100 << "\t |" << "\t\t          |\t\t |" << endl;
        cout << "\t+----------------------------------------------------------------------------------------+";
                cout << "\n\t\t\t\t Total - " << sum << "\t\t\t RESULT - " << result << endl;   
                               cout << "\n\n\t Dated : ";
        

                break;
            }

            file >> s_name >> f_name >> m_name >> c_name >> cr_name >>  usn >> dd >> mm >> yy >> oop >> dsu >> dte >> dms >> cgr >> sum >> per >> grade >> result;
        }

        file.close();
         if (found == 0) {
            cout << "\n\t\t\t No Record Found ......";
        }
    }
    
    
    cout << "\n\n\t Press any key to continue......";
    cin.ignore();
    cin.get();
}














// Main function
int main() {
string username, password;
cout << "\n\n\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t |   ENTER USERNAME AND PASSWORD   | " << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;
cout << "\t\t\t\tEnter username: ";
cin >> username;
cout << "\t\t\t\tEnter password: ";
cin >> password;
// Verify the user credentials
if (!verifyUser(username, password)) {
cout << "Invalid username or password. Access denied." << endl;
return 0;
}
student s;
s.menu();

getch();
return 0;
}

