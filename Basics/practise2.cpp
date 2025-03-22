#include<iostream>
#include<iomanip>
#include<array>
#include<ctime>
#include<cmath>
using namespace std;

// 1.Number Pyramid

// int main(){
//     int lines{0};
//     cout<<"Enter your number of lines: ";
//     cin>>lines;
//     for(size_t i{1}; i <= lines; i++){
//         for(size_t k{lines};k >= i; k--){
//             cout<<" ";
//         }
//         for(size_t j{1}; j <= i; j++){
//             cout<<j;
//         }
//         for(size_t r{i - 1}; r >= 1; r--){
//             cout<<r;
//         }
//         cout<<endl;
//     }
// }

// // 2. Addition according to number of lines 

// int main(){
//     int lines{0};
//     cout<<"Enter your number of lines: ";
//     cin>>lines;
//     for(size_t i{1}; i <= lines; i++){
//         int sum{0};
//         for (size_t j = 1; j <= i; j++)
//         {
//             cout<<j;
//             if(j < i){
//                 cout<<" + ";
//             }
//         }
//         for (size_t k = 1; k <= i; k++)
//         {
//             sum += k;
//         }       
//         cout<<" = ";
//         cout<<sum;
//         cout<<endl;   
//     }
// }

// // 3.Tables 

// int main(){
//     int num;
//     cout<<"Enter your number: ";
//     cin>>num;
//     for(size_t i{1}; i <= 10; i++){
//         int tables;
//         tables = num ;
//         cout<<num<<" x "<<i<<" = "<<num*i;
//         cout<<endl;
//     }
// }


// // 5. Even Odd 
// // Finding Even Odd by backword reading of number.

// int main(){
//     int evens= 0,odds =0,rem,num;
//     int reverse = 0,reverse_num;
//     cout<<"Enter you num: ";
//     cin>>num;

//     while(num != 0){
//         rem = num % 10;
//         num = num / 10;
//         reverse = (reverse + rem) * 10;
//     }
//     // cout<<reverse;
//     reverse_num = reverse / 10;
//     while(reverse_num != 0){
//         rem = reverse_num % 10;
//         reverse_num = reverse_num / 10;
//         // cout<<rem<<endl;
//         // cout<<num<<endl;
//         if(rem % 2 == 0){
//             evens = (evens + rem) * 10;
//         }else{
//             odds = (odds + rem) * 10;
//         }
//     }
//     int even = evens / 10;
//     int odd = odds / 10;
//     cout<<"Evens are "<<even<<endl;
//     cout<<"Odds are "<<odd<<endl;
// }

// // 6. Palindrome 

// int main(){
//     int num,guess{0},rem{0},reverse_num{0},original;
//     cout<<"Enter your number: ";
//     cin>>num;
//     original = num;
//     while( num != 0 ){
//         rem = num % 10;
//         num = num / 10;
//         reverse_num = (reverse_num + rem) * 10;
//     }
//     int reverse = reverse_num/10;
//     if(reverse == original){
//         cout<<"Given number is a Palindrome..";
//     }else{
//         cout<<"Given number is not a Palindrome..";
//     }
// }

// // 7. Number Guessing Game

// int main(){
//     int guess,rand_num,attempts{1};
//     srand(time(0));
//     rand_num = rand() % 100;
//     cout<<rand_num<<endl;
//     for (size_t i = 0; i < 5; i++)
//     {
//         cout<<"Enter your Guess Number: ";
//         cin>>guess;
//         if(guess < rand_num){
//             cout<<"Too Low Number. "<<endl;
//             attempts++;
//         }else if(guess > rand_num){
//             cout<<"Too High Number. "<<endl;
//             attempts++;
//         }else{
//             cout<<"Congratulations! You Won the game in "<<attempts<<" attempts. ";
//             break;
//         }
//     }
//     if(attempts > 5){
//         cout<<"You have no attepmts. ";
//     }
// }

