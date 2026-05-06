// Problem 1 (3*3 Random Matrix) ================
/*
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int RandomNumber(int From , int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3] , short Rows , short Cols)
{
	for (short i = 0; i < Rows ; i++)
	{
		for (short j = 0; j < Cols ; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3] , short Rows , short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int main()
{

	srand((unsigned) time (NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr , 3 , 3);

	cout << "The Following Is a 3x3 Random Matrix :\n";
	PrintMatrix(arr, 3, 3);

	cout << endl;
	system("pause");
	return 0;
}
*/








// Problem 2 (Sum each Row In Matrix) ===========
/*
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (short j = 0; j < Cols; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void PrintSumOfEachRow(int arr[3][3] , short Rows , short Cols)
{
	cout << "\nThe following are the sum of each row in matrix :\n";
	for (short i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl ;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 random matrix : \n";
	PrintMatrix(arr , 3 ,3);

	PrintSumOfEachRow(arr, 3, 3);

	
	cout << endl;
	system("pause");
	return 0;
}
*/








// Problem 3 (Sum each Row In Matrix In Array) ==
/*
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (short j = 0; j < Cols; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void SumMatrixRowsInArray(int arr[3][3] , int arrSum[3] , int Rows , int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = RowSum(arr , i , Cols);
	}
}

void PrintRowsSumArray(int arr[3] , short Rows)
{
	cout << "\nThe following are the sum of each row in matrix :\n";
	for (short i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 random matrix : \n";
	PrintMatrix(arr, 3, 3);

	SumMatrixRowsInArray(arr , arrSum , 3 , 3);

	PrintRowsSumArray(arrSum, 3);


	cout << endl;
	system("pause");
	return 0;
}
*/








// Problem 4 (Sum Each Columns In Matrix) ========
/*
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		Sum += arr[i][ColNumber];
	}
	return Sum;
}

void PrintSumOfEachCol(int arr[3][3], short Rows, short Cols)
{
	cout << "\nThe following are the sum of each column in matrix :\n";
	for (short j = 0; j < Rows; j++)
	{
		cout << " Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 random matrix : \n";
	PrintMatrix(arr, 3, 3);

	PrintSumOfEachCol(arr, 3, 3);

	system("pause>0");

	//cout << endl;
	//system("pause");
	//return 0;
}
*/








// Problem 5 (Sum each Col In Matrix In Array) ===
/*
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		Sum += arr[i][ColNumber];
	}
	return Sum;
}

void SumMatrixColInArray(int arr[3][3], int arrSum[3], int Rows, int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = ColSum(arr, Rows, i);
	}
}

void PrintColSumArray(int arr[3], short Col)
{
	cout << "\nThe following are the sum of each column in matrix :\n";
	for (short j = 0; j < Col; j++)
	{
		cout << "Col " << j + 1 << " Sum = " << arr[j] << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSumCol[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 random matrix : \n";
	PrintMatrix(arr, 3, 3);

	SumMatrixColInArray(arr, arrSumCol, 3, 3);

	PrintColSumArray(arrSumCol, 3);


	system("pause>0");
}
*/








// Problem 6 (Order Matrix) =======================
/*
#include <iostream>
#include <iomanip>

using namespace std;

void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int main()
{

	int arr[3][3];

	FillMatrixWithOrderNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Order matrix : \n";
	PrintMatrix(arr, 3, 3);

	


	system("pause>0");
}
*/








// Problem 7 (Traspose Matrix) ====================
/*
#include <iostream>
#include <iomanip>

using namespace std;

void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

void TrasposeMatrix(int arr[3][3] , int arrTraspose[3][3] , short Rows , short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTraspose[i][j] = arr[j][i];
		}
	}
}

int main()
{

	int arr[3][3];
	int arrTraspose[3][3];

	FillMatrixWithOrderNumbers(arr, 3, 3);

	cout << "The following is a 3x3 Order matrix : \n";
	PrintMatrix(arr, 3, 3);

	TrasposeMatrix(arr, arrTraspose, 3, 3);

	cout << "\nThe following is a 3x3 Traspose matrix : \n";
	PrintMatrix(arrTraspose, 3, 3);



	system("pause>0");
}
*/








// Problem 8 (Multiply Tow Matrices) ==============
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d    ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

void MultiplyMatrix(int arr1[3][3] , int arr2[3][3] , int arrResult[3][3] , short Rows , short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrResult[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

int main()
{

	srand((unsigned) time (NULL));

	int Matrix1[3][3] , Matrix2[3][3] , MatrixResult[3][3] ;


	FillMatrixWithOrderNumbers(Matrix1, 3, 3);
	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithOrderNumbers(Matrix2, 3, 3);
	cout << "\nMatrix2 : \n";
	PrintMatrix(Matrix2, 3, 3);
	

	MultiplyMatrix(Matrix1, Matrix2, MatrixResult, 3, 3);
	cout << "\nResults : \n";
	PrintMatrix(MatrixResult, 3, 3);


	
	



	system("pause>0");
}
*/








// Problem 9 (Print Middle Row and Col of Matrix) =
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols)
{
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d    ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

void PrintMiddleRowOfMatrix(int arr[3][3] , short Rows , short Cols)
{
	
	short MiddleRow = Rows / 2;
	
	for (short j = 0; j < Cols; j++)
	{
			printf(" %0*d   " , 2 , arr[MiddleRow][j]);
	}
	cout << endl;
}

void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf(" %0*d   " , 2 , arr[i][MiddleCol]);
	}
	cout << endl;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3];


	FillMatrixWithOrderNumbers(Matrix1, 3, 3);
	cout << "\nMatrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMiddle Row Of Matrix1 is :\n";
	PrintMiddleRowOfMatrix(Matrix1, 3, 3);

	cout << "\nMiddle Col Of Matrix1 is :\n";
	PrintMiddleColOfMatrix(Matrix1, 3, 3);


	system("pause>0");
}
*/








// Problem 10 (Sum Of Matrix) =====================
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols)
{
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d    ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int SumOfMatrix(int arr[3][3] , short Rows , short Cols)
{
	int Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
	}


	return Sum;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3];


	FillMatrixWithOrderNumbers(Matrix1, 3, 3);
	cout << "\nMatrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nSum Of Matrix1 is : " << SumOfMatrix(Matrix1 , 3 , 3) << endl;



	system("pause>0");
}
*/








// Problem 11 (Check Matrices Equality) ===========
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d    ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
	}


	return Sum;
}

bool AreEqualMatrices(int Matrix1[3][3] , int Matrix2[3][3] , short Rows , short Cols)
{
	return(SumOfMatrix(Matrix1, Rows, Rows) == SumOfMatrix(Matrix2, Rows, Cols));
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3] ;


	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nSum Of Matrix1 = " << SumOfMatrix(Matrix1, 3, 3) << endl ;


	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix2 : \n";
	PrintMatrix(Matrix2, 3, 3);
	cout << "\nSum Of Matrix2 = " << SumOfMatrix(Matrix2, 3, 3) << endl;


	if (AreEqualMatrices(Matrix1 , Matrix2 , 3 , 3))
		cout << "\nYES: both matrices are equal .\n";
	else
		cout << "\nNO: Matrices are NOT equal .\n";

	system("pause>0");
}
*/








 // Problem 12 (Check Typical Matrices) ===========
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d    ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];


	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);


	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix2 : \n";
	PrintMatrix(Matrix2, 3, 3);


	if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: both matrices are Typical .\n";
	else
		cout << "\nNO: Matrices are NOT Typical .\n";

	system("pause>0");
}
*/








// Problem 13 (Check Identity Matrices) ===========
/*
#include <iostream>
#include <iomanip>

using namespace std; 

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j] ;
		}
		cout << endl;
	}
}

bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// Check for Diagonals are 1 
			if (i == j && Matrix1[i][j] != 1)
			{
				return false;
			}
			// Check for rest elements are 0 
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{

	srand((unsigned)time(NULL));

	//int Matrix1[3][3] = { { 1,2,3 } ,{ 4,5,6 } ,{ 7,8,9 } };
	int Matrix1[3][3] = { {1,0,0} , {0,1,0} , {0,0,1} };


	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);


	if (IsIdentityMatrix(Matrix1, 3, 3))
		cout << "\nYES: Matrix is Identity .\n";
	else
		cout << "\nNO: Matrix is NOT Identity .\n";

	system("pause>0");
}
*/








 // Problem 14 (Check Scalar Matrix) ==============
/*
#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

bool IsScalarMatrix(int Matrix1[3][3], short Rows, short Cols)
{

	int FirstDiagonalElement = Matrix1[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// Check for Diagonals are Equal 
			if (i == j && Matrix1[i][j] != FirstDiagonalElement)
			{
				return false;
			}
			// Check for rest elements are 0 
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{

	srand((unsigned)time(NULL));

	//int Matrix1[3][3] = { { 1,2,3 } ,{ 4,5,6 } ,{ 7,8,9 } };
	int Matrix1[3][3] = { { 9,0,0 } ,{ 0,9,0 } ,{ 0,0,9 } };

	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);


	if (IsScalarMatrix(Matrix1, 3, 3))
		cout << "\nYES: Matrix is Scalar .\n";
	else
		cout << "\nNO: Matrix is NOT Scalar .\n";

	system("pause>0");
}
*/








 // Problem 15 (Count Nummber in Matrix) ==========
/*
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

short CountNumberInMatrix(int Matrix[3][3] , short Rows , short Cols , int Number)
{
	int CountNumber = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j= 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
			{
				CountNumber ++ ;
			}
		}
	}

	return CountNumber;
}

int main()
{

	srand((unsigned)time(NULL));


	int Matrix1[3][3];


	FillMatrixWithRandomNumbers(Matrix1 , 3 , 3);
	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	int Number;
	cout << "\nEnter the number to count in the Matrix? ";
	cin >> Number;

	cout << "\nNumber " << Number << " count in the Matrix is "
		 << CountNumberInMatrix(Matrix1 , 3 , 3 , Number) << endl ;


	system("pause>0");
}
*/








 // Problem 16 (Check Sparse Mstrix) ==============
/*
#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

short CountNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int Number)
{
	int CountNumber = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
			{
				CountNumber++;
			}
		}
	}

	return CountNumber;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;

	return (CountNumberInMatrix(Matrix , 3 , 3 , 0) >= (MatrixSize / 2));
}

int main()
{

	srand((unsigned)time(NULL));

	//int Matrix1[3][3] = { { 10 , 0 , 12 } ,{ 20 , 15 , 1 } ,{ 0 , 0 , 9 } };
	int Matrix1[3][3] = { {0 , 0 , 12} , {0 , 0 , 1} , {0 , 0 , 9} };


	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "\nYes: It is Sparse .";
	else
		cout << "\nNO: It is NOT Sparse .";

	system("pause>0");
}
*/








 // Problem 17 (Number Exists In Matrix) ==========
