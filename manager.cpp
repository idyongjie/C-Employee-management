#include"manager.h"
manager::manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
void manager::showinfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t职工姓名： " << this->m_Name
		<< "\t职工岗位： " << this->getDeptName()
		<< "\t岗位职责：完成老板的任务，交给员工任务" << endl;
}
string manager::getDeptName()
{
	return string("经理");
}