// // Find Maximum number in an array
// int main(){
//     int max;
//     int num[5];
//     num[0] = {34};
//     num[1] = {54};
//     num[2] = {165};
//     num[3] = {32};
//     num[4] = {98};
//     int sizeArr = sizeof(num) / 4;
//     max = num[0];
//     for (size_t i = 0; i < sizeArr; i++)
//     {
//         if(max < num[i]){
//             max = num[i];
//         }
//     }
//     cout<<"Maximum Value in an array is: "<<max;
// }

// // Find 80 in an array.
// int main(){
//     int num[5] = {76,34,87,32,80};
//     int sizeArr = sizeof(num) / 4;
//     for (size_t i = 0; i < sizeArr; i++)
//     {
//         if(num[i] == 80){
//             cout<<"The position of 80 is: "<<i + 1;
//         }
//     }
//     return 0 ;
// }

// // Find the Repitition of 45..
// int main(){
//     int count{0};
//     int num[7] = {4,65,67,45,12,45,9};
//     int sizeArr = sizeof(num) / 4;
//     for (size_t i = 0; i < sizeArr; i++)
//     {
//         if(num[i] == 45){
//             count++;
//         }
//     }
//     cout<<"The repitition of 45 is: "<<count;
//     return 0;
// }

// //Array reverse
//In Single Array
// int main(){
//     int temp{0};
//     int num[10] = {23,45,34,76,78,23,45,77,65,56};
//     int sizeArr = sizeof(num) / 4;
//     for (size_t i = 0; i < sizeArr / 2; i++)
//     {
//         temp = num[i];
//         num[i] = num[sizeArr-i-1];
//         num[sizeArr-i-1] = temp;
//     }
//     cout<<"The Reverse of this array: ";
//     for(int n : num){
//         cout<<n<<" ";
//     }
//     return 0;
// }

// //In New Array
// int main(){
//     int temp{0};
//     int num[10] = {23,45,34,76,78,23,45,77,65,56};
//     int sizeArr = sizeof(num) / 4;
//     int num2[sizeArr];
//     for(size_t i{0}; i < sizeArr ; i++){
//         num2[i] = num[sizeArr - i - 1];
//     }
//     cout<<"The reverve array will be: ";
//     for(int n : num2){
//         cout<<n<<" ";
//     }
// }

// //Array reverse
//In Single Array
// int main(){
//     int temp{0};
//     int num[10] = {23,45,34,76,78,23,45,77,65,56};
//     int sizeArr = sizeof(num) / 4;
//     for (size_t i = 0; i < sizeArr / 2; i++)
//     {
//         temp = num[i];
//         num[i] = num[sizeArr-i-1];
//         num[sizeArr-i-1] = temp;
//     }
//     cout<<"The Reverse of this array: ";
//     for(int n : num){
//         cout<<n<<" ";
//     }
//     return 0;
// }

// //In New Array
// int main(){
//     int temp{0};
//     int num[10] = {23,45,34,76,78,23,45,77,65,56};
//     int sizeArr = sizeof(num) / 4;
//     int num2[sizeArr];
//     for(size_t i{0}; i < sizeArr ; i++){
//         num2[i] = num[sizeArr - i - 1];
//     }
//     cout<<"The reverve array will be: ";
//     for(int n : num2){
//         cout<<n<<" ";
//     }
// }
// //Finding Percentage of even and odd in an array
// int main(){
//     array<int,5>num;
//     for (size_t i = 0; i < num.size(); i++)
//     {
//         cout<<"Enter your "<<i + 1<<" number: ";
//         cin>>num[i];
//     }
//     float count{0};
//     float odd{0};
//     for (size_t i = 0; i < num.size(); i++)
//     {
//         if(num[i] % 2 == 0){
//             count++;
//         }else{
//             odd++;
//         }
//     }
//     int evenPercent = (count / 5) * 100;
//     int oddPercent = (odd / 5) * 100;