/*
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

bool IsNumberInMatrix(int Matrix[3][3] , short Rows , short Cols , short Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Number == Matrix[i][j])
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{

	srand((unsigned)time(NULL));


	int Matrix1[3][3];


	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix1 : \n";
	PrintMatrix(Matrix1 , 3 , 3);


	int NumberToLookFor;
	cout << "Please enter number to look for in matrix ?";
	cin >> NumberToLookFor;

	if (IsNumberInMatrix(Matrix1 , 3 , 3 , NumberToLookFor))
	{
		cout << "\nYes it's there .";
	}
	else
	{
		cout << "\nNO it's Not there .";
	}




	system("pause>0");
}
*/








// Problem 18 (Intersected Number In Matrix) ======
/*
#include <iostream>
#include <iomanip>


using namespace std;


void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

bool IsNumberInMatrix(int Matrix[3][3], short Rows, short Cols, short Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Number == Matrix[i][j])
			{
				return true;
			}
		}
	}
	return false;
}

void PrintIntersectedNumbers(int Matrix1[3][3] , int Matrix2[3][3] , short Rows , short Cols)
{
	int Number ;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Number = Matrix1[i][j];

			if (IsNumberInMatrix(Matrix2 , 3 , 3 , Number))
			{
				cout << setw(3) << Number << "      ";
			}
		}
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 32 , 12 , 4} , { 99 , 45 , 0 } , { 1 , 86 , 77 } },
		Matrix2[3][3] = { { 19 , 86 , 1 } ,{ 25 , 90 , 77 } , { 99 , 7 , 70 } };


	cout << "\nMatrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);


	cout << "\nMatrix2 : \n";
	PrintMatrix(Matrix2, 3, 3);


	cout << "\nIntersected Numbers are: \n";
	PrintIntersectedNumbers(Matrix1 , Matrix2 , 3 , 3);



	system("pause>0");
}
*/








// Problem 19 (Min/Max Number In Matrix) ==========
/*
#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

int MinNumberInMatrix(int Matrix[3][3] , short Rows , short Cols)
{
	int MinNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] < MinNumber)
			{
				MinNumber = Matrix[i][j];
			}
		}

	}

	return MinNumber;
}

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int MaxNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] > MaxNumber)
			{
				MaxNumber = Matrix[i][j];
			}
		}

	}

	return MaxNumber;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 32 , 12 , 4 } ,{ 60 , 45 , 55 } ,{ 19 , 86 , 77 } };


	cout << "\nMatrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMinimum Number = " << MinNumberInMatrix(Matrix1 , 3 , 3) << endl ;
	cout << "\nMaximum Number = " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;

	
	system("pause>0");
}
*/








// Problem 20 (Palidrome Matrix) ==================
/*
#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << Matrix[i][j];
		}
		cout << endl;
	}
}

bool IsPalindromeMatrix(int Matrix[3][3] , short Rows , short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols/2 ; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { { 1 , 2 , 1 } ,{ 5 , 5 , 5 } ,{ 7 , 3 , 7 } };
	int Matrix2[3][3] = { { 1 , 2 , 1 } ,{ 5 , 5 , 5 } ,{ 7 , 3 , 8 } };


	cout << "\nMatrix1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1 , 3 , 3))
	{
		cout <<"\nYes: Matrix is palindrome .";
	}
	else
	{
		cout <<"\nNo: Matrix is NOT palindrome .";
	}

	system("pause>0");
}
*/








// Problem 21 (Fibonacci Series) ==================
/*
#include <iostream>
using namespace std;

void PrintFibonacciUsingLoop(short Number)
{

	int FiboNumber = 0;
	int Prev1 = 1, Prev2 = 0;

	cout << "1    ";
	for (short i = 2; i <= Number; i++)
	{
		FiboNumber = Prev1 + Prev2;
		cout << FiboNumber << "    ";
		Prev2 = Prev1;
		Prev1 = FiboNumber;
	}

}

int main()
{
	PrintFibonacciUsingLoop(10);

	system("pause>0");
}
*/








// Problem 22 (Fibonacci Series With Recursion) ===
/*
#include <iostream>
using namespace std;

void PrintFibonacciWithRecursion(short Number , int Prev1 , int Prev2)
{
	int FiboNumber = 0;

	if (Number > 0)
	{

		FiboNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FiboNumber;
		cout << FiboNumber << "    ";
		PrintFibonacciWithRecursion(Number - 1 , Prev1 , Prev2);
		
	}
}

int main()
{
	PrintFibonacciWithRecursion(10 , 0 , 1);

	system("pause>0");
}
*/








// Probelm 23 (Print First Letter of Each Word) ===
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string S1; 
	cout << Message << endl;
	getline(cin , S1);

	return S1;
}

void PrintFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;

	cout << "\nFirst Letters of this string : \n";

	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
		{
			cout << str[i] << endl;
		}

		isFirstLetter = (str[i] == ' ' ? true : false);
	}
}

int main()
{
	PrintFirstLetterOfEachWord(ReadString("Please enter your string?"));

	system("pause>0");
}
*/








// Problem 24 (Upper First Letter Of Each Word) ===
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string S1;
	cout << Message << endl;
	getline(cin, S1);

	return S1;
}

string UpperFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;

	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
		{
			str[i] = toupper(str[i]);
		}

		isFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;

}

int main()
{
	string S1 = ReadString("Please Enter Your String?");
	S1 = UpperFirstLetterOfEachWord(S1);

	cout << "\nString after conversion : \n";
	cout << S1 << endl;


	system("pause>0");
}
*/








// Problem 25 (Lower First Letter Of Each Word) ===
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
	string S1;
	cout << Message << endl;
	getline(cin, S1);

	return S1;
}

string LowerFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;

	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
		{
			str[i] = tolower(str[i]);
		}

		isFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;

}

int main()
{
	string S1 = ReadString("Please Enter Your String?");

	cout << "\nString after conversion : \n";
	S1 = LowerFirstLetterOfEachWord(S1);
	cout << S1 << endl;

	system("pause>0");
}
*/








// Problem 26 (Upper/Lower All Letters In String) =
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?" << endl;
	getline(cin, S1);

	return S1;
}

string LowerAllString(string str)
{

	for (short i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;

}

string UpperAllString(string str)
{

	for (short i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);	
	}
	return str;

}

int main()
{
	string S1 = ReadString();

	cout << "\nString after Upper : \n";
	S1 = UpperAllString(S1);
	cout << S1 << endl;


	cout << "\nString after Lower : \n";
	S1 = LowerAllString(S1);
	cout << S1 << endl;

	system("pause>0");
}
*/








// Problem 27 (Invert Charcter Case) ==============
/*
#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Charcter?" << endl;
	cin >> Ch1;

	return Ch1;
}

char InvertLetterCase(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

int main()
{
	char Ch1 = ReadChar();

	cout << "\nChar after inverting case: \n";
	Ch1 = InvertLetterCase(Ch1); 
	cout << Ch1 << endl;

	system("pause>0");
}
*/








// Problem 28 (Invert All Letters Case) ===========
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?" << endl;
	getline(cin, S1);

	return S1;
}

char InvertLetterCase(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

string InvertAllStringLettersCase(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString after inverting all letters case : \n";
	S1 = InvertAllStringLettersCase(S1);
	cout << S1 << endl;

	system("pause>0");
}
*/








// Problem 29 (Count Small/Capital Letters) =======
/*
#include <iostream>
#include <string>

using namespace std;

enum enWhatToCount {SmallLetters = 0 , CapitalLetters = 1 , All = 2};

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?" << endl;
	getline(cin, S1);

	return S1;
}

short CountLetters(string S1 , enWhatToCount WhatToCount = enWhatToCount::All)
{

	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}

	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			Counter++;
		
		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;

	}
	return Counter;
}

short CountCapitalLetters(string S1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			Counter++;
	}
	return Counter;
}

short CountSmallLetters(string S1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
			Counter++;
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();


	cout << "\nString Lenght = " << S1.length() << endl ;
	cout << "Capital Letters Count= " << CountLetters(S1 , enWhatToCount::CapitalLetters) << endl;
	cout << "Small Letters Count = " << CountLetters(S1 , enWhatToCount::SmallLetters) << endl;


	system("pause>0");
}
*/








// problem 30 (Count Letters) =====================
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?" << endl;
	getline(cin, S1);

	return S1;
}

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Charcter?" << endl;
	cin >> Ch1;

	return Ch1;
}

short CountLetter(string S1 , char Ch1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Ch1)
			Counter++;
	}
	return Counter;
}

int main()
{

	string S1 = ReadString();
	char Letter = ReadChar();

	cout << "\nLetter \'" << Letter << "\' Count = " << CountLetter(S1 , Letter) << endl ;

	system("pause>0");
}
*/








// Problem 31 (Count Letters (Match Case)) =======
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?" << endl;
	getline(cin, S1);

	return S1;
}

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Charcter?" << endl;
	cin >> Ch1;

	return Ch1;
}

char InvertLetterCase(char Char1)
{
	return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

short CountLetter(string S1, char Letter , bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}

	}
	return Counter;
}

int main()
{

	string S1 = ReadString();
	char Ch1 = ReadChar();

	cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1) ;
	
	cout << "\nLetter \'" << Ch1 << "\' ";
	cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
	cout << "Couont = " << CountLetter(S1 , Ch1 , false);

	system("pause>0");
}
*/








// Problem 32 (Is Vowel) =========================
/*
#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Charcter?" << endl;
	cin >> Ch1;

	return Ch1;
}

bool IsVowel(char Letter)
{
	bool Ch1 = tolower(Letter);

	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));

}

int main()
{
	char Ch1 = ReadChar();

	if (IsVowel(Ch1))
		cout << "\nYES Letter \'" << Ch1 << "\' is vowel";
	else
		cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel";

	system("pause>0");
}
*/








// Problem 33 (Count Vowel) ======================
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin , S1);

	return S1;
}

bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);

	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowels(string S1)
{
	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			Counter++;
	}

	return Counter;
}

int main()
{

	string S1 = ReadString();

	//short VowelsLetter = CountVowels(S1);
	cout << "\nNumber of vowels = " << CountVowels(S1) << endl ;

	system("pause>0");
}
*/








// Problem 34 (Print All Vowels In String) =======
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your Sting?\n";
	getline(cin , S1);

	return S1;
}

bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);

	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

void PrintVowels(string S1)
{
	cout << "\nVowels in string are: ";
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i] << "    ";
	}
}

int main()
{
	string S1 = ReadString();

	PrintVowels(S1);

	system("pause>0");
}
*/








// Problem 35 (Print Each Word In String) ========
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your Sting?\n";
	getline(cin, S1);

	return S1;
}

void PrintEachWordInString(string S1)
{
	string delim = " "; 

	cout << "\nYour String Words are: \n\n";
	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0 , pos); // store the word
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		S1.erase(0 , pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		cout << S1 << endl; // print the last word in the string
	}

}

