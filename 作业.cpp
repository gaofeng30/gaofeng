#include <iostream>
using namespace std;
typedef struct NODE
{

}node;
typedef int I;
using I=int;
typedef void(**p)(int,const string&);
using FP=void(*)(int,const string&);
//声明友元函数 类
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
//能用取址符号&取出地址的皆为左值，剩下的都是右值
class school{
public:
	friend void start(school s);
	friend class A;
	string schoolName;
	string schoolType;
	string address;
	~school(){
	}
	//this是自动传进去一个参数，因为 所有成员方法都需要传一个this指针
	school(std::string schoolName, std::string schoolType, std::string address){
		this->schoolName = schoolName;
		this->address = address;
		this->schoolType = schoolType;
	}
	 school( school&& other) :schoolName(other.schoolName), schoolType(other.schoolType),address(other.address)
	  {
		  cout<<"移动构造"<<endl;
		master=other.master;
		  other.master=NULL;
	  }
void run(){
	school s1("东北石油大学", "大学", "大庆");
	school s2("八一农垦大学", "大学", "大庆");
	swap(s1,s2);
