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
	cout << "输入第一个长方柱的长，宽，高：" << endl;
	cuboid1.shuju();
	cout << "输入第二个长方柱的长，宽，高：" << endl;
	cuboid2.shuju();
	cout << "输入第三个长方柱的长，宽，高：" << endl;
	cuboid3.shuju();
	cuboid1.getv();
	cuboid2.getv();
	cuboid3.getv();
	cout << "第一个长方体的体积是" << cuboid1.coutv() << endl;
	cout << "第二个长方体的体积是" << cuboid2.coutv() << endl;
	cout << "第三个长方体的体积是" << cuboid3.coutv() << endl;

}