int main()
{
	PrintEachWordInString(ReadString());

	system("pause>0");
}
*/








// Problem 36 (Count Each Word In String) ========
/*
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your Sting?\n";
	getline(cin, S1);

	return S1;
}

short CountWords(string S1)
{
	string delim = " ";
	short pos = 0;
	string sWord;
	short Counter = 0;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			Counter++;
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		Counter++; // Counts the last word
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();

	cout << "\nThe number of Words in your string is: ";
	cout << CountWords(S1) << endl;

	system("pause>0");
}
*/








// Problem 37 (Split String) =====================
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your Sting?\n";
	getline(cin, S1);

	return S1;
}

vector<string> SplitString(string S1 , string delim)
{

	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

int main()
{
	vector<string> vString;

	vString = SplitString(ReadString() , " ");

	cout << "Tokens = " << vString.size() << endl;

	for (string &s : vString)
	{
		cout << s << endl;
	}

	system("pause>0");
}
*/








// Problem 38 (TrimLeft , TrimRight , Trim) ======
/*
#include <iostream>
#include <string>

using namespace std;

string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i , S1.length() - i);
		}
	}
	return "";
}

string TrimRight(string S1)
{
	for (short i = S1.length(); i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0 , i + 1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}

int main()
{

	string S1 = "    Abdullah Salem Bawazir    ";

	cout << "\nString     = " << S1;
	cout << "\n\nTrim Left  = " << TrimLeft(S1);
	cout << "\nTrim Right = " << TrimRight(S1);
	cout << "\nTrim       = " << Trim(S1) << endl;

	system("pause>0");
}
*/








// Prroblem 39 (Join String) =====================
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vString , string Delim)
{
	string S1 = "";

	for (string &s : vString)
	{
		S1 += s + Delim;
	}

	return S1.substr(0 , S1.length() - Delim.length());
}

int main()
{

	vector<string> vString = {"Abdullah" , "Salem" , "Bawazir"};

	cout << "\nVector After Join: \n";
	cout << JoinString(vString , ",");

	system("pause>0");
}
*/








// Prroblem 40 (Join String (OverLoading)) =======
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";

	for (string &s : vString)
	{
		S1 += s + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string arrString[] , short Lenght , string Delim)
{
	string S1 = "";

	for (short i = 0; i < Lenght; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}

int main()
{

	vector<string> vString = {"Abdullah" , "Salem" , "Bawazir"};
	cout << "\nVecot After Join: \n";
	cout << JoinString(vString, " | ");


	string arrString[] = { "Hamza" , "Yahya" , "Al-wajeeh" };
	cout << "\n\nArray After Join: \n";
	cout << JoinString(arrString , 3 , " , ");


	system("pause>0");
}
*/








// Problem 41 (Reverse Words) ====================
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your Sting?\n";
	getline(cin, S1);

	return S1;
}

string TrimRight(string S1)
{
	for (short i = S1.length(); i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}

vector<string> SplitString(string S1, string delim)
{

	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

string ReverseWordsInString(string S1)
{
	vector<string> vString;
	string S2 = "";

	vString = SplitString(S1 , " ");

	// declare itrator
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + " ";
	}

	S2.substr(0 , S2.length() - 1); // Remove last space 
	//TrimRight(S2);

	return S2;

}

int main()
{
	string S1 = ReadString();
	cout << "\n\nString After Reversing Words :\n";
	cout << endl << ReverseWordsInString(S1) ;

	system("pause>0");
}
*/








// Problem 42 (Replace Words) ====================
/*
#include <iostream>
#include <string>
#include "Source.h"

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string S1 , string StringToReplace , string ReplaceTo) {
	
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos , StringToReplace.length() , ReplaceTo);
		pos = S1.find(StringToReplace);
	}

	return S1;

}

int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country.";
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

	string StringAfterReplace = ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

	cout << "\nOriginal String : \n" << S1;
	cout << "\n\nString After Replace : ";
	cout << "\n" << StringAfterReplace << "\n\n";


	system("pause");
}
*/








// Problem 43 (Replace Words (Custom)) ==========
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string LowerAllString(string str)
{

	for (short i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;

}

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 += s + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

string ReplaceWordsUsingCustomFunction(string S1 , string StringToReplace , 
										string ReplaceTo , bool MatchCase = true) {

	vector<string> vString = SplitString(S1 , " ");

	for (string& s : vString) {

		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = ReplaceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = ReplaceTo;
			}
		}
	}

	return JoinString(vString , " ");

}

int main() {

	string S1 = "Welcome to Jordan , Jordan is a nice country .";
	string StringToReplace = "jordan";
	string ReplacTo = "USA";

	short pos = S1.find(StringToReplace);

	cout << "\nOriginal String : \n" << S1;

	cout << "\n\nReplace with match case : \n";
	cout << ReplaceWordsUsingCustomFunction(S1 , StringToReplace , ReplacTo);

	cout << "\n\nReplace with don't match case : \n";
	cout << ReplaceWordsUsingCustomFunction(S1, StringToReplace, ReplacTo , false) << "\n\n";


	system("pause>0");
}
*/








// Problem 44 (Remove Punctuations) =============
/*
#include <iostream>
#include <string>

using namespace std;

string RemovePunctuationsFromString(string S1) {

	string S2 = "";

	for (short i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}

	return S2;
}

int main()
{
	string S1 = "Welcome to Jordan, Jordan is a nice country: it's amazing.";

	cout << "\nOriginal String : \n" << S1;
	cout << "\n\nPunctuations Removed : \n" << RemovePunctuationsFromString(S1) << "\n\n";

	system("pause>0");
}
*/








// Problem 45 (Convert Record to Line) =========
/*
#include <iostream>
#include <string>

using namespace std;

struct strClient
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;

};

strClient ReadNewClient() {

	strClient Client;
	cout << "\nPleace Enter Client Data : \n";
	cout << "____________________________\n\n";

	cout << "Enter Account Number?";
	getline(cin, Client.AccountNumber);

	cout << "Enter PinCode?";
	getline(cin, Client.PinCode);

	cout << "Enter Name?";
	getline(cin, Client.Name);

	cout << "Enter Phone?";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance?";
	cin >> Client.AccountBalance;


	return Client;

}

string ConvertRecordToLine(strClient Client, string Separator = "#//#") {

	string strClientRecord = "";

	strClientRecord += Client.AccountNumber + Separator;
	strClientRecord += Client.PinCode + Separator;
	strClientRecord += Client.Name + Separator;
	strClientRecord += Client.Phone + Separator;
	strClientRecord += to_string(Client.AccountBalance);

	return strClientRecord;
}

int main() {

	strClient Client;
	Client = ReadNewClient();

	cout << "\n\nClient Record for saving is : \n";
	cout << ConvertRecordToLine(Client) << endl ;

	system("pause>0");
}
*/









// Problem 46 (Convert Line to Record) =========
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};


vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

sClient ConvertLineToRecord(string Line , string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line , Separator);

	sClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);

	
	return Client;
}

void PrintClientRecord(sClient Client) {

	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "\nAccount Number :" << Client.AccountNumber;
	cout << "\nPin Code       :" << Client.PinCode;
	cout << "\nName           :" << Client.Name;
	cout << "\nPhone          :" << Client.Phone;
	cout << "\nAccount Balance:" << Client.AccountBalance;

	cout << endl;
}

int main() {

	string Line = "A150#//#1234#//#Abdullah Bawazir#//#716693719#//#5000";
	cout << "\nLine Record is : \n" << Line;

	sClient Client = ConvertLineToRecord(Line);
	PrintClientRecord(Client);



	system("pause>0");
}
*/








// Problem 47 (Add Clients to File) ============
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct strClient
{

	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;

};

strClient ReadNewClient() {

	strClient Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws , Client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;


	return Client;

}

string ConvertRecordToLine(strClient Client, string Separator = "#//#") {

	string strClientRecord = "";

	strClientRecord += Client.AccountNumber + Separator;
	strClientRecord += Client.PinCode + Separator;
	strClientRecord += Client.Name + Separator;
	strClientRecord += Client.Phone + Separator;
	strClientRecord += to_string(Client.AccountBalance);

	return strClientRecord;
}

void AddDataLineToFile(string FileName, string DataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{

		MyFile << DataLine << endl;
		MyFile.close();

	}
}

void AddNewClient() {

	strClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName , ConvertRecordToLine(Client));

}

void AddClients() {

	char AddMore = 'Y';

	do
	{

		system("cls");
		cout << "Adding New Client : \n\n";
		AddNewClient();
		cout << "\nClient Added Successfully, Do Want To Add More Client ?";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');


}

int main() {

	AddClients();
	system("pause>0");
}
*/








// Problem 48 (Show All Clients) ===============
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct strClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

strClient ConvertLineToRecord(string Line, string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line, Separator);

	strClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);


	return Client;
}

vector <strClient> LoadDataFromFileToVector(string FileName)
{

	vector<strClient> vClientData;

	fstream MyFile;
	MyFile.open(FileName, ios::in); // Read Mode

	if (MyFile.is_open())
	{
		string Line;
		strClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClientData.push_back(Client);
		}

		MyFile.close();

	}

	return vClientData;

}

void PrintClientRecord(strClient Client) {

	cout << "|" << setw(16) << left << Client.AccountNumber;
	cout << "|" << setw(10) << left << Client.PinCode;
	cout << "|" << setw(40) << left << Client.Name;
	cout << "|" << setw(12) << left << Client.Phone;
	cout << "|" << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector<strClient> vClientDatas) {

	cout << "\n\t\t\t\t\tClients List (" << vClientDatas.size() << ") Client(S) .";
	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;
	
	cout << "|" << left << setw(16) << "Account Number";
	cout << "|" << left << setw(10) << "Pin Code";
	cout << "|" << left << setw(40) << "Client Name";
	cout << "|" << left << setw(12) << "Phone";
	cout << "|" << left << setw(12) << "Account Balance";
	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;

	for (strClient& Client : vClientDatas) {

		PrintClientRecord(Client);
		cout << endl;

	}

	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;

}

int main() {

	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);
	PrintAllClientsData(vClientDatas);

	
	system("pause>0");
	return 0;
}
*/








// Problem 49 (Find Client by AccountNumber) ===
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct strClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
};

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPleace enter AccountNumber? ";
	getline(cin, AccountNumber);

	return AccountNumber;
}

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

strClient ConvertLineToRecord(string Line, string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line, Separator);

	strClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);


	return Client;
}

vector <strClient> LoadDataFromFileToVector(string FileName)
{

	vector<strClient> vClientDatas;
	fstream MyFile;

	MyFile.open(FileName, ios::in); // Read Mode
	if (MyFile.is_open())
	{
		string Line;
		strClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClientDatas.push_back(Client);
		}

		MyFile.close();

	}

	return vClientDatas;

}

