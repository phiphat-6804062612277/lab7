#inclued <stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
  	//a : ไม่มีข้อผิดพลาด
	functionM();
	//b : ไม่มีข้อผิดพลาด แต่มีจุดน่าคิดคือ functionM return double แต่เก็บค่า Int
	a = functionM();
	//c : ไม่มีข้อผิดพลาด แต่มีจุดน่ากังวลเรื่องชนิด ตัวแปร ที่ return หรือ เก็บไว้
	b = functionN(a, b);
	//d : ไม่มีข้อผิดพลาด
	r = functionO(r,a,s,b);
	//e : มีข้อผิดพลาด เพราะ too many arguments to function 'functionP'
	s = functionP(a,b,c,d,e);
	//f : ไม่มีข้อผิดพลาด
	u = functionM();
	//g : ไม่มีข้อผิดพลาด แต่มีจุดน่ากังวลเรื่องชนิด ตัวแปร
	c = d + functionN(r,s);
	//h : ไม่มีข้อผิดพลาด 
	t = s * functionO(r, a, r, a);
	//i : ไม่มีข้อผิดพลาด แต่มีจุดน่ากังวลเรื่องชนิด ตัวแปร
	a = v + functionP(r, s, t, t);
	//j : ไม่มีข้อผิดพลาด แต่มีจุดน่ากังวลเรื่องชนิด ตัวแปร
	functionP(functionN(a, a), s, t, t+r);
	//k : ไม่มีข้อผิดพลาด แต่มีจุดน่ากังวลเรื่องชนิด ตัวแปร
	v = functionP(functionN(a, a), s, t, t+r);
}
