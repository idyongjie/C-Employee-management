#include"boss.h"

boss::boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
void boss::showinfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t职工姓名： " << this->m_Name
		<< "\t职工岗位： " << this->getDeptName()
		<< "\t岗位职责：管理所有事" << endl;
}
string boss::getDeptName()
{
	return string("老板");
}