void PrintClientRecord(strClient Client) {

	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "\nAccount Number :" << Client.AccountNumber;
	cout << "\nPin Code       :" << Client.PinCode;
	cout << "\nName           :" << Client.Name;
	cout << "\nPhone          :" << Client.Phone;
	cout << "\nAccount Balance:" << Client.AccountBalance;

	cout << endl;
}

bool FindClientByAccountNumber(string AccountNumber , strClient& Client) {

	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}

int main() {

	strClient Client;
	string AccountNumber = ReadClientAccountNumber();

	if (FindClientByAccountNumber(AccountNumber , Client))
	{
		PrintClientRecord(Client);
	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Not Found !.";
	}


	system("pause>0");
}
*/








// Problem 50 (Delete Client by AccuntNumber) ==
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct strClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;
};

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPleace Enter AccountNumber? ";
	getline(cin, AccountNumber);

	return AccountNumber;
}

string ConvertRecordToLine(strClient Client, string Separator = "#//#") {

	string strClientRecord = "";

	strClientRecord += Client.AccountNumber + Separator;
	strClientRecord += Client.PinCode + Separator;
	strClientRecord += Client.Name + Separator;
	strClientRecord += Client.Phone + Separator;
	strClientRecord += to_string(Client.AccountBalance);

	return strClientRecord;
}

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

strClient ConvertLineToRecord(string Line, string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line, Separator);

	strClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);


	return Client;
}

vector <strClient> LoadClientDataFromFileToVector(string FileName)
{

	vector<strClient> vClientDatas;
	fstream MyFile;

	MyFile.open(FileName, ios::in); // Read Mode
	if (MyFile.is_open())
	{
		string Line = "";
		strClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClientDatas.push_back(Client);
		}

		MyFile.close();

	}

	return vClientDatas;

}

bool FindClientByAccountNumber(string AccountNumber, vector<strClient> vClientDatas , strClient& Client) {

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}

void PrintClientRecord(strClient Client) {

	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "\nAccount Number :" << Client.AccountNumber;
	cout << "\nPin Code       :" << Client.PinCode;
	cout << "\nName           :" << Client.Name;
	cout << "\nPhone          :" << Client.Phone;
	cout << "\nAccount Balance:" << Client.AccountBalance;

	cout << endl;
}

vector<strClient> SaveClientsDataToFile(string FileName , vector<strClient> vClientDatas) {

	fstream MyFile;
	MyFile.open(FileName , ios::out); // OverWrite
	string DataLine = "";

	if (MyFile.is_open())
	{
		for (strClient& C : vClientDatas) {

			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}

		}
		MyFile.close();
	}

	return vClientDatas;

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber , vector<strClient>& vClientDatas) {

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}

	}

	return false;

}

bool DeleteClientByAccountNumber(string AccountNumber , vector<strClient>& vClientDatas) {

	strClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber , vClientDatas , Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to delete this client ? y/n ? ";
		cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{

			MarkClientForDeleteByAccountNumber(AccountNumber , vClientDatas);
			SaveClientsDataToFile(ClientsFileName , vClientDatas);

			// Refresh vector
			vClientDatas = LoadClientDataFromFileToVector(ClientsFileName);

			cout << "\n\nClient Deleted Successfully .";
			return true;
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Is Not Found !!.";
		return false;
	}


}

int main() {

	vector<strClient> vClientDatas = LoadClientDataFromFileToVector(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(AccountNumber , vClientDatas);

	system("pause>0");
}
*/








// Problem 51 (Update Client By AccountNumber) = 
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct strClient
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;
	bool MarkForUpdate = false;

};

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPleace enter AccountNumber? ";
	getline(cin, AccountNumber);

	return AccountNumber;
}

strClient ChangeClientRecords(string AccountNumber) {

	strClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "\n\nEnter Pin Code ? ";
	getline(cin >> ws ,Client.PinCode);

	cout << "Enter Name ? ";
	getline(cin, Client.Name);

	cout << "Enter Phone ? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ? ";
	cin >> Client.AccountBalance;


	return Client;

}

string ConvertRecordToLine(strClient Client, string Separator = "#//#") {

	string strClientRecord = "";

	strClientRecord += Client.AccountNumber + Separator;
	strClientRecord += Client.PinCode + Separator;
	strClientRecord += Client.Name + Separator;
	strClientRecord += Client.Phone + Separator;
	strClientRecord += to_string(Client.AccountBalance);

	return strClientRecord;
}

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

strClient ConvertLineToRecord(string Line, string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line, Separator);

	strClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);


	return Client;
}

vector <strClient> LoadClientDataFromFileToVector(string FileName)
{

	vector<strClient> vClientDatas;
	fstream MyFile;

	MyFile.open(FileName, ios::in); // Read Mode
	if (MyFile.is_open())
	{
		string Line;
		strClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClientDatas.push_back(Client);
		}

		MyFile.close();

	}

	return vClientDatas;

}

bool FindClientByAccountNumber(string AccountNumber, vector<strClient> vClientDatas, strClient& Client) {

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}

void PrintClientRecord(strClient Client) {

	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "\nAccount Number :" << Client.AccountNumber;
	cout << "\nPin Code       :" << Client.PinCode;
	cout << "\nName           :" << Client.Name;
	cout << "\nPhone          :" << Client.Phone;
	cout << "\nAccount Balance:" << Client.AccountBalance;

	cout << endl;
}

vector<strClient> SaveClientsDataToFile(string FileName, vector<strClient> vClientDatas) {

	fstream MyFile;
	MyFile.open(FileName, ios::out); // OverWrite
	string DataLine = "";

	if (MyFile.is_open())
	{

		for (strClient& C : vClientDatas) {

			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}

		}

		MyFile.close();

	}

	return vClientDatas;

}

bool UpdateClientByAccountNumber(vector<strClient>& vClientDatas , string AccountNumber) {

	strClient Client;
	char Answer = 'y';

	if (FindClientByAccountNumber(AccountNumber , vClientDatas , Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want update this client ? y/n ?";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (strClient& C : vClientDatas) {

				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecords(AccountNumber);
					break;
				}

			}

			SaveClientsDataToFile(ClientsFileName , vClientDatas);
			cout << "\n\nClient Updated Successfully .";
			return true;

		}

	}
	else
	{
		cout << "Client With Account Number (" << AccountNumber << ") Is Not Found !.";
	}

}

