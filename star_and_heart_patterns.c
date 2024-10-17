#include <iostream>

using namespace std;

class Patterns{
    public:
        Patterns(){
            cout<<"Welcome to Universe of Patterns ;)"<<endl;
        }

        void number_square_pattern(int n){
            cout<<"Number Square Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<j+1<<" ";
                }
                cout<<endl;                
            }
        }
        void star_square_pattern(int n){
            cout<<"Star square Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<"* ";
                }
                cout<<endl;                
            }
        }
        void hollow_star_square_pattern(int num){
            cout<<"Hollow star square Patterns: "<<endl;
            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < num; j++)
                {
                    if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        void increasing_number_square_pattern(int n){
            cout<<"Increasing Count square Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<i*n+j+1<<" ";
                }
                cout<<endl;                
            }
        }
        void alphabet_square_pattern(int n){
            cout<<"Alphabet square Patterns: "<<endl;
            char ch = 'A';
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<ch<<" ";
                    ch = ch+1;
                }
                ch = 'A';
                cout<<endl;                
            }
        }
        void increasing_alphabet_square_pattern(int n){
            cout<<"Increasing Alphabet square Patterns: "<<endl;
            char ch = 'A';
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<ch<<" ";
                    ch = ch+1;
                }
                cout<<endl;                
            }
        }
        void star_triangle_pattern(int n){
            cout<<"Star Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<"*";
                }
                cout<<endl;                
            }
            cout<<endl;
        }
        void star_triangle_pattern_ultra_pro(int n){
            // cout<<"Star Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-i; j++)
                {
                    cout<<"*";
                }
                cout<<endl;                
            }
        }
        void star_triangle_pattern_pro(int n){
            // cout<<"Star Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout<<" ";
                }
                
                for (int j = 0; j < 2*(n-i)-1; j++)
                {
                    cout<<"*";
                }
                cout<<endl;                
            }
        }
        void number_triangle_pattern(int n){
            cout<<"Number Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<i+1;
                }
                cout<<endl;                
            }
        }
        void alphabet_triangle_pattern(int n){
            cout<<"Alphabet Triangle Patterns: "<<endl;
            char ch = 'A';
            for (int i = 0; i < n; i++)
            {
                ch = 'A' + i;
                for (int j = 0; j < i+1; j++)
                {
                    cout<<ch<<" ";
                }
                cout<<endl;                
            }
        }
        void reverse_triangle_pattern(int n){
            cout<<"Reverse Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<i+1-j<<" ";
                }
                cout<<endl;                
            }
        }
        void floyds_triangle_pattern(int n){
            cout<<"Floyd's Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<(((i+1)*i)/2+j+1)<<" ";
                }
                cout<<endl;                
            }
        }
        void increasing_alphabet_triangle_pattern(int n){
            cout<<"Increasing Alphabet Triangle Patterns: "<<endl;
            char ch = 'A';
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<ch<<" ";
                    ch = ch+1;
                }
                cout<<endl;                
            }
        }
        void inverted_number_triangle_pattern(int n){
            cout<<"Inverted number Triangle Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout<<" ";
                }
                for (int j = i; j < n; j++)
                {
                    cout<<(i+1)<<"";
                }
                cout<<endl;                
            }
        }
        void pyramid_star_pattern(int num){
            cout<<"Pyramid start Patterns: "<<endl;
            int j;
            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < 2 * num; j++)
                {
                    if (j >= num - 1 - i && j <= num - 1 + i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        void pyramid_number_pattern(int n){
            cout<<"Pyramid number Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-i; j++)
                {
                    cout<<" ";
                }
                for (int j = 0; j < i+1; j++)
                {
                    cout<<(j+1)<<"";
                }
                for (int j = i; j > 0; j--)
                {
                    cout<<(j)<<"";
                }
                cout<<endl;                
            }
        }
        void hollow_diamond_pattern(int n){
            cout<<"Hollow diamond Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-i; j++)
                {
                    cout<<" ";
                }
                cout<<"*";
                if(i!=0){
                    for (int j = 0; j < 2*i-1; j++)
                    {
                        cout<<" ";
                    }
                    cout<<"*";
                }
                cout<<endl;                
            }
            for (int i = 0; i < n-1; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<" ";
                }
                cout<<" *";
                for (int j = 0; j < 2*(n-(i+2))-1; j++)
                {
                    cout<<" ";
                }
                if(i!=n-2){
                    cout<<"*";
                }
                cout<<endl;                
            }
        }
        void butterfly_pattern(int n){
            cout<<"Butterfly Patterns: "<<endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i+1; j++)
                {
                    cout<<"*";
                }
                if(i!=n-1){
                    for (int j = 0; j < 2*(n-i-1); j++)
                    {
                        cout<<" ";
                    } 
                }
                for (int j = 0; j < i+1; j++)
                {
                    cout<<"*";
                }
                cout<<endl;                
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-i; j++)
                {
                    cout<<"*";
                }
                for (int j = 0; j < 2*i; j++)
                {
                    cout<<" ";
                }
                for (int j = 0; j < n-i; j++)
                {
                    cout<<"*";
                }                
                cout<<endl;                
            }
        }
        void heart_pattern(int num){
            cout<<"Heart Pattern: "<<endl;
            int j;
            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < 2 * num; j++)
                {
                    if (j >= num - 1 - i && j <= num - 1 + i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                for (int j = 0; j < 2 * num; j++)
                {
                    if (j >= num - 1 - i && j <= num - 1 + i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                cout<<endl;
            }
            star_triangle_pattern_pro(2 * num); // Using star_triangle_pattern_pro for reversed triangle in the heart_pattern
        }

};
        
int main()
{
    Patterns patterns;

    patterns.number_square_pattern(5);
    patterns.star_square_pattern(5);
    patterns.hollow_star_square_pattern(5);
    patterns.alphabet_square_pattern(5);
    patterns.increasing_number_square_pattern(3);
    patterns.increasing_alphabet_square_pattern(3);
    patterns.star_triangle_pattern(5);
    patterns.star_triangle_pattern_pro(5);
    patterns.star_triangle_pattern_ultra_pro(5);
    patterns.number_triangle_pattern(5);
    patterns.alphabet_triangle_pattern(5);
    patterns.reverse_triangle_pattern(5);
    patterns.floyds_triangle_pattern(5);
    patterns.increasing_alphabet_triangle_pattern(5);
    patterns.inverted_number_triangle_pattern(5);
    patterns.pyramid_star_pattern(5);
    patterns.pyramid_number_pattern(5);
    patterns.hollow_diamond_pattern(5);
    patterns.butterfly_pattern(5);
    patterns.heart_pattern(5);

    return 0;
}
