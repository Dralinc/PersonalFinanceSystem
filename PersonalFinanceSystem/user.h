#pragma once
using namespace std;

class User
{
private:
	//用户属性
	int id;				//用户编号
	string name;		//用户登录名
	string pwd;			//用户登录密码
	string realName;	//真实姓名
	//银行卡属性
	string id;			//卡号,注意是字符串类型
	string password;	//交易密码
	int userId;			//所属用户号
	string bankName;	//银行名称
	double balance;		//余额
	//交易属性
	int id;				//交易编号
	string cardId;		//交易卡号
	double tradeNumber;	//交易金额
	string datetime;	//交易时间
	string type;		//交易类型，值仅为收入与支出