int main() {

	vector<strClient> vClientDatas = LoadClientDataFromFileToVector(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(vClientDatas , AccountNumber);

	system("pause>0");
}
*/









// Project 1 (Bank) ============================
/*
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;
const string ClientsFileName = "Clients.txt";

void ShowMainMenu(); // Identifire ShowMainMenu function.

struct strClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;
};

enum enMainMenuOptions
{
	enShowClients = 1,
	enAddNewClient = 2,
	enDeleteClient = 3,
	enUpdateClient = 4,
	enFindClient = 5,
	enExit = 6
};

vector<string> SplitString(string S1, string delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	// use find() function to get the position of delimoter in the string
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length()); // erase() until position and move to next word
	}
	if (S1 != "")
	{
		vString.push_back(S1); // add the last word to vector
	}

	return vString;
}

short ReadMainMenuOprion() {

	int Choice = 0;
	do
	{

		cout << "Choose what do you want to do? [1 to 6] ? ";
		cin >> Choice;

	} while (Choice < 1 || Choice > 6);

	return Choice;

}

strClient ChangeClientRecords(string AccountNumber) {

	strClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "\nEnter Pin Code ? ";
	getline(cin >> ws, Client.PinCode);

	cout << "Enter Name ? ";
	getline(cin, Client.Name);

	cout << "Enter Phone ? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ? ";
	cin >> Client.AccountBalance;


	return Client;

}

strClient ConvertLineToRecord(string Line, string Separator = "#//#") {

	vector<string> vClienData = SplitString(Line, Separator);

	strClient Client;
	Client.AccountNumber = vClienData[0];
	Client.PinCode = vClienData[1];
	Client.Name = vClienData[2];
	Client.Phone = vClienData[3];
	Client.AccountBalance = stod(vClienData[4]);


	return Client;
}

bool FindClientByAccountNumber(string AccountNumber, vector<strClient> vClientDatas, strClient& Client) {

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}

vector <strClient> LoadDataFromFileToVector(string FileName)
{

	vector<strClient> vClientDatas;

	fstream MyFile;
	MyFile.open(FileName, ios::in); // Read Mode

	if (MyFile.is_open())
	{
		string Line = "";
		strClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClientDatas.push_back(Client);
		}

		MyFile.close();

	}

	return vClientDatas;

}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPleace Enter AccountNumber? ";
	getline(cin >> ws , AccountNumber);

	return AccountNumber;
}

void AddDataLineToFile(string FileName, string DataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::app);

	if (MyFile.is_open())
	{

		MyFile <<endl << DataLine ;
		MyFile.close();

	}
}

string ConvertRecordToLine(strClient Client , string Seperator = "#//#") {


	string strClientRecord = "";

	strClientRecord += Client.AccountNumber + Seperator;
	strClientRecord += Client.PinCode + Seperator;
	strClientRecord += Client.Name + Seperator;
	strClientRecord += Client.Phone + Seperator;
	strClientRecord += to_string(Client.AccountBalance);


	return strClientRecord;

}

bool IsExitsInTheFile(string AccountNumber, string FileName) {

	vector<strClient> vClientDatas;
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		strClient Client;

		while (getline(MyFile, Line))
		{

			Client = ConvertLineToRecord(Line);
			if (Client.AccountNumber == AccountNumber)
			{
				MyFile.close();
				return true;
			}
			vClientDatas.push_back(Client);
		}
		MyFile.close();
	}
	return false;

}

strClient ReadNewClient() {

	strClient Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);
	while (IsExitsInTheFile(Client.AccountNumber, ClientsFileName))
	{
		cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number ? ";
		getline(cin >> ws, Client.AccountNumber);
	}

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;


	return Client;

}

void AddNewClient() {

	strClient Client;
	Client = ReadNewClient();
	string DataLine = ConvertRecordToLine(Client);
	AddDataLineToFile(ClientsFileName, DataLine);

}

void AddClients() {

	char AddMore = 'Y';

	do
	{

		system("cls");
		cout << "\n---------------------------------------\n";
		cout << "\tAdd New Clients Screen ";
		cout << "\n---------------------------------------\n";
		cout << "Adding New Client : \n";
		cout << "____________________\n\n";
		AddNewClient();

		cout << "\nClient Added Successfully, Do Want To Add More Client ?";
		cin >> AddMore;
		cout << "\n___________________________________________________________";


	} while (toupper(AddMore) == 'Y');


}

void ShowAddClientsScreen() {

	AddClients();

}

void PrintClientCard(strClient Client) {

	cout << "\n\nThe following is the extracted client record : \n";
	cout << "__________________________________________________\n";
	cout << "\nAccount Number :" << Client.AccountNumber;
	cout << "\nPin Code       :" << Client.PinCode;
	cout << "\nName           :" << Client.Name;
	cout << "\nPhone          :" << Client.Phone;
	cout << "\nAccount Balance:" << Client.AccountBalance;
	cout << "\n__________________________________________________\n";

	cout << endl;
}

void PrintClientRecord(strClient Client) {

	cout << "|" << setw(16) << left << Client.AccountNumber;
	cout << "|" << setw(10) << left << Client.PinCode;
	cout << "|" << setw(40) << left << Client.Name;
	cout << "|" << setw(12) << left << Client.Phone;
	cout << "|" << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector<strClient> vClientDatas) {

	cout << "\n\t\t\t\t\tClients List (" << vClientDatas.size() << ") Client(S) .";
	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;

	cout << "|" << left << setw(16) << "Account Number";
	cout << "|" << left << setw(10) << "Pin Code";
	cout << "|" << left << setw(40) << "Client Name";
	cout << "|" << left << setw(12) << "Phone";
	cout << "|" << left << setw(12) << "Account Balance";
	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;

	if (vClientDatas.size() == 0)
	{
		cout << "\t\t\t\t No Clients Available In the System!";
	}
	else
	{
		for (strClient& Client : vClientDatas) {

			PrintClientRecord(Client);
			cout << endl;

		}
	}
	
	cout << "\n________________________________________________________";
	cout << "__________________________________________\n" << endl;

}

void ShowAllClientsScreen()
{
	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);
	PrintAllClientsData(vClientDatas);

}

vector<strClient> SaveClientsDataToFile(string FileName, vector<strClient> vClientDatas) {

	fstream MyFile;
	MyFile.open(FileName, ios::out); // OverWrite
	string DataLine = "";

	if (MyFile.is_open())
	{
		for (strClient& C : vClientDatas) {

			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}

		}
		MyFile.close();
	}

	return vClientDatas;

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<strClient>& vClientDatas) {

	for (strClient & C : vClientDatas) {

		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}

	}

	return false;

}

bool DeleteClientByAccountNumber(string AccountNumber, vector<strClient>& vClientDatas) {

	strClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClientDatas, Client))
	{
		
		PrintClientCard(Client);

		cout << "\n\nAre you sure you want to delete this client ? [Y/N] : ";
		cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{

			MarkClientForDeleteByAccountNumber(AccountNumber, vClientDatas);
			SaveClientsDataToFile(ClientsFileName, vClientDatas);

			// Refresh vector
			vClientDatas = LoadDataFromFileToVector(ClientsFileName);

			cout << "\n\nClient Deleted Successfully .";
			cout << "\n_________________________________";
			return true;
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Is Not Found !!.";
		cout << "\n______________________________________________________________________";
		return false;
	}


}

void ShowDeleteClientsScreen() {


	cout << "\n---------------------------------------\n";
	cout << "\t Delete Client Screen ";
	cout << "\n---------------------------------------\n";
	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(AccountNumber , vClientDatas);

}

bool UpdateClientByAccountNumber(string AccountNumber , vector<strClient>& vClientDatas) {

	strClient Client;
	char Answer = 'y';

	if (FindClientByAccountNumber(AccountNumber, vClientDatas, Client))
	{
		PrintClientCard(Client);

		cout << "\n\nAre you sure you want update this client ? y/n ?";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (strClient& C : vClientDatas) {

				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecords(AccountNumber);
					break;
				}

			}

			SaveClientsDataToFile(ClientsFileName, vClientDatas);
			cout << "\n\nClient Updated Successfully .";
			cout << "\n_______________________________";
			return true;

		}

	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Is Not Found !.";
		cout << "\n___________________________________________________________________";
	}

}

void ShowUpdateClientScreen() {

	cout << "\n---------------------------------------\n";
	cout << "\t Update Client Screen ";
	cout << "\n---------------------------------------\n";
	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();


	UpdateClientByAccountNumber(AccountNumber, vClientDatas);

}

void ShowFindClientScreen() {

	cout << "\n---------------------------------------\n";
	cout << "\t Find Client Screen ";
	cout << "\n---------------------------------------\n";

	vector<strClient> vClientDatas = LoadDataFromFileToVector(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	strClient Client;

	if (FindClientByAccountNumber(AccountNumber , vClientDatas , Client))
	{
		PrintClientCard(Client);
	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Is Not Found !.";
		cout << "\n___________________________________________________________________";
	}

}

void ShowEndScreen() {

	cout << "\n-----------------------------\n";
	cout << "\tProgram End :-)\n";
	cout << "-----------------------------\n";
}

void GoBackToMainMenu() {

	cout << "\n\nPress Any Key To Go Back To Main Menu...";
	system("pause>0");
	ShowMainMenu();

}

void PerformMainMenuOption(enMainMenuOptions MainMenuOption) {


	switch (MainMenuOption)
	{

			case enMainMenuOptions::enShowClients:
			{
				system("cls");
				ShowAllClientsScreen();
				GoBackToMainMenu();
				break;
			}

			case enMainMenuOptions::enAddNewClient:
			{
				system("cls");
				ShowAddClientsScreen();
				GoBackToMainMenu();
				break;
			}

			case enMainMenuOptions::enDeleteClient:
			{
				system("cls");
				ShowDeleteClientsScreen();
				GoBackToMainMenu();
				break;
			}

			case enMainMenuOptions::enUpdateClient:
			{
				system("cls");
				ShowUpdateClientScreen();
				GoBackToMainMenu();
				break;
			}

			case enMainMenuOptions::enFindClient:
			{
				system("cls");
				ShowFindClientScreen();
				GoBackToMainMenu();
				break;
			}

			case enMainMenuOptions::enExit:
			{
				system("cls");
				ShowEndScreen();
				break;
			}
  
	}

}

void ShowMainMenu()
{
	system("cls");
	cout << "=============================================\n";
	cout << "\t\tShow Menue Screen\n";
	cout << "=============================================\n";
	cout << "\t[1] Show Clients List.\n";
	cout << "\t[2] Add New Client.\n";
	cout << "\t[3] Delete Client.\n";
	cout << "\t[4] Update Client Info.\n";
	cout << "\t[5] Find Client.\n";
	cout << "\t[6] Exit.\n";
	cout << "=============================================\n";
	
	PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOprion());

}

int main() {


	ShowMainMenu();

	system("pause>0");
	return 0;

}
*/




// Convert Record to line
/*
#include <iostream>
#include <string>

using namespace std;

struct sClient {
	
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;

};

sClient ReadClientRecord() {

	sClient Client;

	cout << "Enter Account Number? ";
	getline(cin, Client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(sClient Client , string Seporator = "#//#") {

	string ClientLine = "";

	ClientLine += Client.AccountNumber + Seporator;
	ClientLine += Client.PinCode + Seporator;
	ClientLine += Client.Name + Seporator;
	ClientLine += Client.Phone + Seporator;
	ClientLine += to_string(Client.AccountBalance);

	return ClientLine;

}

int main() {


	cout << "Please Enter Client Data: \n\n";

	sClient Client;
	Client = ReadClientRecord();

	cout << "\n\n\n Client Record for saving is: \n";
	cout << ConvertRecordToLine(Client) << endl;


	system("pause>0");
}
*/


// Convert Line to Record
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sClient {

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;

};

vector<string> SplitString(string S1, string delim) {

	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClient ConvertLineToRecord(string Line , string Seperator = "#//#") {

	vector<string> vClientData;
	sClient Client;

	vClientData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

	return Client;

}

void PrintClientRecord(sClient Client) {

	cout << "\nThe following is the extracted Client Record: \n\n";
	cout << "Account Number :" << Client.AccountNumber << endl;
	cout << "PinCode        :" << Client.PinCode << endl;
	cout << "Name           :" << Client.Name << endl;
	cout << "Phone          :" << Client.Phone << endl;
	cout << "Account Balance:" << Client.AccountBalance << endl;

}


int main() {

	string LineRecord = "A100#//#12345#//#Abdullah Bawazir#//#716693719#//#500";
	cout << "\nLine Record is: \n";
	cout << LineRecord << endl;

	sClient Client = ConvertLineToRecord(LineRecord);
	PrintClientRecord(Client);


	system("pause>0");

}
*/


// Add Clients to file
/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
const string ClientFileName = "Clients.txt";

struct sClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
};

sClient ReadNewClient() {

	sClient Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws , Client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;

}

string ConvertRecordToLine(sClient Client , string Seperator = "#//#") {

	string ClientDataLine = "";

	ClientDataLine += Client.AccountNumber + Seperator;
	ClientDataLine += Client.PinCode + Seperator;
	ClientDataLine += Client.Name + Seperator;
	ClientDataLine += Client.Phone + Seperator;
	ClientDataLine += to_string(Client.AccountBalance);

	return ClientDataLine;

}

void AddClientDataToFile(string ClientFileName , string ClientDataLine) {

	fstream MyFile;
	MyFile.open(ClientFileName, ios::out | ios::app);

	if (MyFile.is_open())
	{

		MyFile << ClientDataLine << endl;
		MyFile.close();

	}

}

void AddNewClient() {

	sClient Client;
	Client = ReadNewClient();
	AddClientDataToFile(ClientFileName , ConvertRecordToLine(Client));

}

void AddClients() {

	char AddMore = 'Y';

	do
	{

		system("cls");
		cout << "Adding New Client: \n\n";

		AddNewClient();

		cout << "\n\nClient Added Successfully , do you want to add more clients? ";
		cin >> AddMore;


	} while (toupper(AddMore) == 'Y');

}

int main() {


	AddClients();

	system("pause>0");
	return 0;
}
*/


// Show All Clients 
/*
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip> // for setw() function

using namespace std;
const string ClientFileName = "Clients.txt";

struct sClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
};

vector<string> SplitString(string S1, string delim) {

	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClient ConvertLineToRecord(string Line , string Seperator = "#//#") {

	vector<string> vClientsData;
	sClient Client;

	vClientsData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientsData[0];
	Client.PinCode = vClientsData[1];
	Client.Name = vClientsData[2];
	Client.Phone = vClientsData[3];
	Client.AccountBalance = stod(vClientsData[4]);

	return Client;

}

vector<sClient> LoadClientsDataFromFile(string ClientFileName) {

	vector<sClient> vClientsData;
	fstream MyFile;

	MyFile.open(ClientFileName , ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile , Line))
		{

			Client = ConvertLineToRecord(Line);
			vClientsData.push_back(Client);

		}

		MyFile.close();

	}

	return vClientsData;

}

void PrintClientRecord(sClient Client) {

	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector<sClient> vClientsData) {

	cout << "\n\t\t\t\t\t Clients List (" << vClientsData.size() << ") Client(s)." ;
	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	cout << "| " << left << setw(15) << "Acount Number ";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	for (sClient &Client : vClientsData) {

		PrintClientRecord(Client);
		cout << endl;

	}

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

}

int main() {

	vector<sClient> vClientsData = LoadClientsDataFromFile(ClientFileName);
	PrintAllClientsData(vClientsData);


	system("pause>0");
}
*/


// Find Client By Account Number
/*
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
const string ClientFileName = "Clients.txt";

struct sClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
};

vector<string> SplitString(string S1, string delim) {

	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {

	vector<string> vClientsData;
	sClient Client;

	vClientsData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientsData[0];
	Client.PinCode = vClientsData[1];
	Client.Name = vClientsData[2];
	Client.Phone = vClientsData[3];
	Client.AccountBalance = stod(vClientsData[4]);

	return Client;

}

vector<sClient> LoadClientsDataFromFile(string ClientFileName) {

	vector<sClient> vClientsData;
	fstream MyFile;

	MyFile.open(ClientFileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{

			Client = ConvertLineToRecord(Line);
			vClientsData.push_back(Client);

		}

		MyFile.close();

	}

	return vClientsData;

}

void PrintClientRecord(sClient Client) {

	cout << "\n-------------------------------------------";
	cout << "\nThe following is the extracted Client Record: \n\n";
	cout << "| Account Number  :" << Client.AccountNumber << endl;
	cout << "| PinCode         :" << Client.PinCode << endl;
	cout << "| Name            :" << Client.Name << endl;
	cout << "| Phone           :" << Client.Phone << endl;
	cout << "| Account Balance :" << Client.AccountBalance << endl;
	cout << "-------------------------------------------\n";

}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPlease Enter Account Number? ";
	cin >> AccountNumber;

	return AccountNumber;
}

bool FindClientByAccountNumber(sClient & Client , string AccountNumber) {

	vector<sClient> vClientsData = LoadClientsDataFromFile(ClientFileName);

	for (sClient & C : vClientsData)
	{

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}

	return false;

}

int main() {

	sClient Client;
	string AccountNumber = ReadClientAccountNumber();

	if (FindClientByAccountNumber(Client , AccountNumber))
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccountNumber << ") Not Found.!";
	}


	system("pause>0");
}
*/


// Delete CLient By Account Number
/*
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
const string ClientFileName = "Clients.txt";

struct sClient
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;

};

vector<string> SplitString(string S1, string delim) {

	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {

	vector<string> vClientsData;
	sClient Client;

	vClientsData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientsData[0];
	Client.PinCode = vClientsData[1];
	Client.Name = vClientsData[2];
	Client.Phone = vClientsData[3];
	Client.AccountBalance = stod(vClientsData[4]);

	return Client;

}

string ConvertRecordToLine(sClient Client, string Seporator = "#//#") {

	string ClientLine = "";

	ClientLine += Client.AccountNumber + Seporator;
	ClientLine += Client.PinCode + Seporator;
	ClientLine += Client.Name + Seporator;
	ClientLine += Client.Phone + Seporator;
	ClientLine += to_string(Client.AccountBalance);

	return ClientLine;

}

vector<sClient> LoadClientsDataFromFile(string ClientFileName) {

	vector<sClient> vClientsData;
	fstream MyFile;

	MyFile.open(ClientFileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{

			Client = ConvertLineToRecord(Line);
			vClientsData.push_back(Client);

		}

		MyFile.close();

	}

	return vClientsData;

}

void PrintClientRecord(sClient Client) {

	cout << "\n-------------------------------------------";
	cout << "\nThe following is the extracted Client Record: \n\n";
	cout << "| Account Number  :" << Client.AccountNumber << endl;
	cout << "| PinCode         :" << Client.PinCode << endl;
	cout << "| Name            :" << Client.Name << endl;
	cout << "| Phone           :" << Client.Phone << endl;
	cout << "| Account Balance :" << Client.AccountBalance << endl;
	cout << "-------------------------------------------\n";

}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPlease Enter Account Number? ";
	cin >> AccountNumber;

	return AccountNumber;
}

bool FindClientByAccountNumber(sClient & Client, vector<sClient> & vClients , string AccountNumber) {


	for (sClient & C : vClients)
	{

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}

	return false;

}

vector<sClient> SaveClientsDataToFile(string FileName , vector<sClient> vClients) {

	fstream MyFile;
	MyFile.open(FileName , ios::out);

	string DataLine = "";

	if (MyFile.is_open())
	{

		for (sClient & C : vClients) {

			if (C.MarkForDelete == false)
			{

				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;

			}

		}

		MyFile.close();

	}

	return vClients;

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber , vector<sClient> & vClient) {

	for (sClient & C : vClient) {

		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}

	}

	return false;

}

bool DeleteClientByAccountNumber(vector<sClient> & vClients , string AccountNumber) {

	sClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(Client, vClients, AccountNumber)) {

		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to delete this client? y/n ? ";	
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{

			MarkClientForDeleteByAccountNumber(AccountNumber , vClients);
			SaveClientsDataToFile(ClientFileName , vClients);

			// Refresh vector to new data
			vClients = LoadClientsDataFromFile(ClientFileName);

			cout << "\n\nClient Deleted Successfully.";
			return true;

		}

	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccountNumber << ") Not Found.!";
		return false;
	}

}

int main() {


	vector<sClient> vClients = LoadClientsDataFromFile(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(vClients , AccountNumber);


	system("pause>0");
}
*/



// Update Client By Account Number
/*
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
const string ClientFileName = "Clients.txt";

struct sClient
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;

};

vector<string> SplitString(string S1, string delim) {

	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {

	vector<string> vClientsData;
	sClient Client;

	vClientsData = SplitString(Line, Seperator);

	Client.AccountNumber = vClientsData[0];
	Client.PinCode = vClientsData[1];
	Client.Name = vClientsData[2];
	Client.Phone = vClientsData[3];
	Client.AccountBalance = stod(vClientsData[4]);

	return Client;

}

string ConvertRecordToLine(sClient Client, string Seporator = "#//#") {

	string ClientLine = "";

	ClientLine += Client.AccountNumber + Seporator;
	ClientLine += Client.PinCode + Seporator;
	ClientLine += Client.Name + Seporator;
	ClientLine += Client.Phone + Seporator;
	ClientLine += to_string(Client.AccountBalance);

	return ClientLine;

}

vector<sClient> LoadClientsDataFromFile(string ClientFileName) {

	vector<sClient> vClientsData;
	fstream MyFile;

	MyFile.open(ClientFileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{

			Client = ConvertLineToRecord(Line);
			vClientsData.push_back(Client);

		}

		MyFile.close();

	}

	return vClientsData;

}

void PrintClientRecord(sClient Client) {

	cout << "\n-------------------------------------------";
	cout << "\nThe following is the extracted Client Record: \n\n";
	cout << "| Account Number  :" << Client.AccountNumber << endl;
	cout << "| PinCode         :" << Client.PinCode << endl;
	cout << "| Name            :" << Client.Name << endl;
	cout << "| Phone           :" << Client.Phone << endl;
	cout << "| Account Balance :" << Client.AccountBalance << endl;
	cout << "-------------------------------------------\n";

}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "\nPlease Enter Account Number? ";
	cin >> AccountNumber;

	return AccountNumber;
}

bool FindClientByAccountNumber(sClient & Client, vector<sClient> & vClients, string AccountNumber) {


	for (sClient & C : vClients)
	{

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}

	return false;

}

vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {

	fstream MyFile;
	MyFile.open(FileName, ios::out);

	string DataLine = "";

	if (MyFile.is_open())
	{

		for (sClient & C : vClients) {

			if (C.MarkForDelete == false)
			{

				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;

			}

		}

		MyFile.close();

	}

	return vClients;

}

sClient ChangeClientRecord(string AccountNumber) {

	sClient Client;

	Client.AccountNumber = AccountNumber;

	cout << "\n\nEnter PinCode? ";
	getline(cin >> ws , Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;

	return Client;

}

bool UpdateClientByAccountNumber(vector<sClient> & vClients, string AccountNumber) {

	sClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(Client, vClients, AccountNumber)) {

		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to Update this client? y/n ? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{

			for (sClient & C : vClients) {

				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;

				}

			}

			SaveClientsDataToFile(ClientFileName, vClients);

			cout << "\n\nClient Updated Successfully.";
			return true;

		}

	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccountNumber << ") Not Found.!";
		return false;
	}

}

int main() {


	vector<sClient> vClients = LoadClientsDataFromFile(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(vClients, AccountNumber);


	system("pause>0");
}
*/


// Bank Projet 1
/*
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
const string ClientsFileName = "Clients.txt";

void ShowMainMenu();

struct sClients
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;

};

enum enMainMenuOptions
{
	enListClients = 1 ,
	enAddClient = 2 ,
	enDeleteClient = 3 ,
	enUpdateClient = 4 ,
	enFindClient = 5 ,
	enExit = 6

};

short ReadMainMenuOption(int From , int To) {

	int Option = 0;
	do
	{

		cout << "Choose what do you want to do? [1 to 6]? ";
		cin >> Option;


	} while (Option < From || Option > To);

	return Option;


}

string Tabs(short TabsNumber)
{
	string tabs = "";
	
	for (short i = 0; i < TabsNumber; i++)
	{
		tabs += "\t";
	}

	return tabs;
}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "Please Enter AccountNumber? ";
	cin >> AccountNumber;

	return AccountNumber;
}

vector<string> SpiltString(string S1 , string delim) {


	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClients ConvertLineToRecord(string Line , string Seperator = "#//#") {

	vector<string> vClients = SpiltString(Line , Seperator);
	sClients Client;

	Client.AccountNumber = vClients[0];
	Client.PinCode = vClients[1];
	Client.Name = vClients[2];
	Client.Phone = vClients[3];
	Client.AccountBalance = stod(vClients[4]);

	return Client;

}

vector<sClients> LoadClientsFromFile(string FileName) {

	vector<sClients> vClients;
	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		sClients Client;

		while (getline(MyFile , Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);

		}

		MyFile.close();

	}

	return vClients;

}

void PrintClientRecord(sClients Client) {

	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector<sClients> vClientsData) {

	cout << "\n" << Tabs(5) << "Clients List (" << vClientsData.size() << ") Client(s).";
	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	cout << "| " << left << setw(15) << "Acount Number ";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;


	if (vClientsData.size() < 1)
	{
		cout << "\n" << Tabs(5) << "No Clients Exists.!\n";
	}
	else
	{
		for (sClients & Client : vClientsData) {

			PrintClientRecord(Client);
			cout << endl;

		}
	}

	

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

}

string ConvertRecordToLine(sClients Client , string Seperator = "#//#") {

	string ClientDataLine = "";

	ClientDataLine += Client.AccountNumber + Seperator;
	ClientDataLine += Client.PinCode + Seperator;
	ClientDataLine += Client.Name + Seperator;
	ClientDataLine += Client.Phone + Seperator;
	ClientDataLine += to_string(Client.AccountBalance);


	return ClientDataLine;

}


bool IsClientExitInTheFile(string AccountNumber) {

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

	for (sClients & C : vClients) {

		if (C.AccountNumber == AccountNumber)
		{
			return true;
		}

	}

	return false;

}


bool IsClientExistsByAccountNumber(string AccountNumber , string FileName) {

	vector<sClients> vClients;
	fstream MyFile;

	MyFile.open(FileName , ios::in);

	if (MyFile.is_open())
	{

		string Line;
		sClients Client;

		while (getline(MyFile , Line))
		{

			Client = ConvertLineToRecord(Line);
			if (Client.AccountNumber == AccountNumber)
			{
				MyFile.close();
				return true;
			}
			vClients.push_back(Client);
		}

		MyFile.close();
	}

	return false;

}

sClients ReadNewClient()  {

	sClients Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);

	while (IsClientExistsByAccountNumber(Client.AccountNumber , ClientsFileName))
	{
		cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
		getline(cin, Client.AccountNumber);
	}


	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;

	
	return Client;

}

void AddClientToFile(string FileName , string Line) {

	fstream MyFile;
	MyFile.open(FileName , ios::out | ios::app);

	if (MyFile.is_open())
	{

		MyFile << Line << endl;
		MyFile.close();

	}

}

void AddNewClient() {

	sClients Client;
	Client = ReadNewClient();
	AddClientToFile(ClientsFileName, ConvertRecordToLine(Client));
	
}

void AddClients() {

	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "\n-------------------------------------\n";
		cout << Tabs(1) << "Add New Clients Screen";
		cout << "\n-------------------------------------\n";
		cout << "Adding New Client:\n\n";

		AddNewClient();

		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
		cin >> AddMore;


	} while (toupper(AddMore) == 'Y');


}

void ShowAddNewClientsScreen() {

	AddClients();

}

void ShowClientsScreen() {

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	PrintAllClientsData(vClients);

}

void PrintClientCardRecord(sClients Client) {

	cout << "\n-------------------------------------------";
	cout << "\nThe following is the extracted Client details: \n\n";
	cout << "| Account Number  :" << Client.AccountNumber << endl;
	cout << "| PinCode         :" << Client.PinCode << endl;
	cout << "| Name            :" << Client.Name << endl;
	cout << "| Phone           :" << Client.Phone << endl;
	cout << "| Account Balance :" << Client.AccountBalance << endl;
	cout << "-------------------------------------------\n";

}

bool FindClientByAccountNumber(vector<sClients> vClients , sClients & Client , string AccountNumber) {


	for (sClients & C : vClients) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}

	return false;

}

bool MarkClientForDeleteByAccountNumber(vector<sClients> & vClients , string AccountNumber) {

	for (sClients & C : vClients) {

		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}

	}

	return false;

}

vector<sClients> SaveClientsDataToFile(string FileName , vector<sClients> vClients) {

	fstream MyFile;
	string DataLine = "";

	MyFile.open(FileName , ios::out);

	if (MyFile.is_open())
	{
		for (sClients & C : vClients) {

			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}

		}
		MyFile.close();
	}

	return vClients;
}

bool DeleteClientByAccountNumber(vector<sClients> & vClients , string AccountNumber)
{

	sClients Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(vClients , Client , AccountNumber))
	{

		PrintClientCardRecord(Client);

		cout << "\n\nAre you sure you want to delete this client? Y/N? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			MarkClientForDeleteByAccountNumber(vClients , AccountNumber);
			SaveClientsDataToFile(ClientsFileName , vClients);

			vClients = LoadClientsFromFile(ClientsFileName);

			cout << "\n\nClient Deleted Successfully.";
			return true;
		}

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Not Fount.!";
		return false;
	}


}

void ShowDeleteClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Delete Client Screen";
	cout << "\n-------------------------------------\n\n";

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(vClients , AccountNumber);

}

void ShowFindClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Find Client Screen";
	cout << "\n-------------------------------------\n\n";

	sClients Client;
	string AccountNumber = ReadClientAccountNumber();
	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

	if (FindClientByAccountNumber(vClients , Client , AccountNumber))
	{
		PrintClientCardRecord(Client);
	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccountNumber << ") Not Found.!";
	}

}

sClients ChangeClientRecord(string AccountNumber) {

	sClients Client;
	Client.AccountNumber = AccountNumber;

	cout << "\nEnter PinCode? ";
	getline(cin >> ws , Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;


	return Client;

}

bool UpdateClientByAccountNumber(vector <sClients> & vClients , string AccountNumber) {

	char Answer = 'n';
	sClients Client;

	if (FindClientByAccountNumber(vClients , Client , AccountNumber))
	{

		PrintClientCardRecord(Client);

		cout << "\n\nAre you sure you want update this client? Y/N? ";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (sClients & C : vClients) {

				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}

			}

			SaveClientsDataToFile(ClientsFileName , vClients);

			cout << "\n\nClient Updated Successfullyt.";
			return true;

		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Not Found.!";
		return false;
	}


}

void ShowUpdateClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Update Client Info Screen";
	cout << "\n-------------------------------------\n\n";

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(vClients , AccountNumber);


}

void ShowExitScreen() {

	cout << "\n-------------------------------\n";
	cout << Tabs(1) << "Program Ends (-:";
	cout << "\n-------------------------------\n";

}

void GoBackToMainMenu() {

	cout << "\n\n\nPress any key to go back to Main Menu...";
	system("pause>0");
	ShowMainMenu();

}

void PerformMainMenuOption(enMainMenuOptions MainMenuOption) {

	switch (MainMenuOption)
	{
		case enMainMenuOptions :: enListClients : {

			system("cls");
			ShowClientsScreen();
			GoBackToMainMenu();
			break;

		}

		case enMainMenuOptions :: enAddClient : {

			system("cls");
			ShowAddNewClientsScreen();
			GoBackToMainMenu();
			break;

		}

		case enMainMenuOptions :: enDeleteClient : {

			system("cls");
			ShowDeleteClientScreen();
			GoBackToMainMenu();
			break;

		}

		case enMainMenuOptions::enUpdateClient: {
			system("cls");
			ShowUpdateClientScreen();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::enFindClient: {

			system("cls");
			ShowFindClientScreen();
			GoBackToMainMenu();
			break;

		}

		case enMainMenuOptions :: enExit : {

			system("cls");
			ShowExitScreen();
			break;
		}
	}

}

void ShowMainMenu() {

	system("cls");
	cout << "=============================================\n";
	cout << Tabs(2) << "Main Menu Screen \n";
	cout << "=============================================\n";
	cout << Tabs(1) << "[1] Show Clients List.\n";
	cout << Tabs(1) << "[2] Add New Client.\n";
	cout << Tabs(1) << "[3] Delete Client.\n";
	cout << Tabs(1) << "[4] Update Client.\n";
	cout << Tabs(1) << "[5] Find Client.\n";
	cout << Tabs(1) << "[6] Exit.\n";
	cout << "=============================================\n";

	PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOption(1 , 6));
	
}

int main() {

	ShowMainMenu();

	system("pause>0");
}
*/


// Bank Extension

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
const string ClientsFileName = "Clients.txt";

void ShowMainMenu();
void ShowTransactionsMenu();

struct sClients
{

	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;

};

enum enMainMenuOptions
{
	enListClients = 1,
	enAddClient = 2,
	enDeleteClient = 3,
	enUpdateClient = 4,
	enFindClient = 5,
	enTransactions = 6 ,
	enExit = 7

};

enum enTransactionsMenuOptions
{
	enDeposit = 1, 
	enWithdraw = 2,
	enTotalBalances = 3,
	enMainMenu = 4
};

short ReadMainMenuOption(int From, int To) {

	int Option = 0;
	do
	{

		cout << "Choose what do you want to do? [1 to 7]? ";
		cin >> Option;


	} while (Option < From || Option > To);

	return Option;


}

string Tabs(short TabsNumber)
{
	string tabs = "";

	for (short i = 0; i < TabsNumber; i++)
	{
		tabs += "\t";
	}

	return tabs;
}

string ReadClientAccountNumber() {

	string AccountNumber = "";
	cout << "Please Enter AccountNumber? ";
	cin >> AccountNumber;

	return AccountNumber;
}

vector<string> SpiltString(string S1, string delim) {


	vector<string> vClientData;

	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vClientData.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vClientData.push_back(S1);
	}

	return vClientData;

}

