// Virtual Function, Abstract Class
// 1. Create a base class called shape. Use this class to store two double type values that 
// could be used to compute the area of figures. Derive two specific classes called triangle 
// and rectangle from the base shape. Add to the base class, a member function set_data() 
// to initialise base class data members and another member function display_area() to 
// compute and display the area of figures. Make display_area() as a virtual function and 
// redefine this function in the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a triangle or 
// a rectangle interactively, and display the area.
//  Remember the two values given as input will be treated as lengths of two sides in the 
// case of rectangles, and as base and height in the case of the triangles, and used as 
// follows:
//  Area of rectangle = x * y Area of triangle = 1/2 * x * y
// #include <iostream>
// using namespace std;
// class shape
// {
//   protected:
//   double l,b;
//   public:
//   void set_data(double a,double c)
//   {
//      l = a;
//      b = c;
//   }
//   virtual void display_area(){};
// };
// class triangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = l*b;
//      cout<<"Area of Rectangle = "<<area<<endl;
//    }
// };
// class rectangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = 0.5*l*b;
//      cout<<"Area of Triangle = "<<area<<endl;
//    }
// };
// int main()
// {
//     rectangle r;
//     r.set_data(4,5);
//     r.display_area();
//     triangle t;
//     t.set_data(3,3.5);
//     t.display_area();
//     return 0;
// }

// 2. Extend the above program to display the area of circles. This requires the addition of a 
// new derived class 'circle' that computes the area of a circle. Remember, for a circle we need 
// only one value, its radius, but the set_data() function in the base class requires two values to be 
// passed. (Hint: Make the second argument of set_data() function as a default one with zero 
// value.)
// #include <iostream>
// using namespace std;
// class shape
// {
//   protected:
//   double l,b;
//   public:
//   void set_data(double a,double c = 0)
//   {
//      l = a;
//      b = c;
//   }
//   virtual void display_area(){};
// };
// class triangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = l*b;
//      cout<<"Area of Rectangle = "<<area<<endl;
//    }
// };
// class rectangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = 0.5*l*b;
//      cout<<"Area of Triangle = "<<area<<endl;
//    }
// };
// class circle : public shape
// {
//     public:
//     void display_area()
//     {
//         double area = 3.14*l*l;
//         cout<<"Area of Circle = "<<area<<endl;
//     }
// };
// int main()
// {
//     rectangle r;
//     r.set_data(4,5);
//     r.display_area();
//     triangle t;
//     t.set_data(3,3.5);
//     t.display_area();
//     circle c;
//     c.set_data(4);
//     c.display_area();
//     return 0;
// }

// 3. Using the concept of pointers, write a function that swaps the private data values of two 
// objects of the same class type.
// #include <iostream>
// using namespace std;
// class A
// {
//     int x;
//     public:
//     A(int a)
//     {
//         x = a;
//     }
//     void swap(A *obj)
//     {
//         int temp = this->x; 
//         this->x = obj->x;
//         obj->x = temp;
//     }
//     void show()
//     {
//         cout<<"x = "<<x<<endl;
//     }
// };
// int main()
// {
//     A obj1(4),obj2(5);
//     cout<<"Before Swap :: "<<endl;
//     obj1.show();
//     obj2.show();
//     obj1.swap(&obj2);
//     cout<<"After Swap :: "<<endl;
//     obj1.show();
//     obj2.show();
//     return 0;
// }

// 4. Create a base class called shape. Use this class to store 2 double type values that could 
// be used to compute the area of figures. Derive 2 specific classes called triangle and rectangle 
// from the base shape. Add to the base class a member function get_data() to initialise base 
// class data members and another member function display_area() to compute and display the 
// area of figures. Make display_area() as a virtual function and redefine this function in derived 
// classes to suit their requirements. Using these 3 classes, design a program that will accept the 
// dimensions of the shapes interactively and display area.
// #include <iostream>
// using namespace std;
// class shape
// {
//   protected:
//   double l,b;
//   public:
//   void set_data(double x,double y)
//   {
//       l = x;
//       b = y;
//   }
//   virtual void display_area(){}
// };
// class triangle : public shape
// {
//   protected:
//   double area;
//   public:
//   void display_area()
//   {
//     area = 0.5*l*b;
//     cout<<"Area of triangle = "<<area<<endl;
//   }
// };
// class rectangle : public shape
// {
//    protected:
//    double area;
//    public:
//    void display_area()
//    {
//     area = l*b;
//     cout<<"Area of rectangle = "<<area<<endl;
//    }
// };

// int main()
// {
//     triangle obj;
//     obj.set_data(4,3);
//     obj.display_area();
//     rectangle object;
//     object.set_data(2,2);
//     object.display_area();
//     return 0;
// }

// 5. Create a base class called Photon. Use this class to store a double type value of 
// wavelength that could be used to calculate photon energy. Create class 
// calculate_photonEnergy which will inherit photon energy.
// Using these classes, calculate photon energy.
// #include <iostream>
// #include <math.h>
// using namespace std;
// class Photon
// {
//     protected:
//     double wavelenght;
//     public:
//     Photon(double x)
//     {
//         wavelenght = x;
//     }

// };
// class calculate_photonEnergy : public Photon
// {
//    double E;
//    public:
//    calculate_photonEnergy(double x) : Photon(x)
//    {
//       E = (6.62607015 * pow(10,-34) * 299792458)/wavelenght;
//       cout<<"Energy of a photon =  "<<E<<endl;
//    }
// };
// int main()
// {
//     calculate_photonEnergy obj(0.5);
//     return 0;
// }

