#include <bits/stdc++.h>
using namespace std;

vector<int> Addition(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();

    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    // cout<<I1[size1-1]<<endl;
    // cout<<I2[size2-1]<<endl;

    // cout<<"A : ";
    // for(int i = size1 - 1; i >= 0; i--)
    //     cout<<I1[i];
    // cout<<endl;

    // cout<<"B : ";
    // for(int i = size2 - 1; i >= 0; i--)
    //     cout<<I2[i];
    // cout<<endl;

    if (size1 > size2)
    {
        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            A.push_back(stoi(t));
        }

        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            B.push_back(stoi(t));
        }

        t1size = size1;
        t2size = size2;
        // printf("1st If completed\n");
    }

    else
    {
        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            A.push_back(stoi(t));
        }

        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            B.push_back(stoi(t));
        }

        t1size = size2;
        t2size = size1;
        // printf("1st Else completed\n");
    }

    // cout<<A[0]<<endl;
    // cout<<B[0]<<endl;

    cout << "A : ";
    for (int i = t1size - 1; i >= 0; i--)
    {
        cout << A[i];
    }
    cout << endl;

    cout << "B : ";
    for (int i = t2size - 1; i >= 0; i--)
    {
        cout << B[i];
    }
    cout << endl;

    int tmp;

    for (int i = 0; i < t2size; i++)
    {
        temp = A[i] + B[i] + carry;
        carry = temp / Base;
        tmp = temp % Base;
        C.push_back(tmp);
    }

    for (int i = t2size; i < t1size; i++)
    {
        temp = A[i] + carry;
        carry = temp / Base;
        tmp = temp % Base;
        C.push_back(tmp);
    }

    if (carry == 1)
        C.push_back(carry);

    return C;
}

vector<int> Subtraction(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();

    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    // cout<<I1[size1-1]<<endl;
    // cout<<I2[size2-1]<<endl;

    // cout<<"A : ";
    // for(int i = size1 - 1; i >= 0; i--)
    //     cout<<I1[i];
    // cout<<endl;

    // cout<<"B : ";
    // for(int i = size2 - 1; i >= 0; i--)
    //     cout<<I2[i];
    // cout<<endl;

    if (size1 > size2)
    {
        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            A.push_back(stoi(t));
        }

        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            B.push_back(stoi(t));
        }

        t1size = size1;
        t2size = size2;
        // printf("1st If completed\n");
    }

    else if (size2 > size1)
    {
        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            A.push_back(stoi(t));
        }

        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            B.push_back(stoi(t));
        }

        t1size = size2;
        t2size = size1;

        // printf("1st Else completed\n");
    }

    else
    {
        int check; // 0 means String 1 has bigger integer or 1 means String 2 has bigger integer

        for (int i = 0; i < size1; i++)
        {
            string t1 = "";
            t1 = t1 + I1[i];
            int Int1 = stoi(t1);
            string t2 = "";
            t2 = t2 + I2[i];
            int Int2 = stoi(t2);

            if (I1[i] > I2[i])
            {
                check = 0;
                break;
            }

            else if (I2[i] > I1[i])
            {
                check = 1;
                break;
            }

            else if (I1[i] == I2[i])
            {
                // cout<<"Hello"<<endl;
                check = 0;
                continue;
            }
        }

        if (check == 1)
        {
            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                A.push_back(stoi(t));
            }

            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-2 is greater" << endl;
        }

        else if (check == 0)
        {
            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                A.push_back(stoi(t));
            }

            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-1 is greater" << endl;
        }

        t1size = size2;
        t2size = size1;
    }

    // cout<<A[0]<<endl;
    // cout<<B[0]<<endl;

    cout << "A : ";
    for (int i = t1size - 1; i >= 0; i--)
    {
        cout << A[i];
    }
    cout << endl;

    cout << "B : ";
    for (int i = t2size - 1; i >= 0; i--)
    {
        cout << B[i];
    }
    cout << endl;

    int tmp;

    for (int i = 0; i < t2size; i++)
    {
        temp = A[i] - B[i] + carry;
        if (A[i] >= B[i])
            carry = 0;
        else
            carry = -1;
        tmp = temp % Base;
        if (tmp < 0)
        {
            tmp += Base;
            if (carry == 0)
                carry--;
        }
        // cout << carry << " " << temp << " " << tmp << endl;
        C.push_back(tmp);
    }

    for (int i = t2size; i < t1size; i++)
    {
        temp = A[i] + carry;
        if (A[i] >= 0)
            carry = 0;
        else
            carry = -1;
        tmp = temp % Base;
        if (tmp < 0)
        {
            tmp += Base;
            if (carry == 0)
                carry--;
        }
        C.push_back(tmp);
    }

    for (int i = C.size() - 1; i >= 0; i--)
    {
        if (C[i] == 0)
            C.pop_back();

        else
            break;
    }

    if (C.size() == 0)
        C.push_back(0);

    return C;
}