sClients ConvertLineToRecord(string Line, string Seperator = "#//#") {

	vector<string> vClients = SpiltString(Line, Seperator);
	sClients Client;

	Client.AccountNumber = vClients[0];
	Client.PinCode = vClients[1];
	Client.Name = vClients[2];
	Client.Phone = vClients[3];
	Client.AccountBalance = stod(vClients[4]);

	return Client;

}

vector<sClients> LoadClientsFromFile(string FileName) {

	vector<sClients> vClients;
	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		sClients Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);

		}

		MyFile.close();

	}

	return vClients;

}

void PrintClientRecord(sClients Client) {

	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector<sClients> vClientsData) {

	cout << "\n" << Tabs(5) << "Clients List (" << vClientsData.size() << ") Client(s).";
	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	cout << "| " << left << setw(15) << "Acount Number ";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;


	if (vClientsData.size() == 0)
	{
		cout << "\n" << Tabs(5) << "No Clients Exists.!\n";
	}
	else
	{
		for (sClients & Client : vClientsData) {

			PrintClientRecord(Client);
			cout << endl;

		}
	}



	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

}

string ConvertRecordToLine(sClients Client, string Seperator = "#//#") {

	string ClientDataLine = "";

	ClientDataLine += Client.AccountNumber + Seperator;
	ClientDataLine += Client.PinCode + Seperator;
	ClientDataLine += Client.Name + Seperator;
	ClientDataLine += Client.Phone + Seperator;
	ClientDataLine += to_string(Client.AccountBalance);


	return ClientDataLine;

}