//     cout<<"The percentage of even in this array is: "<<evenPercent<<"%"<<endl;
//     cout<<"The percentage of odd in this array is: "<<oddPercent<<"%"<<endl;
//     return 0 ;
// }

// //Repitions of Alphabets
// int main(){
//     array<char,100>alphabets;
//     srand(time(0));
//     int rand_num{0};
//     for (size_t i = 0; i < alphabets.size(); i++)
//     {
//         rand_num = (rand() % 26) + 97;
//         alphabets[i] = rand_num;
//     }
//     // for(int n : alphabets){
//     //     cout<<n<<endl;
//     // }
//     // for (size_t i = 0; i < alphabets.size(); i++)
//     // {
//     //     cout<<i<<" "<<alphabets[i]<<endl;
//     // }
//     cout<<"Alphabet"<<setw(15)<<"Occurrence"<<endl;
//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         int count{0};
//         for (size_t j = 0; j < alphabets.size(); j++)
//         {
//             if (i == alphabets[j])
//             {
//                 count++;
//             }
//         }
//         cout<<setw(7)<<i<<setw(16)<<count<<endl;
//     }
//     return 0 ;
// }

// //Selection Sorting
// int main(){
//     array<int,5>num = {23,54,12,45,9};
//     for (size_t i = 0; i < num.size(); i++)
//     {
//         int temp{0};
//         for (size_t j = i + 1; j < num.size(); j++)
//         {
//             if(num[i] < num[j]){
//                 temp = num[i];
//                 num[i] = num[j];
//                 num[j] = temp;
//             }
//         }
//     }
//     for(int n : num){
//         cout<<n<<" ";
//     }
//     return 0 ;
// }

// // Bubble Sorting
// int main()
// {
//     array<int, 5> num = {23, 372, 76, 32, 4};
//     for (size_t i = 0; i < num.size() - 1; i++)
//     {
//         int temp{0};
//         for (size_t j = 0; j < num.size() - i - 1; j++)
//         {
//             if (num[j] > num[j + 1])
//             {
//                 temp = num[j + 1];
//                 num[j + 1] = num[j];
//                 num[j] = temp;
//             }
//         }
//     }
//     for(int n : num){
//         cout<<n<<" ";
//     }
//     return 0 ;
// }

// // Problem1: Given two int values, return their sum. Unless the two values are the same, then return double their sum.
// // sumDouble(1, 2) → 3
// // sumDouble(3, 2) → 5
// // sumDouble(2, 2) → 8

// int main(){
//     srand(time(0));
//     while(true){
//         int num1,num2;
//         num1 = rand() % 11;
//         num2 = rand() % 11;
//         if(num1 == num2){
//             cout<<num1<<" + "<<num2<<setw(15)<<" = "<<(num1 + num2) * 2<<endl;
//             break;
//         }else{
//             cout<<num1<<" + "<<num2<<setw(15)<<" = "<<num1 + num2<<endl;
//         }
//     }
//     return 0;
// }

// //Problem 2: 
// // Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.
// // diff21(19) → 2
// // diff21(10) → 11
// // diff21(21) → 0

// int main(){
//     int num;
//     cout<<"Enter any number: ";
//     cin>>num;
//     if(num < 21){
//         int result = abs(num - 21);
//         cout<<result;
//     }else{
//         int result = 2 * (abs(num - 21));
//         cout<<result;
//     }
// }

// //Problem 3
// // Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.
// // makes10(9, 10) → true
// // makes10(9, 9) → false
// // makes10(1, 9) → true

// int main(){
//     int num1,num2;
//     cout<<"Enter first number: ";
//     cin>>num1;
//     cout<<"Enter second number: ";
//     cin>>num2;
//     if(num1 == 10 || num2 == 10){
//         cout<<"True";
//     }else if(num1 + num2 == 10){
//         cout<<"True";
//     }else{
//         cout<<"False";
//     }
//     return 0 ;
// }