vector<int> Multiplication(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();

    vector<int> A;
    vector<int> B;
    vector<int> C;
    // int Base = 10;
        // int Base = base;

    int t1size = 0, t2size = 0;

    if (size1 > size2)
    {
        // cout<< size2 << " " << size1<<endl;
        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            A.push_back(stoi(t));
        }

        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            B.push_back(stoi(t));
        }

        t1size = size1;
        t2size = size2;
        // printf("1st If completed\n");
    }

    else if (size2 > size1)
    {
        // cout<< size2 << " " << size1<<endl;
        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            A.push_back(stoi(t));
        }

        // cout<<"Out of For - 1"<<endl;

        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            B.push_back(stoi(t));
        }

        // cout<<"Out of For - 2"<<endl;

        t1size = size2;
        t2size = size1;
        // printf("1st Else completed\n");
    }

    else
    {
        // cout<<size1 << " "<< size2<<endl;
        int check; // 0 means String 1 has bigger integer or 1 means String 2 has bigger integer

        for (int i = 0; i < size1; i++)
        {
            string t1 = "";
            t1 = t1 + I1[i];
            int Int1 = stoi(t1);
            string t2 = "";
            t2 = t2 + I2[i];
            int Int2 = stoi(t2);

            if (I1[i] > I2[i])
            {
                check = 0;
                break;
            }

            else if (I2[i] > I1[i])
            {
                check = 1;
                break;
            }

            else if (I1[i] == I2[i])
            {
                check = 0;
                continue;
            }
        }

        if (check == 1)
        {
            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                A.push_back(stoi(t));
            }

            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-2 is greater" << endl;
        }

        else if (check == 0)
        {
            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                A.push_back(stoi(t));
            }

            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-1 is greater" << endl;
        }

        t1size = size2;
        t2size = size1;
    }

    for (int i = 0; i < (t1size + t2size); i++)
        C.push_back(0);

    // cout<<"After 1st Outer For Loop"<<endl;

    int tmp;
    int temp;

    for (int i = 0; i < t1size; i++)
    {
        int carry = 0;
        for (int j = 0; j < t2size; j++)
        {
            tmp = A[i] * B[j] + C[i + j] + carry;
            carry = tmp / Base;
            temp = tmp % Base;
            C.erase(C.begin() + i + j);
            C.insert(C.begin() + i + j, temp);
        }
        C.erase(C.begin() + i + t2size);
        C.insert(C.begin() + i + t2size, carry);
    }

    for (int i = C.size() - 1; i >= 0; i--)
    {
        if (C[i] == 0)
            C.pop_back();

        else
            break;
    }

    // if(C.size() == 0)
    //     C.push_back(0);

    return C;
}

