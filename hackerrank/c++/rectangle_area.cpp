
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    protected:
    int height;
    int width;
    public:
    void display()
    {
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea:public Rectangle {
    public:
    void read_input()
    {
        cin>>width>>height;
    }
    void display()
    {
        cout<<width*height<<endl;
    }
};