#include <iostream>
#include <cstring>
#include <locale>
#include <stdlib.h>
using namespace std;

class DomesticAnimal{
protected:
    char weight[20];
    char price[50];
    char color[100];
public:
    DomesticAnimal(){
        strcpy(weight, "30 ��");
        strcpy(price, "30 0000 ������");
        strcpy(color, "�����");}
    DomesticAnimal(char* p1, char* p2, char* p3){
        strcpy(weight, p1);
        strcpy(price, p2);
        strcpy(color, p3);}
    void print(){
        cout << "�����: DomesticAnimal\n";
        cout << "���:   " << weight << '\n';
        cout << "����:  " << price << '\n';
        cout << "����:  " << color << '\n';}
};

class Cow: virtual public DomesticAnimal{
public:
    Cow(): DomesticAnimal(){}
    Cow(char* p1, char* p2, char* p3):DomesticAnimal(p1,p2,p3){}
    void print(){
        cout << "��������: Cow\n";
        DomesticAnimal::print();}
};

class Buffalo: virtual public DomesticAnimal{
public:
    Buffalo():DomesticAnimal(){}
    Buffalo(char* p1, char* p2, char* p3):DomesticAnimal(p1,p2,p3){}
    void print(){
        cout << "��������: Buffalo\n";
        DomesticAnimal::print();}
};

class Beefalo: public Cow, public Buffalo{
public:
    Beefalo(){
        strcpy(weight, "5 ��");
        strcpy(price, "10 000 ������");
        strcpy(color, "׸����");}
    Beefalo(char* p1, char* p2, char* p3){
        strcpy(weight, p1);
        strcpy(price, p2);
        strcpy(color, p3);}
    void print(){
        cout << "��������: Beffalo\n";
        DomesticAnimal::print();}
};

int main(){
	setlocale(LC_ALL, "RUS");
	Buffalo c;
	Beefalo b("30 ��", "40 000 ������", "׸���-�����");
	c.print();
	b.print();
}