void Division(string I1, string I2, vector<int> &R, vector<int> &Q, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();
    int Quotient[size1 + size2];
    int Remainder[size1 + size2];

    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    int done = 0;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    while (I1[0] == '0')
        I1.erase(0, 1);

    while (I2[0] == '0')
        I2.erase(0, 1);

    size1 = I1.size();
    size2 = I2.size();

    if (size1 > size2)
    {
        done = 1;
        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            A.push_back(stoi(t));
        }

        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            B.push_back(stoi(t));
        }

        t1size = size1;
        t2size = size2;
        // printf("1st If completed\n");
    }

    else if (size2 > size1)
    {
        Q.push_back(0);

        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            R.push_back(stoi(t));
        }
        return;
        // printf("1st Else completed\n");
    }

    else
    {
        int check; // 0 means String 1 has bigger integer or 1 means String 2 has bigger integer and 2 means integers in both strings are same

        for (int i = 0; i < size1; i++)
        {
            string t1 = "";
            t1 = t1 + I1[i];
            int Int1 = stoi(t1);
            string t2 = "";
            t2 = t2 + I2[i];
            int Int2 = stoi(t2);

            if (I1[i] > I2[i])
            {
                check = 0;
                break;
            }

            else if (I2[i] > I1[i])
            {
                check = 1;
                break;
            }

            else if (I1[i] == I2[i])
            {
                check = 2;
                continue;
            }
        }

        if (check == 1)
        {
            Q.push_back(0);

            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                R.push_back(stoi(t));
            }
            // cout << "Number-2 is greater" << endl;
            return;
        }

        else if (check == 0)
        {
            done = 1;
            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                A.push_back(stoi(t));
            }

            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-1 is greater" << endl;
        }

        else if (check == 2)
        {
            R.push_back(0);
            Q.push_back(1);
            return;
        }

        t1size = size2;
        t2size = size1;
    }

    cout << "A : ";
    for (int i = t1size - 1; i >= 0; i--)
    {
        cout << A[i];
    }
    cout << endl;

    cout << "B : ";
    for (int i = t2size - 1; i >= 0; i--)
    {
        cout << B[i];
    }
    cout << endl;

    int k = t1size;
    int l = t2size;

    // k = t1size, l = t2size
    if (done == 1)
    {
        // cout << "Inside Done" << endl;
        int tmp;
        for (int i = 0; i < k; i++)
        {
            Remainder[i] = A[i];
        }
        Remainder[k] = 0;

        // cout << "R : ";
        // for (int i = 0; i <= k; i++)
        // {
        //     cout << Remainder[i];
        // }
        // cout << endl;

        // cout<<"After Loop - 1 in done"<<endl;

        for (int i = k - l; i >= 0; i--)
        {
            // cout << "Inside first for loop" << endl;
            int temp = ((Remainder[i + l] * Base + Remainder[i + l - 1]) / B[l - 1]);
            // cout << "Inside first for loop ***" << endl;
            if (temp >= Base)
            {
                Quotient[i] = Base - 1;
            }

            else
            {
                Quotient[i] = temp;
            }

            carry = 0;

            int QMinus = 0;

            for (int j = 0; j < l; j++)
            {
                // cout << "Inside first for loop's 1" << endl;
                tmp = Remainder[i + j] - Quotient[i] * B[j] + carry;
                carry = tmp / Base;
                int mod = tmp % Base;
                if (mod < 0)
                {
                    mod += Base;
                    carry--;
                }
                Remainder[i + j] = mod;
            }

            // cout<<"After Loop - 1 in done in 2nd loop"<<endl;;
            Remainder[i + l] += carry;

            while (Remainder[i + l] < 0)
            {
                // cout << "Inside first for loop's 2" << endl;
                carry = 0;
                for (int j = 0; j < l; j++)
                {
                    // cout << "Inside first for loop's 1's 1" << endl;
                    tmp = Remainder[i + j] + B[j] + carry;
                    carry = tmp / Base;
                    int mod = tmp % Base;
                    if (mod < 0)
                    {
                        mod += Base;
                        carry--;
                    }
                    Remainder[i + j] = mod;
                }

                Remainder[i + l] += carry;
                Quotient[i]--;
            }
        }

        for (int i = 0; i <= k - l; i++)
        {
            Q.push_back(Quotient[i]);
        }

        for (int i = 0; i <= l; i++)
        {
            R.push_back(Remainder[i]);
        }
    }

    for (int i = R.size() - 1; i >= 0; i--)
    {
        if (R[i] == 0)
            R.pop_back();

        else
            break;
    }

    for (int i = Q.size() - 1; i >= 0; i--)
    {
        if (Q[i] == 0)
            Q.pop_back();

        else
            break;
    }

    if (Q.size() == 0)
        Q.push_back(0);

    if (R.size() == 0)
        R.push_back(0);
}

