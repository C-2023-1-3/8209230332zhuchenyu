#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int ax, int ay) :x(ax), y(ay){}
	void setpoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "�޸ĺ�����Ϊ��" << "(" << x << "," << y << ")";
	}
};
int main() {
	Point a(60, 80);
	a.setpoint(5, 4);
	a.display();
}