// 6. Extend above to display the area of circles. For a circle,only one value is needed i.e. 
// radius but in get_data() function 2 values are passed.
// #include <iostream>
// using namespace std;
// class shape
// {
//   protected:
//   double l,b;
//   public:
//   void set_data(double a,double c = 0)
//   {
//      l = a;
//      b = c;
//   }
//   virtual void display_area(){};
// };
// class triangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = l*b;
//      cout<<"Area of Rectangle = "<<area<<endl;
//    }
// };
// class rectangle : public shape
// {
//     public:
//    void display_area()
//    {
//      double area = 0.5*l*b;
//      cout<<"Area of Triangle = "<<area<<endl;
//    }
// };
// class circle : public shape
// {
//     public:
//     void display_area()
//     {
//         double area = 3.14*l*l;
//         cout<<"Area of Circle = "<<area<<endl;
//     }
// };
// int main()
// {
//     rectangle r;
//     r.set_data(4,5);
//     r.display_area();
//     triangle t;
//     t.set_data(3,3.5);
//     t.display_area();
//     circle c;
//     c.set_data(4);
//     c.display_area();
//     return 0;
// }

// 7. Create a base class called Matrix. Use this class to store 4 int type values that could be 
// used to calculate determinants and create matrices. Create class calculate_determinant which 
// will calculate the determinant of a matrix.
// Using these classes, calculate the determinant of the matrix.
// #include <iostream>
// using namespace std;
// class Matrix
// {
//   protected:
//    int a,b,c,d;
//    public:
//    void set_data(int w,int x,int y ,int z)
//    {
//      a = w;
//      b = x;
//      c = y;
//      d = z;
//    }

// };
// class calculate_determinant : public Matrix
// {
//     public:
//    void calculate()
//    {
//     cout<<"Result = "<<a*b-c*b<<endl;
//    }
// };
// int main()
// {
//     Matrix obj;
//     obj.set_data(1,2,3,4);
//     calculate_determinant d;
//     d.calculate();
//     return 0;
// }

// 8. Create a base class called proof. Use this class to store two int type values that could be 
// used to prove that triangle is a right angled triangle. Create a class compute which will 
// determine whether a triangle is a right angled triangle.
//  Using these classes, design a program that will accept dimensions of a triangle, and 
// display the result.
// (Summary: Prove that triangle is a right angled triangle using pythagoras theorem).
// #include <iostream>
// using namespace std;
// class proof
// {
//    protected:
//    int l,b,p;
//    public:
//    void set_data(i,j,k)
//    {
//      l = i;
//      b = j;
//      p = k;
//    }
// };
// class compute : public proof
// {
//    public:
//    void compute()
//    {
//      if (h*h == b*b + p*p)
//      {
//         cout<<"Yes it is right angle triangle.";
//      }
//      else
//      {
//         cout<<"No it is right angle triangle.";
//      }
     
//    }
// };
// int main()
// {
//     Matrix m(1,2,3);

//     return 0;
// }

// 9. Create a base class called volume. Use this class to store two double type values that 
// could be used to compute the volume of figures. Derive two specific classes called cube and 
// sphere from the base shape. Add to the base class, a member function get_data() to initialise 
// base class data members and another member function display_volume() to compute and 
// display the volume of figures. Make display_volume() as a virtual function and redefine this 
// function in the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a cube or a 
// sphere interactively, and display the volume.
// #include <iostream>
// using namespace std;
// class volume
// {
//     protected:
//   double l,b;
//   public:
//   void get_data(int a,int b = 0)
//   {
//     l = a;
//     this->b = b;
//   }
//   virtual void display_volume(){}
// };
// class cube : public volume
// {
//     double vol;
//    public:
//    void cal_volume(int x)
//    {
//      get_data(x);
//      vol = l*l*l;
//    }
//    void display_volume()
//    {
//      cout<<"Volume of cube = "<<vol<<endl;
//    }
// };
// class sphere : public volume
// {
//   double vol;
//   public:
//   void cal_volume(int x)
//    {
//      get_data(x);
//      vol = 1.33 * 3.14 * (l*l*l);
//    }
//    void display_volume()
//    {
//      cout<<"Volume of sphere = "<<vol<<endl;
//    }
// };
// int main()
// {
//     cube obj;
//     obj.cal_volume(4);
//     obj.display_volume();
//     sphere s;
//     s.cal_volume(5);
//     s.display_volume();
//     return 0;
// }

// 10. Create a base class called shape. Use this class to store two double type values that 
// could be used to compute the area of figures. Derive two specific classes called square and 
// parallelogram from the base shape. Add to the base class, a member function get_data() to 
// initialise base class data members and another member function display_area() to compute and 
// display the area of figures. Make display_area() as a virtual function and redefine this function in 
// the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a square or 
// a parallelogram interactively, and display the area.
// #include <iostream>
// using namespace std;
// class shape
// {
//   protected:
//   double a,b;
//   double area;
//   public:
  
//   get_data(int x,int y = 0)
//   {
//     a = x;
//     b = y;
//   }
//   virtual void display_area(){}
// };
// class square : public shape
// {
//   int side;
//   public:
//   square()
//   {
//     cout<<"Enter the side of square:: ";
//     cin>>side;
//     get_data(side);
//   }
//   void display_area()
//   {
//     area = a*a;
//     cout<<"Area of square = "<<area<<endl;
//   }
// };
// class parallelogram : public shape
// {
//   public:
//   parallelogram(double base,double height)
//   {
//     get_data(base,height);
//   }
//   void display_area()
//   {
//     area = a*b;
//     cout<<"Area of parallelogram = "<<area<<endl;
//   }
// };
// int main()
// {
//   square s;
//   parallelogram p(2,3);
//   s.display_area();
//   p.display_area();
//   return 0;
// }