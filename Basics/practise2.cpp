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