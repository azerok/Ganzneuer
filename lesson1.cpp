
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257
258
259
260
261
262
263
264
// ---------- C++ Tutorial Example 1 ----------
 
/* 
 * Multi-line Comment
 */
 
// These are called preprocessor directives
// They load the files which contain premade functions 
// for your use
 
// Contains functions for converting from 1 data type to
// another, random number generation, memory management,
// searching, math, sorting and other general purpose functions
#include <cstdlib>
 
// Provides functions for performing input and output operations
#include <iostream>
 
// If used you can type cout instead of std::cout
// By using this though you may have conflicts if you define
// functions that share a name with the std namespace
// using namespace std;
 
// You could define you only want to use part of a namespace like
// using std::cout;
// Which would allow you to use cout instead of std::cout
 
// Execution of code starts in the main function
// argc and argv is optional data that could be passed
// to the program if it was executed in a terminal
// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char* argv[]) {
     
    // Outputs the string Hello World to the screen followed by a newline
    // cout is your console or screen
    // << : Stream insertion operator which puts the string
    // into the cout stream to display it
    std::cout << "Hello World" << std::endl;
    
    // If you compile the code into an executable program in the terminal
    // g++ main.cpp
    // And execute it : ./a.out I Love C++
    // You'd see how to work with passed arguments
    
    // If no arguments are passed argc has a value of 1
    // We check that with if to skip printing values if none were passed
    if(argc != 1){
    
        // You can also create a newline with \n
        std::cout << "You entered " << argc << " arguments\n";
    
        // Cycles through all the values in the argc array and prints them
        // We access the values by using their index number starting at
        // 0 
        for(int i = 0; i < argc; ++i){
        
            // We access each string passed by putting its index between []
            // called the subscript operator
            std::cout << argv[i] << "\n";
        }
    }
    
    // When 0 is returned that signals that the program executed without 
    // an error and -1 signals an error occurred 
    return 0;
}
 
// ---------- End of C++ Tutorial Example 1 ----------
 
// ---------- C++ Tutorial Example 2 ----------
 
#include <cstdlib>
#include <iostream>
 
// Allows you to use the STL string class
#include <string>
 
// Provides functions to find min and max values
// for data types
#include <limits>
 
// When we create a variable we are telling the computer
// how much memory to set aside for its value and what
// name we want to associate with that data
    
// Variable names can contain letters, numbers, underscores
// but not math operators, spaces and can't start with a number
 
// Global variables are declared outside of any functions
// and can be accessed any where in the code
// This is a global integer variable with a name using 
// Hungarian notation
int g_iRandNum = 0;
 
// const defines constant values that won't change
const double PI = 3.1415926535897932;
 
int main() {
     
    // Get min and max values for different data types
    
    // bools store true 1, or false 0
    bool bMarried = true;
    
    // char stores 256 single characters represented by your keyboard
    char chMyGrade = 'A';
    
    // unsigned short ints hold values from 0 to 65,535
    // unsigned int & unsigned long int double their max value
    unsigned short int u16Age = 43;
    
    // short ints store between -32,768 to 32,767
    short int siWeight = 180;
    
    // ints range from -2147483648 to 2147483647
    int nDays = 7;
    
    // long ints and long long ints range from -9223372036854775808 to 
    // 9223372036854775807
    long lBigNum = 1000000;
    
    // floats range from 1.17549e-38 to 3.40282e+38
    float fPi = 3.14159;
    
    // Show float precision
    float fBigFloat = 1.1111111111;
    float fBigFloat2 = 1.1111111111;
    float fFloatSum = fBigFloat + fBigFloat2;
    
    // Allows you to print with formatting
    // Float addition has 6 digits of precision
    printf("fFloatSum Precision : %.10f\n", fFloatSum);
    
    // doubles range from 2.22507e-308 to 1.79769e+308
    
    std::cout << "Min double " << 
            std::numeric_limits<double>::min() << "\n";
    std::cout << "Max double " << 
            std::numeric_limits<double>::max() << "\n";
    
    // Show double precision
    double dbBigFloat = 1.11111111111111111111;
    double dbBigFloat2 = 1.11111111111111111111;
    double dbFloatSum = dbBigFloat + dbBigFloat2;
    
    // Allows you to print with formatting
    // Double addition has 15 digits of precision
    printf("dbFloatSum Precision : %.20f\n", dbFloatSum);
    
    // long doubles range from 3.3621e-4932 to 1.18973e+4932
    long double ldPi = 3.1415926535897932;
    
    // You can have the compiler assign a type
    auto whatWillIBe = true;
    
    // SHOW DATA TYPES MIN & MAX VALUES
    
    std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";
    
    std::cout << "Min unsigned short int " << 
            std::numeric_limits<unsigned short int>::min() << "\n";
    std::cout << "Max unsigned short int " << 
            std::numeric_limits<unsigned short int
            >::max() << "\n";
    
    std::cout << "Min short int " << 
            std::numeric_limits<short int>::min() << "\n";
    std::cout << "Max short int " << 
            std::numeric_limits<short int
            >::max() << "\n";
 
    std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";
 
    std::cout << "Min long " << std::numeric_limits<long int>::min() << "\n";
    std::cout << "Max long " << std::numeric_limits<long int>::max() << "\n";
 
    std::cout << "Min float " << 
            std::numeric_limits<float>::min() << "\n";
    std::cout << "Max float " << 
            std::numeric_limits<float>::max() << "\n";
    
    std::cout << "Min long double " << 
            std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max long double " << 
            std::numeric_limits<long double>::max() << "\n";
    
    // Get the number of bytes used by a type
    std::cout << "int Size " << sizeof(int) << "\n";
    
    // More about printf()
    // char, int, 5 space right justified int, 
    // 3 decimal float / double, string specifiers
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");
    
    return 0;
}
 
// ---------- End of C++ Tutorial Example 2 ----------
 
// ---------- C++ Tutorial Example 3 ----------
 
#include <cstdlib>
#include <iostream>
#include <string>
 
int main() {
     
    // Create a string
    std::string sQuestion ("Enter Number 1 : ");
    
    // Create empty strings to store values
    std::string sNum1, sNum2;
    
    std::cout << sQuestion;
    
    // Receive user input and store it
    getline(std::cin, sNum1);
    
    std::cout << "Enter Number 2 : ";
    getline(std::cin, sNum2);
    
    // Convert from strings to int
    // std::stod converts from strings to doubles
    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);
    
    // Math Operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));
    
    // ----- PROBLEM : MILES TO KILOMETERS -----
    // Sample knowing that kilometers = miles * 1.60934
    // Enter Miles : 5
    // 5 miles equals 8.0467 kilometers
    
    // Create needed variables
    std::string sMiles;
    double dMiles, dKilometers;
    
    // Ask user to input miles and store string input
    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);
    
    // Convert from string to double
    dMiles = std::stod(sMiles);
    
    // Convert from miles to km
    dKilometers = dMiles * 1.60934;
    
    // Output the results
    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);
    
    // ----- END PROBLEM : MILES TO KILOMETERS -----
    
    return 0;
}
 
// ---------- End of C++ Tutorial Example 3 —————