#include <iostream>
using namespace std;
typedef struct NODE
{

}node;
typedef int I;
using I=int;
typedef void(**p)(int,const string&);
using FP=void(*)(int,const string&);
//������Ԫ���� ��
class B {


};
class A {
public:
	  void	run(school s){
		  s.schoolName;
	}
};
void start(school s){
	s.schoolType;
}
//����ȡַ����&ȡ����ַ�Ľ�Ϊ��ֵ��ʣ�µĶ�����ֵ
class school{
public:
	friend void start(school s);
	friend class A;
	string schoolName;
	string schoolType;
	string address;
	~school(){
	}
	//this���Զ�����ȥһ����������Ϊ ���г�Ա��������Ҫ��һ��thisָ��
	school(std::string schoolName, std::string schoolType, std::string address){
		this->schoolName = schoolName;
		this->address = address;
		this->schoolType = schoolType;
	}
	 school( school&& other) :schoolName(other.schoolName), schoolType(other.schoolType),address(other.address)
	  {
		  cout<<"�ƶ�����"<<endl;
		master=other.master;
		  other.master=NULL;
	  }
void run(){
	school s1("����ʯ�ʹ�ѧ", "��ѧ", "����");
	school s2("��һũ�Ѵ�ѧ", "��ѧ", "����");
	swap(s1,s2);
