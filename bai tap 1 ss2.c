//1 tao chuong trinh
#include <stdio.h>
#include <math.h>
//2 tao main
int main(){
	//3 khai bao va khoi tao gia tri cac bien theo yeu cau
	float edge_square = 2;//canh hinh vuong
	float length = 5;//chieu dai hcn
	float width = 3;//chieu rong hcn
	float radius = 4;// ban kinh duong tron
	//4 khai bao hang so PI
	const float PI = 3.14;
	//5 tinh chu vi dien tich cac hinh
	float square_perimeter = edge_square * 4;// chu vi hinh vuong
	float arae_square = edge_square * edge_square;// dien tich hinh vuong
	float rectangle_perimeter = (length + width)*2;// chu vi hcn
	float arae_rectangle = length * width;// dien tich hcn
	float circle_perimeter = (radius * 2)*PI;// chu vi hinh tron
	float arae_circle = (radius * radius)*PI;// dien tich hinh tron 
}