string FloatAddition(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();
    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    int P1 = 0;
    int P2 = 0;
    int FinalPrecision;

    int check1 = 1;
    int check2 = 1;

    // cout<<"A : ";
    for (int i = size1 - 1; i >= 0; i--)
    {
        if (I1[i] == '.')
        {
            check1 = 0;
            break;
        }
        else
            P1++;
    }

    // cout<<endl;

    // cout<<"B : ";
    for (int i = size2 - 1; i >= 0; i--)
    {
        if (I2[i] == '.')
        {
            check2 = 0;
            break;
        }
        else
            P2++;
    }
    // cout<<endl;

    if (check1 == 1)
        P1 = 0;
    if (check2 == 1)
        P2 = 0;

    if (P1 >= P2)
        FinalPrecision = P1;
    else
        FinalPrecision = P2;

    cout << "P1 : " << P1 << " and P2 : " << P2 << endl;
    if (P2 > P1)
    {
        for (int i = 0; i < (P2 - P1); i++)
        {
            I1 += "0";
        }
    }
    else if (P1 > P2)
    {
        for (int i = 0; i < (P1 - P2); i++)
        {
            I2 += "0";
        }
    }

    cout << "BEFORE : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    I1.erase(remove(I1.begin(), I1.end(), '.'), I1.end());
    I2.erase(remove(I2.begin(), I2.end(), '.'), I2.end());

    cout << "AFTER : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    size1 = I1.size();
    size2 = I2.size();

    C = Addition(I1, I2, Base);

    for (int i = C.size() - 1; i >= 0; i--)
    {
        if (C[i] == 0)
            C.pop_back();

        else
            break;
    }

    if (C.size() == 0)
        C.push_back(0);

    cout << "C : ";
    for (int j = C.size() - 1; j >= 0; j--)
        cout << C[j];
    cout << endl;
    cout << "Final Precision : " << FinalPrecision << endl;

    int j = C.size() - 1;
    int z = 0;
    string S = "";
    while (z != C.size() + 1)
    {
        if (z == C.size() - FinalPrecision)
            S += ".";
        else
        {
            S += to_string(C[j]);
            j--;
        }

        z++;
    }

    if (S[0] == '.')
        S = "0" + S;

    if (S[S.size() - 1] == '.')
        S += "0";

    return S;
}

string FloatSubtraction(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();

    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    int P1 = 0;
    int P2 = 0;
    int FinalPrecision;

    int check1 = 1;
    int check2 = 1;

    // cout<<"A : ";
    for (int i = size1 - 1; i >= 0; i--)
    {
        if (I1[i] == '.')
        {
            check1 = 0;
            break;
        }
        else
            P1++;
    }

    // cout<<endl;

    // cout<<"B : ";
    for (int i = size2 - 1; i >= 0; i--)
    {
        if (I2[i] == '.')
        {
            check2 = 0;
            break;
        }
        else
            P2++;
    }
    // cout<<endl;

    if (check1 == 1)
        P1 = 0;
    if (check2 == 1)
        P2 = 0;

    if (P1 >= P2)
        FinalPrecision = P1;
    else
        FinalPrecision = P2;

    cout << "P1 : " << P1 << " and P2 : " << P2 << endl;
    if (P2 > P1)
    {
        for (int i = 0; i < (P2 - P1); i++)
        {
            I1 += "0";
        }
    }
    else if (P1 > P2)
    {
        for (int i = 0; i < (P1 - P2); i++)
        {
            I2 += "0";
        }
    }

    cout << "BEFORE : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    I1.erase(remove(I1.begin(), I1.end(), '.'), I1.end());
    I2.erase(remove(I2.begin(), I2.end(), '.'), I2.end());

    cout << "AFTER : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    size1 = I1.size();
    size2 = I2.size();

    C = Subtraction(I1, I2, Base);

    cout << "C : ";
    for (int j = C.size() - 1; j >= 0; j--)
        cout << C[j];
    cout << endl;
    cout << "Final Precision : " << FinalPrecision << endl;

    int j = C.size() - 1;
    int z = 0;
    string S = "";
    while (z != C.size() + 1)
    {
        if (z == C.size() - FinalPrecision)
            S += ".";
        else
        {
            S += to_string(C[j]);
            j--;
        }

        z++;
    }

    if (S[0] == '.')
        S = "0" + S;

    if (S[S.size() - 1] == '.')
        S += "0";

    return S;
}

