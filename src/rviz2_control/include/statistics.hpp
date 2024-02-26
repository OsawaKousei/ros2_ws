#include <iostream>
#include <vector>

#include <stdio.h>

using namespace std;

class BasicStatistics{

public:
    //平均を計算
    float average(vector<float> &f, int N){

        float ave = 0.0;

        for(int i = 0; i < N; i++) {
            ave += f[i]/(float)N;
        }

        return ave;
    }

    //2乗の平均を計算
    float average2(vector<float> &f, int N){

        float ave2 = 0.0;

        for(int i = 0; i < N; i++){
            ave2 += f[i]*f[i]/(float)N;
        }

        return ave2;
    }

    //標準偏差を計算
    float variance(vector<float> &f, int N){

        float ave  = average(f, N);
        float ave2 = average2(f, N);

        float var = ave2 - ave*ave;

        return var;
    }

    //共分散を計算
    float covariance(vector<float> &f, vector<float> &g, int N){

        float cov = 0.0;

        for(int i = 0; i < N; i++){
            cov += f[i]*g[i]/(float)N;
        }
        
        cov -= average(f, N) * average(g, N);

        return cov;
    }

};

class LeastSquaresMethod : public BasicStatistics{

public:
    //傾きを計算 
    float slope(vector<float> &x, vector<float> &y, int N){

        float a = 0.0;
        float x_var = variance(x, N);
        float cov   = covariance(x, y, N);
        //分母が0に近づくときの処理
        if(x_var <= 0.00004){
            if(cov >= 0){
                a = 40;
            }else{
                a = -40;
            }
        }else{
            

            a = cov / x_var;
        }

        return a;
    }

    //切片を計算
    float intercept(vector<float> &x, vector<float> &y, int N){

        float b = 0.0;
        float x_var = variance(x, N);
        float cov   = covariance(x, y, N);
        float x_ave = average(x, N);
        float y_ave = average(y, N);
        if(x_var <= 0.00004){
            if(cov >= 0){
                b = y_ave - (40.0) * x_ave;
            }else{
                b = y_ave - (-40.0) * x_ave;
            }
           
        }else{
            
            

            b = y_ave - (cov / x_var) * x_ave;
        }

        return b;
    }
};