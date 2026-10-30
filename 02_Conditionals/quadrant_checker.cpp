 #include <iostream>
using namespace std;

int main (){
    int x,y;
    cout << "Enter abscissa x : ";
    cin >> x;
    cout << "Enter ordinate y : ";
    cin >> y;
    
    if (x==0){
        if (y==0){
            cout << "The point (0,0) is the origin";
        }
        else{
            cout << "Point (" <<x<<"," << y <<") lies on the y axis.";
        }
    }
    else if (y==0){
        cout << "Point (" <<x<<"," << y <<") lies on the x axis.";
    }
    else if (y>0){
        if (x>0){
            cout << "Point (" <<x<<"," << y <<") lies in the first quadrant";
        }
        else{
            cout << "Point (" <<x<<"," << y <<") lies in the second quadrant";
        }
    }
    else{
        if (x>0){
            cout << "Point (" <<x<<"," << y <<") lies in the fourth quadrant";
        }
        else{
            cout << "Point (" <<x<<"," << y <<") lies in the third quadrant";
        }
    }
    
}