string FloatMultiplication(string I1, string I2, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();

    vector<int> A;
    vector<int> B;
    vector<int> C;
    
    // int Base = 10;
        // int Base = base;

    int P1 = 0;
    int P2 = 0;
    int FinalPrecision;

    int check1 = 1;
    int check2 = 1;

    // cout<<"A : ";
    for (int i = size1 - 1; i >= 0; i--)
    {
        if (I1[i] == '.')
        {
            check1 = 0;
            break;
        }
        else
            P1++;
    }

    // cout<<endl;

    // cout<<"B : ";
    for (int i = size2 - 1; i >= 0; i--)
    {
        if (I2[i] == '.')
        {
            check2 = 0;
            break;
        }
        else
            P2++;
    }
    // cout<<endl;

    if (check1 == 1)
        P1 = 0;
    if (check2 == 1)
        P2 = 0;

    FinalPrecision = P1 + P2;

    cout << "P1 : " << P1 << " and P2 : " << P2 << endl;

    if (I1[0] == '.')
        I1 = "0" + I1;
    if (I2[0] == '.')
        I2 = "0" + I2;

    cout << "BEFORE : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    I1.erase(remove(I1.begin(), I1.end(), '.'), I1.end());
    I2.erase(remove(I2.begin(), I2.end(), '.'), I2.end());

    cout << "AFTER : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    size1 = I1.size();
    size2 = I2.size();

    int t1size = 0, t2size = 0;

    if (size1 > size2)
    {
        // cout<< size2 << " " << size1<<endl;
        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            A.push_back(stoi(t));
        }

        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            B.push_back(stoi(t));
        }

        t1size = size1;
        t2size = size2;
        // printf("1st If completed\n");
    }

    else if (size2 > size1)
    {
        // cout<< size2 << " " << size1<<endl;
        for (int i = size2 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I2[i];
            A.push_back(stoi(t));
        }

        // cout<<"Out of For - 1"<<endl;

        for (int i = size1 - 1; i >= 0; i--)
        {
            string t = "";
            t = t + I1[i];
            B.push_back(stoi(t));
        }

        // cout<<"Out of For - 2"<<endl;

        t1size = size2;
        t2size = size1;
        // printf("1st Else completed\n");
    }

    else
    {
        // cout<<size1 << " "<< size2<<endl;
        int check; // 0 means String 1 has bigger integer or 1 means String 2 has bigger integer

        for (int i = 0; i < size1; i++)
        {
            string t1 = "";
            t1 = t1 + I1[i];
            int Int1 = stoi(t1);
            string t2 = "";
            t2 = t2 + I2[i];
            int Int2 = stoi(t2);

            if (I1[i] > I2[i])
            {
                check = 0;
                break;
            }

            else if (I2[i] > I1[i])
            {
                check = 1;
                break;
            }

            else if (I1[i] == I2[i])
            {
                check = 0;
                continue;
            }
        }

        if (check == 1)
        {
            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                A.push_back(stoi(t));
            }

            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-2 is greater" << endl;
        }

        else if (check == 0)
        {
            for (int i = size1 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I1[i];
                A.push_back(stoi(t));
            }

            for (int i = size2 - 1; i >= 0; i--)
            {
                string t = "";
                t = t + I2[i];
                B.push_back(stoi(t));
            }
            // cout << "Number-1 is greater" << endl;
        }

        t1size = size2;
        t2size = size1;
    }

    for (int i = 0; i < (t1size + t2size); i++)
        C.push_back(0);

    // cout<<"After 1st Outer For Loop"<<endl;

    int tmp;
    int temp;

    for (int i = 0; i < t1size; i++)
    {
        int carry = 0;
        for (int j = 0; j < t2size; j++)
        {
            tmp = A[i] * B[j] + C[i + j] + carry;
            carry = tmp / Base;
            temp = tmp % Base;
            C.erase(C.begin() + i + j);
            C.insert(C.begin() + i + j, temp);
        }
        C.erase(C.begin() + i + t2size);
        C.insert(C.begin() + i + t2size, carry);
    }

    cout << "C : ";
    for (int j = C.size() - 1; j >= 0; j--)
        cout << C[j];
    cout << endl;
    cout << "Final Precision : " << FinalPrecision << endl;
    cout << C.size() << endl;

    int j = C.size() - 1;
    int z = 0;
    string S = "";
    while (z != C.size() + 1)
    {
        if (z == C.size() - FinalPrecision)
            S += ".";
        else
        {
            S += to_string(C[j]);
            j--;
        }

        z++;
    }

    if (S[0] == '.')
        S = "0" + S;

    if (S[S.size() - 1] == '.')
        S += "0";

    return S;
}

