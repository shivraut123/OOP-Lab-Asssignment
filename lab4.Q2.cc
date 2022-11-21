/* C++ program to find Volume using Function Overloading  */    

    #include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(int,int,int);
    int vol(int);
     
    int main()
    {
        int r,h,l,w,h1;
        float r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter side of cuboid:";
        cin>>l>>w>>h1;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Volume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of cuboid is"<<vol(l,w,h1);
        cout<<"\nVolume of sphere is "<<vol(r1);
        return 0;
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    float vol(int l,int w,int h1)
    {
        return (l*w*h1);
    }

     float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    