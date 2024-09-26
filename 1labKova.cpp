#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

class Triangle{
    public:
        Triangle(double side1, double side2){
            this -> side1 = side1;
            this -> side2 = side2;
        };

        double getFirstSide(){
            return side1;
        };

        double getSecondSide(){
            return side2;
        };

        void setFirstSide(double side1){
            this -> side1 = side1;
        };

        void setSecondSide(double side2){
            this -> side2 = side2;
        };

        void setProcentSide1 (int pr){
            this -> side1 = side1*(1+(pr/100));
        };

        void setProcentSide2 (int pr){
            this -> side2 = side2*(1+(pr/100));
        };

        double getRad(){
            double c = pow((pow(side1, 2) + pow(side2, 2)), 0.5);
            return c/2;
        };

        double getAngle1(){
            double tg_a = side1/side2;
            return atan(tg_a)*180/PI;
        }

        double getAngle2(){
            return 90 - getAngle1();
        }
    private:
        double side1;
        double side2;
};

int main(){
    Triangle tr = Triangle(3, 4);

    cout << tr.getAngle1() << endl;
    cout << tr.getAngle2() << endl;

    return 0;
}
