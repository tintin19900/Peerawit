#include <stdio.h>

int main()
{
//แสดงตัวอย่างหน้าตาของ Matrix
    printf("                             _       _\n");
    printf("                            |         |\n");
    printf("                            |  a   b  |\n");
    printf("                            |  c   d  |\n");
    printf("                            |_       _|\n");
    printf("____________________________________________________________________\n");
//ตัวแปร
    int y; //ตัวแปนกำหนดตัวดำเนินการ
    float a[2][2], b[2][2], c[2][2]; //ตัวแปรของ Matrix 
    float det, detB ,invB1 ,invB2 ,invB3 ,invB4,Xdet,XdetB; //ตัวแปรของค่า det และ inverse
//UI
    printf("Hello user welcome to matrix 2x2 calculator.\n");
    printf("____________________________________________________________________\n");
    printf("Please read the instruction.\n");
    printf("Enter Number 1 to find +\n");                       //หาค่าบวก
    printf("Enter Number 2 to find -\n");                       //หาค่าลบ
    printf("Enter Number 3 to find *\n");                       //หาค่าคูณ
    printf("Enter Number 4 to find /\n");                       //หาค่าหาร
    printf("Enter Number 5 to find Determinant (det)\n");       //หาค่าดีเทอร์มิแนนท์
    printf("Enter Number 6 to find Inverse\n");                 //หาค่าอินเวอร์สเมทริก
    printf("Enter Number: ");  
    scanf("%d",&y);
    //วิธีใช้
    printf("____________________________________________________________________\n");
    printf("How to Enter matrix?\n");
    printf("for first   rows of matrix you should enter number like this a b\n");
    printf("for seccond rows of matrix you should enter number like this c d\n");
    printf("____________________________________________________________________\n");
    
    //input
    if(y == 1 || y == 2 || y == 3 || y == 4) //กรณีการรับค่า matrix 2 ตัว
    {   
        // รับค่า row, col ของ matrixA
        printf("\nEnter the first  rows for matrixA: ");
        scanf("%f %f",&a[0][0],&a[0][1]);
        printf("Enter the second rows for matrixA: ");
        scanf("%f %f",&a[1][0],&a[1][1]);
        printf("____________________________________________________________________\n");
        // scanf("%c",&sym); ++++++++++++++
        // รับค่า row, col ของ matrixB
        printf("\nEnter the first  rows for matrixB: ");
        scanf("%f %f",&b[0][0],&b[0][1]);
        printf("Enter the second rows for matrixB: ");
        scanf("%f %f",&b[1][0],&b[1][1]);
        printf("____________________________________________________________________\n");

        // แสดงค่า row, col ของ matrixA
        printf("\nThe 1st matrix is: \n");
        printf("\n                         %.2f %.2f",a[0][0],a[0][1]);
        printf("\n                         %.2f %.2f\n",a[1][0],a[1][1]);
        printf("\n                      ***************\n");
        // แสดงค่าตัวแปรในรูปของ MatrixA
    printf("                         _       _\n");
    printf("                        |         |\n");
    printf("                        |  %.0f   %.0f  |\n",a[0][0],a[0][1]);
    printf("                        |  %.0f   %.0f  |\n",a[1][0],a[1][1]);
    printf("                        |_       _|\n");
        
        // แสดงค่า row, col ของ matrixB
        printf("\nThe 2st matrix is: \n");
        printf("\n                         %.2f %.2f",b[0][0],b[0][1]);
        printf("\n                         %.2f %.2f\n",b[1][0],b[1][1]);
        printf("\n                      ***************\n");
        // แสดงค่าตัวแปรในรูปของ MatrixB
    printf("                         _       _\n");
    printf("                        |         |\n");
    printf("                        |  %.0f   %.0f  |\n",b[0][0],b[0][1]);
    printf("                        |  %.0f   %.0f  |\n",b[1][0],b[1][1]);
    printf("                        |_       _|\n");
        
printf("\n____________________________________________________________________\n");
    }
    else if(y == 5 || y == 6) //กรณีการรับค่า matrix 1 ตัว
    {
        // รับค่า row, col ของ matrix
        printf("\nEnter the first  rows for matrix: ");
        scanf("%f %f",&c[0][0],&c[0][1]);
        printf("\nEnter the second rows for matrix: ");
        scanf("%f %f",&c[1][0],&c[1][1]);
printf("\n____________________________________________________________________\n");      
        // แสดงค่า row, col ของ matrix
        printf("\nThe matrix is:\n");
        printf("\n                         %.2f %.2f",c[0][0],c[0][1]);
        printf("\n                         %.2f %.2f\n",c[1][0],c[1][1]);
        printf("\n                      ***************\n");
    printf("                         _       _\n");
    printf("                        |         |\n");
    printf("                        |  %.0f   %.0f  |\n",c[0][0],c[0][1]);
    printf("                        |  %.0f   %.0f  |\n",c[1][0],c[1][1]);
    printf("                        |_       _|\n");
          printf("\n____________________________________________________________________\n");
    }

    // process
    if(y == 1)     // Plus
    {
    // แสดงค่าผลบวก matrixA และ matrixB
        printf("\nThe Sum of two matrix is:\n");
        printf("\n                         %.2f %.2f\n",a[0][0]+b[0][0], a[0][1]+b[0][1]);
        printf("                         %.2f %.2f\n",a[1][0]+b[1][0], a[1][1]+b[1][1]);
    // แสดง matrixA + matrixB
    printf("\n                      ***************\n");
    printf("                       _           _\n");
    printf("                      |             |\n");
    printf("                      |  %.1f   %.1f  |\n",a[0][0]+b[0][0], a[0][1]+b[0][1]);
    printf("                      |  %.1f   %.1f  |\n",a[1][0]+b[1][0], a[1][1]+b[1][1]);
    printf("                      |_           _|\n");
    printf("\n                      ***************\n");
    }
    else if(y == 2)// Minus
    {
    // แสดงค่าผลลบ matrixA และ matrixB
        printf("\nThe Minus of two matrix is:\n");
        printf("\n                         %.2f %.2f\n",a[0][0]-b[0][0], a[0][1]-b[0][1]);
        printf("                         %.2f %.2f\n",a[1][0]-b[1][0], a[1][1]-b[1][1]);
      // แสดง matrixA - matrixB
    printf("\n                      ***************\n");
    printf("                       _           _\n");
    printf("                      |             |\n");
    printf("                      |  %.1f   %.1f  |\n",a[0][0]-b[0][0], a[0][1]-b[0][1]);
    printf("                      |  %.1f   %.1f  |\n",a[1][0]-b[1][0], a[1][1]-b[1][1]);
    printf("                      |_           _|\n");
    printf("\n                      ***************\n");
    }
    else if(y == 3)// Multiply
    {
    // แสดงค่าผลคูณ matrixA และ matrixB
        printf("\nThe Multiply of two matrix is:\n");
        printf("\n                        %.2f %.2f\n", a[0][0]*b[0][0]+a[0][1]*b[1][0], a[0][0]*b[0][1]+a[0][1]*b[1][1]);
        printf("                        %.2f %.2f\n", a[1][0]*b[0][0]+a[1][1]*b[1][0], a[1][0]*b[0][1]+a[1][1]*b[1][1]);
      // แสดง matrixA x matrixB
    printf("\n                      ***************\n");
    printf("                       _           _\n");
    printf("                      |             |\n");
    printf("                      |  %.1f   %.1f  |\n",a[0][0]*b[0][0]+a[0][1]*b[1][0], a[0][0]*b[0][1]+a[0][1]*b[1][1]);
    printf("                      |  %.1f   %.1f  |\n",a[1][0]*b[0][0]+a[1][1]*b[1][0], a[1][0]*b[0][1]+a[1][1]*b[1][1]);
    printf("                      |_           _|\n");
    printf("\n                      ***************\n");
    }
    
    else if(y == 4)// Divide
    {
printf("\n____________________________________________________________________");
        printf("\nThe Divide of two matrix is:\n");
        float detB = (b[0][0]*b[1][1]-b[1][0]*b[0][1]); //ค่า detB
        float XdetB = 1/detB; //ส่วนกลับของ detB
        float invB1 = XdetB * (b[1][1]); //D b[0][0]      ---> Inverse ของ B11
        float invB2 = XdetB * (-b[0][1]); //-B b[0][1]    ---> Inverse ของ B12
        float invB3 = XdetB * (-b[1][0]); //-C b[1][0]    ---> Inverse ของ B21
        float invB4 = XdetB * (b[0][0]); //A b[1][1]      ---> Inverse ของ B22
        printf("\n                         %.2f %.2f", (a[0][0])*invB1+(a[0][1])*invB3, (a[0][0])*invB2+(a[0][1])*invB4);
        printf("\n                         %.2f %.2f\n", (a[1][0])*invB1+(a[1][1]*invB3), (a[1][0])*invB2+(a[1][1])*invB4);
    //  แสดง matrixA / matrixB
    printf("\n                      ***************\n");
    printf("                       _           _\n");
    printf("                      |             |\n");
    printf("                      |  %.1f   %.1f  |\n",a[0][0]*invB1+(a[0][1])*invB3, (a[0][0]*invB2)+a[0][1]*invB4);
    printf("                      |  %.1f   %.1f  |\n",a[1][0]*invB1+(a[1][1]*invB3), a[1][0]*invB2+(a[1][1])*invB4);
    printf("                      |_           _|\n");
    printf("\n                      ***************\n");
        if(detB == 0)
        {
        printf("Unidentified because detB = 0"); //detB = 0 หา inverse ไม่ได้
        }

    }  
    else if(y == 5) // Determinant
    {
      printf("\n Determinant (det) = %.2f", (c[0][0]*c[1][1]-c[1][0]*c[0][1]));
    }   
    else if(y == 6) // Inverse
    {
      float det = (c[0][0]*c[1][1]-c[1][0]*c[0][1]); //ค่า det
      float Xdet = 1/det; //ส่วนกลับ det 
      printf("\n1/det = %.2f", Xdet); 
printf("\n____________________________________________________________________\n");
      printf("\nInverse matrix is:\n");
      printf("\n                         %.2f %.2f", Xdet * (c[1][1]), Xdet * (-c[0][1]));
      printf("\n                         %.2f %.2f\n", Xdet * (-c[1][0]), Xdet * (c[0][0]));
      printf("\n                      ***************\n");
      printf("                         _       _\n");
      printf("                        |         |\n");
      printf("                        |  %.0f   %.0f  |\n",Xdet * (c[1][1]), Xdet * (-c[0][1]));
      printf("                        |  %.0f   %.0f  |\n",Xdet * (-c[1][0]), Xdet * (c[0][0]));
      printf("                        |_       _|\n");
      printf("\nThe matrix is:\n");
      if (det == 0)
      {
        printf("\nUnidentified because det = 0");
        printf("\nNOTE:Inf means infinity becasue 1/0 might be infinity but it should be UNIDENTIFIED"); //det = 0 หา inverse ไม่ได้
        //1/0 = infity จากเรื่องของค่า Limit แต่มันควรจะหาค่าไม่ได้
      } 
    }  
    else if (y == 69) // Code ลับ
    {
      printf("\nCONGRATULATIONS YOU FOUND SECRETS!!!");
      printf("\nCLICK HERE:https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    }
    else
    {
      //ถ้ากรอกเลขอื่นที่ไม่ได้กำหนด
      printf("Please Enter Number 1-6 only.");
    }
printf("\n____________________________________________________________________\n");
}