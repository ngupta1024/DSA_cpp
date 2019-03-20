#pragma once

#include <iostream>
#include <vector>

using namespace std;

namespace utils
{
    //print a vector out
    template<typename T>
    void printVec(const vector<T>& input_vec)
    {
        for(int i=0;i<input_vec.size();++i)
        {
            cout<<input_vec[i]<<" ";
        }
        cout<<endl;
    }

    //swap content of index 1 and index 2
    template<typename T>
    void swapVec(vector<T>& input_vec, int idx1, int idx2)
    {
        T temp_var=input_vec[idx1];
        input_vec[idx1]=input_vec[idx2];
        input_vec[idx2]=temp_var;
    }

    //merge two vectors
    template<typename T>
    void mergeVec(vector<T>& vec1, vector<T>& vec2)
    {
        
    }
}//end ns utils
