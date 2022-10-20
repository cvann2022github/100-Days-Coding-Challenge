
#include<iostream>

    #include<math.h>

    using namespace std;

    #define PI 3.14159265

    class DFT_Coefficient

    {

        public:

            double real, img;

            DFT_Coefficient()

            {

                real = 0.0;

                img = 0.0;

            }

    };

    int main(int argc, char **argv)

    {

        int N = 10;

        cout << "Calculation DFT Coefficients\n";

        cout << "Enter the coefficient of simple linear function:\n";

        cout << "ax + by = c\n";

        double a, b, c;

        cin >> a >> b >> c;

        double function[N];

        for (int j = 0; j < N; j++)

        {

            function[j] = (((a * (double) j) + (b * (double) j)) - c);

            //System.out.print( "  "+function[j] + "  ");

        }

        cout << "Enter the max K value: ";

        int k;

        cin >> k;

        double cosine[N];

        double sine[N];

        for (int j = 0; j < N; j++)

        {

            cosine[j] = cos((2 * j * k * PI) / N);

            sine[j] = sin((2 * j * k * PI) / N);

        }

        DFT_Coefficient dft_val;

        cout << "The coefficients are: ";

        for (int j = 0; j < N; j++)

        {

            dft_val.real += function[j] * cosine[j];

            dft_val.img += function[j] * sine[j];

        }

        cout << "(" << dft_val.real << ") - " << "(" << dft_val.img << " j)";


    }
