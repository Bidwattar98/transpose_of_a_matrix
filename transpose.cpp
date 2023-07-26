#include<iostream>
using namespace std;

// int a[10][10], transpose[10][10]

int main(){
    int a[10][10], transpose[10][10], r, c, i, j, k;

   cout << "Enter the number of rows of your matrix: ";
   cin >> r ;

   cout << "Enter the number of columns of your matrix: ";
   cin >> c ;

   cout << "\nEnter the elements of  your matrix: " << endl;



//     if(int i = 0; i < r; ++i) {
//       for (int j = 0; j < c; ++j) 
//       {
//          cout << "Enter element a" << i++ << j++ << ":";
//          cin >> a[i][j];
//       }
//     
//    }
//     els

   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) 
      {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }


   cout << "\nYour matrix is: " << endl;

   for (int i = 0; i < r; ++i) 
   {
      for (int j = 0; j < c; ++j) 
      {
         cout << " " << a[i][j];
         if (j == c - 1)
            cout << endl << endl;
      }
   }

    for (int i = 0; i < r; ++i)
       for (int j = 0; j < c; ++j) {
          transpose[j][i] = a[i][j];
       }

   cout << "\nTranspose of That Matrix is: " << endl;
   for (int i = 0; i < c; ++i)
      for (int j = 0; j < c; ++j) 
      {
         cout << " " << transpose[i][j];
         if (j == r - 1)
            cout << endl << endl;
      }

   return 0;
}