
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
  int l,b,h;
  public:
    Box():l(0),b(0),h(0)
    {}
    Box(int l, int b, int h):l(l),b(b),h(h)
    {}
    Box(const Box& b)
    {
        this->l = b.l;
        this->h=b.h;
        this->b=b.b;
    }
    int getLength()
    {
        return l;
    }
    int getHeight()
    {
        return h;
    }
    int getBreadth()
    {
        return b;
    }
    long long CalculateVolume(){
        return (long long)l*h*b;
    }
    bool operator<(const Box& b){
        if(this->l<b.l)
            return true;
        else if(this->l==b.l && this->b<b.b)
            return true;
        else if(this->l==b.l && this->b==b.b && this->h<b.h)
            return true;
        return false;
    }
};
ostream& operator<<(ostream& out, Box& B)
{
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return out;
}