/*
bool IsClientExitInTheFile(string AccountNumber) {

vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

for (sClients & C : vClients) {

if (C.AccountNumber == AccountNumber)
{
return true;
}

}

return false;

}
*/

bool IsClientExistsByAccountNumber(string AccountNumber, string FileName) {

	vector<sClients> vClients;
	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{

		string Line;
		sClients Client;

		while (getline(MyFile, Line))
		{

			Client = ConvertLineToRecord(Line);
			if (Client.AccountNumber == AccountNumber)
			{
				MyFile.close();
				return true;
			}
			vClients.push_back(Client);
		}

		MyFile.close();
	}

	return false;

}

sClients ReadNewClient() {

	sClients Client;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);

	while (IsClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName))
	{
		cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
		getline(cin, Client.AccountNumber);
	}


	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;


	return Client;

}

void AddClientToFile(string FileName, string Line) {

	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{

		MyFile << Line << endl;
		MyFile.close();

	}

}

void AddNewClient() {

	sClients Client;
	Client = ReadNewClient();
	AddClientToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddClients() {

	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "\n-------------------------------------\n";
		cout << Tabs(1) << "Add New Clients Screen";
		cout << "\n-------------------------------------\n";
		cout << "Adding New Client:\n\n";

		AddNewClient();

		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
		cin >> AddMore;


	} while (toupper(AddMore) == 'Y');


}