string FloatDivision(string I1, string I2, vector<int> &R, vector<int> &Q, int Precision, int Base)
{
    int size1 = I1.size();
    int size2 = I2.size();
    int Quotient[size1 + size2];
    int Remainder[size1 + size2];

    int carry = 0;
    long long int temp;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    int done = 0;

    int t1size = 0;
    int t2size = 0;

    // int Base = 10;
        // int Base = base;

    int P1 = 0;
    int P2 = 0;
    int FinalPrecision;
    int check1 = 1;
    int check2 = 1;

    vector<int> Quo;
    vector<int> Rem;

    // cout<<"A : ";
    for (int i = size1 - 1; i >= 0; i--)
    {
        if (I1[i] == '.')
        {
            check1 = 0;
            break;
        }
        else
            P1++;
    }

    // cout<<endl;

    // cout<<"B : ";
    for (int i = size2 - 1; i >= 0; i--)
    {
        if (I2[i] == '.')
        {
            check2 = 0;
            break;
        }
        else
            P2++;
    }
    // cout<<endl;

    if (check1 == 1)
        P1 = 0;
    if (check2 == 1)
        P2 = 0;

    int PowerCheck = 0;

    if (P1 > P2)
    {
        FinalPrecision = P1 - P2;
        PowerCheck = -1;
    }
    else if (P2 > P1)
    {
        FinalPrecision = P2 - P1;
        PowerCheck = 1;
    }
    else
    {
        PowerCheck = 0;
        FinalPrecision = 0;
    }

    cout << "P1 : " << P1 << " and P2 : " << P2 << endl;

    if (I1[0] == '.')
        I1 = "0" + I1;
    if (I2[0] == '.')
        I2 = "0" + I2;

    cout << "BEFORE : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    I1.erase(remove(I1.begin(), I1.end(), '.'), I1.end());
    I2.erase(remove(I2.begin(), I2.end(), '.'), I2.end());

    cout << "AFTER-1 : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    while (I1[0] == '0')
        I1.erase(0, 1);

    while (I2[0] == '0')
        I2.erase(0, 1);

    cout << "AFTER-2 : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    if (PowerCheck == 1)
    {
        for (int i = 0; i < FinalPrecision; i++)
        {
            I1 += "0";
        }
    }

    else if (PowerCheck == -1)
    {
        for (int i = 0; i < FinalPrecision; i++)
        {
            I2 += "0";
        }
    }

    cout << "AFTER-3 : "
         << "I1 : " << I1 << " and I2 : " << I2 << endl;

    Division(I1, I2, Rem, Quo, Base);

    string Rema = "";

    for(int i = 0; i < Quo.size(); i++)
    {
        Q.push_back(Quo[i]);
    }

    for(int i = Rem.size() - 1; i >= 0; i--)
    {
        Rema += to_string(Rem[i]);
    }

    cout<<"REMAINDER : "<<Rema<<endl;

    string tempRem = Rema;
    string x;
    vector<int>temp1;
    vector<int>temp2;
    int count = 0;

    for(int i = 0; i < Precision; i++)
    {
        Rema += "0";
    }

    cout<<"NEW REMAINDER : "<<Rema<<endl;

    Rem.clear();
    Quo.clear();

    Division(Rema, I2, Rem, Quo, Base);

    cout<<"Quo : ";
    for(int i = Quo.size() - 1; i >= 0; i--)
        cout<<Quo[i];
    cout<<endl;

    cout<<"Rem : ";
    for(int i = Rem.size() - 1; i >= 0; i--)
        cout<<Rem[i];
    cout<<endl;

    R = Quo;

    cout<<"R : ";
    for(int i = R.size() - 1; i >= 0 ; i--)
        cout<<R[i];
    cout<<endl;

    for(int i = 0; i < Precision; i++)
    {
        temp2.clear();
        temp1.clear();
        x = tempRem + "0";
        Division(x, I2, temp1, temp2, Base);
        tempRem = "";
        for(int j = temp1.size() - 1; j >= 0; j--)
            tempRem += to_string(temp1[j]);
        if(temp2[0] == 0)
            count++;
        else
            break;
    }


    for(int i = 0; i < count; i++)
        R.push_back(0);

    string Answer = "";

    for(int i = Q.size() - 1; i >= 0; i--)
        Answer += to_string(Q[i]);

    Answer += ".";

    for(int i = R.size() - 1; i >= 0; i--)
        Answer += to_string(R[i]);

    R.clear();
    Q.clear();

    return Answer;
}

