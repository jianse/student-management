#include "LoginForm.h"

LoginForm::LoginForm()
{
}


LoginForm::~LoginForm()
{
}

void LoginForm::show()
{
	File userfile("user.dat");
	bool singal = true;
	do
	{
		vector<UserBean> users;
		users= userfile.loadall<vector<UserBean>, UserBean>(users);
		if (users.empty())
		{
			setadmin();
		}
		else
		{
			bool contans = false;
			UserBean user = getuser();
			for (vector<UserBean>::iterator i = users.begin(), e = users.end(); i != e; i++)
			{
				if (*i == user)
				{
					contans = true;
					if (user.ispass(*i))
					{
						user = (*i);
						switch (user.getrank())
						{
						case 0:
							showadminform(user);
							break;
						case 1:
							showteacherform(user);
							break;
						case 2:
							showstudentform(user);
							break;
						default:
							break;
						}
						break;
					}
					else
					{
						cout << "password error" << endl;
						system("pause");
						break;
					}
				}
			}
		}

	} while (singal);
	userfile.close();
}

//void LoginForm::login()
//{
//		bool flag = true;
//		string username, password;
//		cout << menu;
//		cout << "UserName:";
//		cin >> username;
//		cout << "Password:";
//		cin >> password;
//		UserBean user(username,password), luser;
//		while (!(userfile.in.eof()))
//		{
//			userfile.in >> luser;
//			if (user==luser)
//			{
//				flag = false;
//				if (user.ispass(luser))
//				{
//					switch (luser.getrank())
//					{
//					case 0:
//						showadminform(luser);
//						break;
//					case 1:
//						showteacherform(luser);
//						break;
//					case 2:
//						showstudentform(luser);
//						break;
//					default:
//						break;
//					}
//					break;
//				}
//				else
//				{
//					cout << "password error" << endl;
//					break;
//				}
//			}
//			
//		}
//		if (flag)
//		{
//			cout << "no such user\n";
//		}
//		
//	}
//	
//	return;
//}

void LoginForm::setadmin()
{
	string pwd;
	cout << "before use this system you must set your admin password\n";
	cin >> pwd;
	UserBean user("admin", pwd);
	user.setrank(0);
	user.setsid("0");
	File userfile("user.dat");
	userfile.write(user);
	userfile.close();
	//login();
}

UserBean LoginForm::getuser()
{
	string username, password;
	cout << menu;
	cout << "UserName:";
	cin >> username;
	cout << "Password:";
	cin >> password;
	UserBean user(username, password);
	return user;
}

void LoginForm::showadminform(UserBean user)
{
	AdminForm adminform(user);
	adminform.show();
}

void LoginForm::showteacherform(UserBean user)
{
	TeacherForm teacherform(user);
	teacherform.show();
}

void LoginForm::showstudentform(UserBean user)
{
	StudentForm studentform(user);
	studentform.show();
}