void ShowAddNewClientsScreen() {

	AddClients();

}

void ShowClientsScreen() {

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	PrintAllClientsData(vClients);

}

void PrintClientCardRecord(sClients Client) {

	cout << "\n-------------------------------------------";
	cout << "\nThe following is the extracted Client details: \n\n";
	cout << "| Account Number  :" << Client.AccountNumber << endl;
	cout << "| PinCode         :" << Client.PinCode << endl;
	cout << "| Name            :" << Client.Name << endl;
	cout << "| Phone           :" << Client.Phone << endl;
	cout << "| Account Balance :" << Client.AccountBalance << endl;
	cout << "-------------------------------------------\n";

}

bool FindClientByAccountNumber(vector<sClients> vClients, sClients & Client, string AccountNumber) {


	for (sClients & C : vClients) {

		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}

	return false;

}

bool MarkClientForDeleteByAccountNumber(vector<sClients> & vClients, string AccountNumber) {

	for (sClients & C : vClients) {

		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}

	}

	return false;

}

vector<sClients> SaveClientsDataToFile(string FileName, vector<sClients> vClients) {

	fstream MyFile;
	string DataLine = "";

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open())
	{
		for (sClients & C : vClients) {

			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}

		}
		MyFile.close();
	}

	return vClients;
}

bool DeleteClientByAccountNumber(vector<sClients> & vClients, string AccountNumber)
{

	sClients Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{

		PrintClientCardRecord(Client);

		cout << "\n\nAre you sure you want to delete this client? Y/N? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			MarkClientForDeleteByAccountNumber(vClients, AccountNumber);
			SaveClientsDataToFile(ClientsFileName, vClients);

			vClients = LoadClientsFromFile(ClientsFileName);

			cout << "\n\nClient Deleted Successfully.";
			return true;
		}

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Not Fount.!";
		return false;
	}


}

void ShowDeleteClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Delete Client Screen";
	cout << "\n-------------------------------------\n\n";

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(vClients, AccountNumber);

}

void ShowFindClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Find Client Screen";
	cout << "\n-------------------------------------\n\n";

	sClients Client;
	string AccountNumber = ReadClientAccountNumber();
	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		PrintClientCardRecord(Client);
	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccountNumber << ") Not Found.!";
	}

}

sClients ChangeClientRecord(string AccountNumber) {

	sClients Client;
	Client.AccountNumber = AccountNumber;

	cout << "\nEnter PinCode? ";
	getline(cin >> ws, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;


	return Client;

}

bool UpdateClientByAccountNumber(vector <sClients> & vClients, string AccountNumber) {

	char Answer = 'n';
	sClients Client;

	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{

		PrintClientCardRecord(Client);

		cout << "\n\nAre you sure you want update this client? Y/N? ";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (sClients & C : vClients) {

				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}

			}

			SaveClientsDataToFile(ClientsFileName, vClients);

			cout << "\n\nClient Updated Successfullyt.";
			return true;

		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") Not Found.!";
		return false;
	}


}

void ShowUpdateClientScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Update Client Info Screen";
	cout << "\n-------------------------------------\n\n";

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(vClients, AccountNumber);


}

void ShowExitScreen() {

	cout << "\n-------------------------------\n";
	cout << Tabs(1) << "Program Ends (-:";
	cout << "\n-------------------------------\n";

}

bool DepositBalanceToClientByAccountNumber(vector<sClients> & vclients , string AccountNumber , double Amount) {

	char Answer = 'n';


	cout << "\n\nAre you sure you want perform this transaction? y/n? ";
	cin >> Answer;

	if (Answer == 'Y' || Answer == 'y')
	{

		for (sClients & C : vclients) {

			if (C.AccountNumber == AccountNumber)
			{
				C.AccountBalance += Amount;
				SaveClientsDataToFile(ClientsFileName , vclients);
				cout << "\nDone Successfully, [" << C.Name << "] New Balance become : [" << C.AccountBalance << "].";
				return true;
			}

		}
	}
	
	return false;

}

void ShowDepositScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Deposit Screen";
	cout << "\n-------------------------------------\n\n";

	sClients Client;

	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	
	while (!FindClientByAccountNumber(vClients , Client , AccountNumber))
	{
		cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
		AccountNumber = ReadClientAccountNumber();
	}

	PrintClientCardRecord(Client);

	double Amount = 0;
	cout << "\nPlease enter deposit amount? ";
	cin >> Amount;

	DepositBalanceToClientByAccountNumber(vClients , AccountNumber , Amount);

}

void ShowWithdrawScreen() {

	cout << "\n-------------------------------------\n";
	cout << Tabs(1) << "Withdraw Screen";
	cout << "\n-------------------------------------\n\n";

	sClients Client;

	string AccountNumber = ReadClientAccountNumber();
	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

	while (!FindClientByAccountNumber(vClients , Client , AccountNumber))
	{
		cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
		AccountNumber = ReadClientAccountNumber();
	}

	PrintClientCardRecord(Client);
	
	double Amount = 0;
	cout << "\nPlease enter withdraw amount? ";
	cin >> Amount;

	while (Amount > Client.AccountBalance)
	{
		cout << "\nAmount Exceeds the balance, you can withdraw up to : ["<< Client.AccountBalance <<"].\n";
		cout << "Please enter another amount? ";
		cin >> Amount;
	}

	DepositBalanceToClientByAccountNumber(vClients , AccountNumber , Amount * -1);

}

void PrintClientRecordBalanceLine(sClients Client) {

	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.AccountBalance;

}

void ShowTotalBalances() {


	double TotalBalances = 0;
	vector<sClients> vClients = LoadClientsFromFile(ClientsFileName);

	cout << "\n" << Tabs(5) << "Balances List (" << vClients.size() << ") Client(s).";
	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	cout << "| " << left << setw(15) << "Acount Number ";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Balance";

	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;


	if (vClients.size() == 0)
	{
		cout << "\n" << Tabs(5) << "No Clients Exists In The System.!\n";
	}
	else
	{

		for (sClients & Client : vClients) {

			TotalBalances += Client.AccountBalance;
			PrintClientRecordBalanceLine(Client);
			cout << endl;
		}
	}


	cout << "\n_________________________________________________________________";
	cout << "_____________________________________________\n" << endl;

	cout << Tabs(5) << "Total Balances = " << TotalBalances << endl;


}

void ShowTotalBalancesScreen() {

	ShowTotalBalances();

}

void GoBackToMainMenu() {

	cout << "\n\n\nPress any key to go back to Main Menu...";
	system("pause>0");
	ShowMainMenu();

}

void GoBackToTransactionsMenu() {

	cout << "\n\n\nPress any key to go back to Transactions Menu...";
	system("pause>0");
	ShowTransactionsMenu();

}

short ReadTransactionsMenuOption(short From , short To) {

	int Choice = 0;

	do
	{

		cout << "Choose	what do you want to do? [" << From << " to " << To <<"]? ";
		cin >> Choice;

	} while (Choice < From || Choice > To);

	return Choice;

}

void PerformTransactionsMenuOption(enTransactionsMenuOptions TransactionOption) {

	switch (TransactionOption)
	{

		case enTransactionsMenuOptions::enDeposit: {

			system("cls");
			ShowDepositScreen();
			GoBackToTransactionsMenu();
			break;

		}

		case enTransactionsMenuOptions::enWithdraw: {

			system("cls");
			ShowWithdrawScreen();
			GoBackToTransactionsMenu();
			break;

		}

		case enTransactionsMenuOptions::enTotalBalances: {

			system("cls");
			ShowTotalBalancesScreen();
			GoBackToTransactionsMenu();
			break;

		}
		
		case enTransactionsMenuOptions::enMainMenu: {

			ShowMainMenu();

		}

	}

}

void ShowTransactionsMenu() {

	system("cls");
	cout << "=============================================\n";
	cout << Tabs(1) << "Transactions Menu Screen \n";
	cout << "=============================================\n";
	cout << Tabs(1) << "[1] Deposit.\n";
	cout << Tabs(1) << "[2] Withdraw.\n";
	cout << Tabs(1) << "[3] Total Balances.\n";
	cout << Tabs(1) << "[4] Main Menu.\n";
	cout << "=============================================\n";

	PerformTransactionsMenuOption((enTransactionsMenuOptions)ReadTransactionsMenuOption(1 , 4));

}

void PerformMainMenuOption(enMainMenuOptions MainMenuOption) {

	switch (MainMenuOption)
	{
	case enMainMenuOptions::enListClients: {

		system("cls");
		ShowClientsScreen();
		GoBackToMainMenu();
		break;

	}

	case enMainMenuOptions::enAddClient: {

		system("cls");
		ShowAddNewClientsScreen();
		GoBackToMainMenu();
		break;

	}

	case enMainMenuOptions::enDeleteClient: {

		system("cls");
		ShowDeleteClientScreen();
		GoBackToMainMenu();
		break;

	}

	case enMainMenuOptions::enUpdateClient: {
		system("cls");
		ShowUpdateClientScreen();
		GoBackToMainMenu();
		break;
	}

	case enMainMenuOptions::enFindClient: {

		system("cls");
		ShowFindClientScreen();
		GoBackToMainMenu();
		break;

	}

	case enMainMenuOptions :: enTransactions : {

		system("cls");
		ShowTransactionsMenu();
		break;

	}

	case enMainMenuOptions::enExit: {

		system("cls");
		ShowExitScreen();
		break;
	}
	}

}

void ShowMainMenu() {

	system("cls");
	cout << "=============================================\n";
	cout << Tabs(2) << "Main Menu Screen \n";
	cout << "=============================================\n";
	cout << Tabs(1) << "[1] Show Clients List.\n";
	cout << Tabs(1) << "[2] Add New Client.\n";
	cout << Tabs(1) << "[3] Delete Client.\n";
	cout << Tabs(1) << "[4] Update Client.\n";
	cout << Tabs(1) << "[5] Find Client.\n";
	cout << Tabs(1) << "[6] Transactions.\n";
	cout << Tabs(1) << "[7] Exit.\n";
	cout << "=============================================\n";

	PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOption(1, 7));

}

int main() {

	ShowMainMenu();

	system("pause>0");
}
