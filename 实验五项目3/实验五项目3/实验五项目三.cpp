#include<iostream>
using namespace std;
class cuboid {
private:
	int l;
	int w;
	int h;
	int v;
public:
	void shuju() {
		cin >> l;
		cin >> w;
		cin >> h;
	}
	int getv() {
		v = l * w * h;
		return v;
	}
	int coutv() {
		return v;
	}
}cuboid1, cuboid2,cuboid3;
int main() {
	cout << "�����һ���������ĳ������ߣ�" << endl;
	cuboid1.shuju();
	cout << "����ڶ����������ĳ������ߣ�" << endl;
	cuboid2.shuju();
	cout << "����������������ĳ������ߣ�" << endl;
	cuboid3.shuju();
	cuboid1.getv();
	cuboid2.getv();
	cuboid3.getv();
	cout << "��һ��������������" << cuboid1.coutv() << endl;
	cout << "�ڶ���������������" << cuboid2.coutv() << endl;
	cout << "������������������" << cuboid3.coutv() << endl;

}