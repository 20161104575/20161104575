#include<iostream>
using namespace std;
struct student
{
	char name[50];
	char num[12];
	int age;
	struct student *next;
};
int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=new student;
	q=head;
	p=q;
	cin>>p->name;
	cin>>p->num;
	cin>>p->age;
	while(cout<<"1or2?",cin>>s,s==1)//输入1继续添加输入2结束输入 
	{
		p=new student;
		q->next=p;
		q=p;
		cin>>p->name;
		cin>>p->num;
		cin>>p->age;
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<p->name<<" "<<p->num<<" "<<p->age<<endl;
		p=p->next;
	}
	p=head; 
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
}
