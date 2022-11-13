#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

#define interval 5

class table1 {

    public:

    int get_number();    
    int get_count();
    float get_frequency();
    float get_accumulated_frequency();

    void set_number(int n);
    void set_count(int n);
    void set_frequency(float n);
    void set_accumulated_frequency(float n);

	void print();
    table1();
    ~table1();
    
    private:
    
    int number;
    int count;
    float frequency;
    float accumulated_frequency;
};

class table2 {

    public:

    int get_column1();    
    int get_column2();
    int get_column3();
    int get_column4();

    void set_column1(int n);
    void set_column2(int n);
    void set_column3(int n);
    void set_column4(int n);
    
    void print();
    table2();
    ~table2();
    
    private:

    int column1;
    int column2;
    int column3;
    int column4;
};


class table3 {

    public:

    int get_down_interval();
    int get_up_interval();
    int get_count();
    float get_average();
    float get_frequency();
    float get_accumulated_frequency();

    void set_down_interval(int n);
    void set_up_interval(int n);
    void set_numbers(int *array);
    void set_count(int n);
    void set_average(float n);
    void set_frequency(float n);
    void set_accumulated_frequency(float n);

    void print();
    table3();
    ~table3();

    private:

    int down_interval;
    int up_interval;
    int count;
    float average;
    float frequency;
    float accumulated_frequency;
};

struct table_sum {
    
    int sum1;
    int sum2;
    int sum3;
};

struct table1_C {
    
    float C1;
    float C2;
    float C3;
    float C4;
    float C5;
    float C6;
    float C7;
};

struct table1_F {
    
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
};

void bubbleSort(int arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
       
            if (arr[j] > arr[j + 1])
       
                std::swap(arr[j], arr[j + 1]);
}

int count_duplicates(int *array, int N, int dup) {

    int count = 0;

    int i = 0;

    while (i < N) {
    
        if (array[i] == dup) {
    
            count++;
        }
    
        i++;
    }
    
    return count;
}

int *remove_all_occurrence(int *arr, int target, int n) {
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++) {
    
        if (arr[i] == target)
    
            cnt++;
    }
       
  int *new_arr = new int[n - cnt];
  
  int ind = 0;
  
  for (int i = 0; i < n; i++) {
    
    if (arr[i] != target) {
        
        new_arr[ind] = arr[i];
    
        ind++;
    }
    
    }

    return new_arr;

}

void print_tables1_C(table1_C *tables1_C) {
    std::cout << "C1:" << tables1_C->C1 << "\n" ;
    std::cout << "C2:" << tables1_C->C2 << "\n" ;
    std::cout << "C3:" << tables1_C->C3 << "\n" ;
    std::cout << "C4:" << tables1_C->C4 << "\n" ;
    std::cout << "C5:" << tables1_C->C5 << "\n" ;
    std::cout << "C6:" << tables1_C->C6 << "\n" ;
    std::cout << "C7:" << tables1_C->C7 << "\n" ;
}

void print_tables1_F(table1_F *tables1_F) {
    std::cout << "F1:" << tables1_F->F1 << "\n" ;
    std::cout << "F2:" << tables1_F->F2 << "\n" ;
    std::cout << "F3:" << tables1_F->F3 << "\n" ;
    std::cout << "F4:" << tables1_F->F4 << "\n" ;
    std::cout << "F5:" << tables1_F->F5 << "\n" ;
    std::cout << "F6:" << tables1_F->F6 << "\n" ;
    std::cout << "F7:" << tables1_F->F7 << "\n" ;
}


table1::table1() {
}

table1::~table1() {
}

table2::table2() {
}

table2::~table2() {
}

table3::table3() {
}

table3::~table3() {
}

int table1::get_number() {
        return number;
}

int table1::get_count() {
    return count;
}

float table1::get_frequency() {
    return frequency;
}

float table1::get_accumulated_frequency() {
    return accumulated_frequency;
}

