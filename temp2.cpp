#include<iostream> 

using namespace std;
class India
{
    public:
    struct Bix
    {
        int   x;
        float y;
        char c;
        void Function(void)
        {
            y = x = (x = 4*4); 
            y = --y * y;
        }
        void Display()
        {
        	cout << x << endl;
            cout<< y << endl;
            cout << c <<endl;
        } 
    }B; 
}I;
 
int main()
{
    //India I;
     I.B.Display(); 



    //I.B.Display(); 
    return 0;
}
