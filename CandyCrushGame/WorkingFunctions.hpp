#pragma once
#ifndef WorkingFunctions
#define WorkingFunctions
char RandomEasyFill(char fill);
void Fill(char arr[8][8]);
void FillCandies(char arr[8][8]);
void SwapSpaceEasy(char arr[8][8]);
void Matching(char arr[8][8], int num, int& score);
void MatchingHard(char arr[10][10], int num, int& score);
char RandomHardFill(char fill);
void FillCandiesHard(char arr[10][10]);
void SwapSpaceHard(char arr[10][10]);
void FillHard(char arr[10][10]);

#endif