void table1::set_number(int n) {
    this->number = n;
}

void table1::set_count(int n) {
    this->count = n;
}

void table1::set_frequency(float n) {
    this->frequency = n;
}

void table1::set_accumulated_frequency(float n) {
    this->accumulated_frequency = n;
}

int table2::get_column1() {
        return column1;
}

int table2::get_column2() {
    return column2;
}

int table2::get_column3() {
    return column3;
}

int table2::get_column4() {
    return column4;
}

void table2::set_column1(int n) {
    this->column1 = n;
}

void table2::set_column2(int n) {
    this->column2 = n;
}

void table2::set_column3(int n) {
    this->column3 = n;
}

void table2::set_column4(int n) {
    this->column4 = n;
}

int table3::get_down_interval() {
    return this->down_interval;
}
    
int table3::get_up_interval() {
    return this->up_interval;
}

    
float table3::get_average() {
    return this->average;
}
    
int table3::get_count() {
    return this->count;
}

float table3::get_frequency() {
    return this->frequency;
}

float table3::get_accumulated_frequency() {
    return this->accumulated_frequency;
}

void table3::set_down_interval(int n) {
    this->down_interval = n;
}

void table3::set_up_interval(int n) {
    this->up_interval = n;
}

void table3::set_average(float n) {
    this->average = n;
}

void table3::set_count(int n) {
    this->count = n;
}

void table3::set_frequency(float n) {
    this->frequency = n;
}

void table3::set_accumulated_frequency(float n) {
    this->accumulated_frequency = n;
}


void table1::print() {
    std::cout << "\t\t" << "||"<< get_number() << " \t|";
    std::cout << "| " << "\t" << get_count() << "\t|";
    std::cout << "| " << "\t" << get_frequency() << "\t|";
    std::cout << "| " << "\t" << get_accumulated_frequency() << "\t||";
    printf("\n");
}

void table2::print() {
    
    std::cout << "\t\t" << "|| " << get_column1() << " \t|";
    std::cout << "| " << "\t" << get_column2() << "\t|";
    std::cout << "| " << "\t" << get_column3() << "\t|";
    std::cout << "| " << "\t" << get_column4() << "\t||";
    
    printf("\n");
}

void table3::print() {
    
    std::cout << "\t" << "|| "  << get_down_interval() << "-" << get_up_interval()  << " \t|";
    std::cout << "| " << "\t" << get_average() << "\t|";
    std::cout << "| " << "\t" << get_count() << "\t|";
    std::cout << "| " << "\t" << get_frequency() << "\t|";
    std::cout << "| " << "\t" << get_accumulated_frequency() << "\t||";
    printf("\n");
}