string SquareRoot(string R, int Precision, int Base)
{
    vector<int> Re;
    vector<int> Q;
    string x = FloatDivision(R, "2", Re, Q, Precision, Base);
    Re.clear();
    Q.clear();
    string temp1 = "";
    string temp2 = "";
    int P = 0;
    for(int j = 0; j < 15; j++)
    {
        cout<<"HEHE YEH BOI"<<endl;
        P = 0;
        temp1 = FloatDivision(R, x, Re, Q, Precision, Base);
        Re.clear();
        Q.clear();
        temp2 = FloatAddition(temp1, x, Base);
        x = FloatDivision(temp2, "2", Re, Q, Precision, Base);
        Re.clear();
        Q.clear();
    }

    return x;
}

void FindPi(int Precision, int Base) {

    std::cout.setstate(std::ios_base::failbit);

    Precision += 5;

    string 
        a = SquareRoot("2", Precision, Base), 
        b = "0";

    string c = FloatAddition(a, "2", Base);

    vector<int> v, w;
    for(int i = 0; i < 100; i++) {

        string x,y,z;
        x = FloatDivision( FloatAddition( SquareRoot(a, Precision, Base), FloatDivision("1", SquareRoot(a, Precision, Base), v, w, Precision, Base), Base ) , "2", v, w, Precision, Base);

        y = FloatDivision( FloatMultiplication( FloatAddition("1", b, Base), SquareRoot(a, Precision, Base), Base ), FloatAddition(a, b, Base), v, w, Precision, Base );
    
        z = FloatDivision( FloatMultiplication( FloatAddition("1", x, Base), FloatMultiplication(c, y, Base), Base ) , FloatAddition("1", y, Base), v,w, Precision, Base);
    
        a = x;
        b = y;
        c = z;
    }

    std::cout.clear();
    
    c.resize(c.size() - 5);

    cout << c << '\n';
    // cout << a << "   " << b << "   " << c << '\n'; 
}

void FindRootTwo(int Precision, int Base) {

    std::cout.setstate(std::ios_base::failbit);

    Precision += 5;
    string s = SquareRoot("2", Precision, Base);
    s.resize(s.size() - 5);

    std::cout.clear();

    cout << s << '\n';
}

int main() // IMT2020088 (Heet Vasani), IMT2020030 (Sriram)
{

    int Precision, choice, basePow;

    cin >> choice >> Precision >> basePow;
    // base = pow(2, basePow);

    int base = 10;

    if(choice == 1)
    
        FindPi(Precision, base);
    else
        FindRootTwo(Precision, base);
}