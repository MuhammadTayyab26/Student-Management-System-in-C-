#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

struct student
{
	int rollno;
	char name[32];
	char clas[10];
	char statu;
	int data;
	int mount;
	int year;
	
};

void faddstudentrecord()
{
	int n,i;
	cout<<"\nhow many records u want to enter:\t";
	cin>>n;
	student *s=new student[n];
	for(i=0; i<n;i++)
	{
		cout<<"\nenter roll no\n";
		cin>>(s+i)->rollno;
		cout<<"enter name\n";
		cin>>(s+i)->name;
		cout<<"enter class\n";
		cin>>(s+i)->clas;
		cout<<"enter the data/mounth/year\n";
		cin>>(s+i)->data>>(s+i)->mount>>(s+i)->year;
		cout<<"enter status 'A , 'P' , L'\n";
		cin>>(s+i)->statu;
		cout<<endl;
	}
	ofstream ofs("student.bin",ios_base::app);
	for(i=0;i<n;i++)
	{
	ofs.write(reinterpret_cast<char*>(&s[i]),sizeof(s[i]));
	} 
	ofs.close();
}
void fdisplyallrecord()
{
     student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
		cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		i++;
	}
	ifs2.close();
}
 

void fspecificbyrollno()
{
	student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	
int spe_rollno;
bool found;
cout<<"\nenter roll number you want specific roll number "<<endl;
cin>>spe_rollno;

ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		if(spe_rollno==(s2+i)->rollno)
		{
	    found=true;
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
	    cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		 break;
		}
		
		i++;
	}
	ifs2.close();
 


if(found==false)
{
	cout<<"\nno record found"<<endl;
}
 

}



void fspecificbyname()
{
	student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	
char spe_name[32];
bool found;
cout<<"\nenter name you want specific name "<<endl;
cin>>spe_name;

ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		if(spe_name==(s2+i)->name)
		{
	    found=true;
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
	    cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		 
		}
		
		i++;
	}
	ifs2.close();
 


if(found==false)
{
	cout<<"\nno record found"<<endl;
}
 

}



void fspecificbydata()
{
	student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	
int spe_data;
int spe_mount;
int spe_year;
bool found;
cout<<"\nenter data/mounth/year you want specific data/mounth/year "<<endl;
cin>>spe_data>>spe_mount>>spe_year;

ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		if(spe_data==(s2+i)->data&&spe_mount==(s2+i)->mount&&spe_year==(s2+i)->year)
		{
	    found=true;
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
	    cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		 
		}
		
		i++;
	}
	ifs2.close();
 


if(found==false)
{
	cout<<"\nno record found"<<endl;
}
 

}

void fspecificbyclas()
{
	student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	
char spe_class[10];
bool found;
cout<<"\nenter class you want specific class "<<endl;
cin>>spe_class;

ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		if(spe_class==(s2+i)->clas)
		{
	    found=true;
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
	    cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		 
		}
		
		i++;
	}
	ifs2.close();
 


if(found==false)
{
	cout<<"\nno record found"<<endl;
}
 

}

void fspecificbystatus()
{
	student s;
	int count=0;
	ifstream ifs("student.bin");
	while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
	{
		count++;
	}
	ifs.close();
	
char spe_status;
bool found;
cout<<"\nenter status you want specific status "<<endl;
cin>>spe_status;

ifstream ifs2("student.bin");
	student s2[count];
	int i=0;
	while(ifs2.read(reinterpret_cast<char*>(&s2[i]),sizeof(s2[i])))
	{
		if(spe_status==(s2+i)->statu)
		{
	    found=true;
		cout<<"\nroll is = "<<(s2+i)->rollno<<"\n";
		cout<<"name is = "<<(s2+i)->name<<"\n";
	    cout<<"class is = "<<(s2+i)->clas<<"\n";
		cout<<"data/mounth/year = "<<(s2+i)->data<<"/"<<(s2+i)->mount<<"\n"<<(s2+i)->year<<"\n";
		cout<<"status is = "<<(s2+i)->statu<<"\n";
		cout<<endl;	
		 
		}
		
		i++;
	}
	ifs2.close();
 


if(found==false)
{
	cout<<"\nno record found"<<endl;
}
 

}






int main ()
{

	char ch;
	while (1)
	{
	  cout<<"\n1=add number"<<endl;
	  cout<<"2=displyalrecord"<<endl;
	  cout<<"3=specific record  byroll number "<<endl;
	  cout<<"4=specific record by name"<<endl;
	  cout<<"5=specific record by data/mounth/year"<<endl;
	  cout<<"6=specific record  by class "<<endl;
	  cout<<"7=specific record by  class status "<<endl;
	  cout<<"8=exit"<<endl;
	  ch=getche();
	  if (ch=='1')
	  faddstudentrecord ();
	  else
	  if (ch=='2')
	  fdisplyallrecord();
	  if(ch=='3')
	  fspecificbyrollno();
	  if(ch=='4')
	  fspecificbyname();
	  if(ch=='5')
	  fspecificbydata();
	  if(ch=='6')
	  fspecificbyclas();
	   if(ch=='7')
	  fspecificbystatus();
	   if(ch=='8')
	  break;
	  else
	  cout<<"invalid number,input number again"<<endl;
    }
    getche ();
    return 0;

    }