int main (void) {

    std::ifstream File1;

    std::ifstream File2;

    File1.open("mila");

    File2.open("bober");
    
    int N = 80;

    int M = 235;

    const int const_N = 80;

    const int const_M = 235;

    int k = 1;

    int start = 28;
    
    int *array1 = new int[N];

    int *array2 = new int[M];

    int *temp_array1 = new int[N];

    int *temp_array2 = new int[M];

    int size1 = 0;

    int size2 = 15;

    for (int a = 0; a < N; a++)
        File1 >> array1[a];

    for (int a = 0; a < M; a++)
        File2 >> array2[a];

    bubbleSort(array1, N);

    for (int i = 0; i <= N; i++) {
    
        if (array1[i] != array1[i + 1]) {
    
            size1++;
        }
    }

    bubbleSort(array2, M);

    for (int i = 0; i < M; i++) {
         temp_array2[i] = array2[i];
    }

    table1 *tables1 = new table1[size1];

    for (int i = 0; i <= N; i++) {
        
        if (array1[i] != array1[i + 1]) {
    
            temp_array1[i] = count_duplicates(array1, N, array1[i]);
        }
    
    }

    int *array1_w_o_dups = remove_all_occurrence(temp_array1, 0, N);
    
    for (int i = 0; i < N; i ++) {  
        
        for (int j = i + 1; j < N; j++) {  
            
            if (array1[i] == array1[j]) {  
 
                for (int k = j; k < N - 1; k++) {  
                    
                    array1[k] = array1[k + 1];  
                }  
                
                N--;  
                
                j--;      
            }  
        }  
    }

    table3 *tables3 = new table3[size2];

    for (int i = 0; i < M; i ++) {  
        
        for (int j = i + 1; j < M; j++) {  
            
            if (array2[i] == array2[j]) {  
 
                for (int k = j; k < M - 1; k++) {  
                    
                    array2[k] = array2[k + 1];  
                }  
                
                M--;  
                
                j--;      
            }  
        }  
    }

    for (int i = 0; i < N; i++) {
    
        tables1[i].set_number(array1[i]);
        tables1[i].set_count(array1_w_o_dups[i]);
        tables1[i].set_frequency((float) tables1[i].get_count() / (float) const_N);
    }

    for (int i = 0; i < size2; i++) {
        
        tables3[i].set_down_interval(start);
        tables3[i].set_up_interval(tables3[i].get_down_interval() + interval);
        tables3[i].set_average(((float) tables3[i].get_up_interval() + (float) tables3[i].get_down_interval()) / (float) 2);
        start += interval;
    }
    
    int count2 = 0;

    for (int i = 0; i < size2; i++) {
        
        count2 = 0;
        
        for (int j = 0; j <= const_M; j++) {

        if (temp_array2[j] >= tables3[i].get_down_interval() && temp_array2[j] < tables3[i].get_up_interval()) {            
            
            count2++;
            tables3[i].set_count(count2);
        }
        
        }
    }

    for (int i = 0; i < size2; i++) {

        tables3[i].set_frequency(((float) tables3[i].get_count()) / (float) const_M);
    }
    
    //tables3[0].set_accumulated_frequency(tables3[0].get_frequency());
    //tables1[0].set_accumulated_frequency(tables1[0].get_frequency());

    float temp = 0.0;

    for (int i = 0; i <= size2; i++) {

        temp += tables3[i].get_frequency();
        tables3[i].set_accumulated_frequency(temp);
    }

    temp = 0.0;

    for (int i = 0; i <= N; i++) {

        temp += tables1[i].get_frequency();
        tables1[i].set_accumulated_frequency(temp);
    }

    table2 *tables2_1 = new table2[size1];
    table2 *tables2_2 = new table2[size2];

    int c_1 = tables1[size1 - 1].get_number() / 2;
    //std::cout << c_1;
    float c_2 = 65.5;

    for (int i = 0; i < size1; i++) {
    
        tables2_1[i].set_column1((tables1[i].get_number() - c_1) / k);
        tables2_1[i].set_column2(((tables1[i].get_number() - c_1) / k) * tables1[i].get_count());
        tables2_1[i].set_column3(pow(((tables1[i].get_number() - c_1) / k), 2));
        tables2_1[i].set_column4(pow(((tables1[i].get_number() - c_1) / k), 2) * tables1[i].get_count());
    }

    for (int i = 0; i < size2; i++) {
    
        tables2_2[i].set_column1((tables3[i].get_average() - c_2) / interval);
        tables2_2[i].set_column2(((tables3[i].get_average() - c_2) / interval) * tables3[i].get_count());
        tables2_2[i].set_column3(pow(((tables3[i].get_average() - c_2) / interval), 2));
        tables2_2[i].set_column4(pow(((tables3[i].get_average() - c_2) / interval), 2) * tables3[i].get_count());
    }

    table_sum *tables1_sum = new table_sum[1];
    table_sum *tables2_sum = new table_sum[1];

    for (int i = 0; i < size1; i++) {
        tables1_sum->sum1 += tables1[i].get_count();
        tables1_sum->sum2 += tables2_1[i].get_column2();
        tables1_sum->sum3 += tables2_1[i].get_column4();
    }

    for (int i = 0; i < size2; i++) {
        tables2_sum->sum1 += tables3[i].get_count();
        tables2_sum->sum2 += tables2_2[i].get_column2();
        tables2_sum->sum3 += tables2_2[i].get_column4();
    }

    const float avg = 1.25;

    table1_C *tables1_C = new table1_C[1];
    table1_F *tables1_F = new table1_F[1];

    tables1_C->C1 = ((float)tables1_sum->sum2 / (float)tables1_sum->sum1) * k + c_1;
    tables1_C->C2 = ((float)tables1_sum->sum3 / (float)tables1_sum->sum1) * pow(k, 2) - pow(tables1_C->C1 - c_1, 2);
    tables1_C->C3 = sqrt(tables1_C->C2);
    tables1_C->C4 = tables1_C->C3 / avg;
    tables1_C->C5 = array1[size1 - 1] - array1[0];
    tables1_C->C6 = (tables1_C->C3 / tables1_C->C1) * 100;
    tables1_C->C7 = c_1;
    
    tables1_F->F1 = ((float)tables2_sum->sum2 / (float)tables2_sum->sum1) * interval + c_2;
    tables1_F->F2 = ((float)tables2_sum->sum3 / (float)tables2_sum->sum1) * pow(interval, 2) - pow(tables1_F->F1 - c_2, 2);
    tables1_F->F3 = sqrt(tables1_F->F2);
    tables1_F->F4 = tables1_F->F3 / avg;
    tables1_F->F5 = tables3[size2 - 1].get_up_interval() - tables3[0].get_down_interval();
    tables1_F->F6 = (tables1_F->F3 / tables1_F->F1) * 100;
    tables1_F->F7 = (63 + interval * (((float)tables2_sum->sum1 / (float)2) - 108) / 41);

    printf("\n\t\t\t\t\ttable1\n");
    printf("|======================================================================================================|\n");
    printf("\t\t  xi\t\tni\t\tni / n\t\taccumulated_frequency\t\n");
    for (int i = 0; i < size1; i++) {
        tables1[i].print();
    }
    printf("|======================================================================================================|\n");
    printf("\n");

    printf("\n\t\t\t\t\ttable2\n");
    printf("|======================================================================================================|\n");
    printf("\t\txi - c / k (xi - c / k) * ni (xi - c / k) ^ 2 ((xi - c / k) ^ 2) * ni\t\n");
    for (int i = 0; i < size1; i++) {
        tables2_1[i].print();
    }
    printf("|======================================================================================================|\n");
    
    printf("\n");

    std::cout << "E:" << "\t";
    std::cout << "sum1:" << tables1_sum->sum1;
    std::cout << " sum2:" << tables1_sum->sum2;
    std::cout << " sum3:" << tables1_sum->sum3 << "\n";

    printf("\n");

    print_tables1_C(tables1_C);

    printf("\n\t\t\t\t\ttable3\n");
    printf("|======================================================================================================|\n");
    printf("\tintervals\t\taverage \t Ni / n \t frequency \t accumulated_frequency\t\n");
    for (int i = 0; i < size2; i++) {
        tables3[i].print();
    }
    printf("|======================================================================================================|\n");
    printf("\n");
    
    printf("\n\t\t\t\t\ttable2\n");
    printf("|======================================================================================================|\n");
    printf("\t\txi - c / k (xi - c / k) * ni (xi - c / k) ^ 2 ((xi - c / k) ^ 2) * ni\t\n");
    for (int i = 0; i < size2; i++) {
        tables2_2[i].print();
    }
    printf("|======================================================================================================|\n");
    printf("\n");

    std::cout << "E:" << "\t";
    std::cout << "sum1:" << tables2_sum->sum1;
    std::cout << " sum2:" << tables2_sum->sum2;
    std::cout << " sum3:" << tables2_sum->sum3 << "\n";

    printf("\n");

    print_tables1_F(tables1_F);


    return 0;
}
