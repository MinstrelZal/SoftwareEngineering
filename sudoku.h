#pragma once

extern int const GRIDSIZE = 9;
extern int const UNKNOWN = 0;
extern int const FLAGNUM = 4;  //student ID: 15061075

class Sudoku
{
public:
	Sudoku(int n);
	int SudokuGenerate(int pos, long& count);
	void SudokuSolve(char* path);
private:
	int grid[GRIDSIZE][GRIDSIZE];
	std::ofstream output;
	int n;
	bool IsValid(int pos);
	void PrintSudoku();
};