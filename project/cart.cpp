#include <iostream>

using namespace std;
const int m = 50;
class cart
{
    int iteam_list[m];
    float iteam_price[m];
    int count;

public:
    void CNT() { count = 0; };
    void setiteam();
    void totalPrice();
    void remove_iteam();
    void display_iteam();
};

void cart ::setiteam()
{
    cout << "Enter iteam code";
    cin >> iteam_list[count];
    cout << "Enter iteam Price";
    cin >> iteam_price[count];
    count++;
}

void cart ::totalPrice()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + iteam_price[i];
    }
    cout << "the sum of all iteams price is  " << sum << "\n";
}

void cart ::display_iteam()
{
    for (int i = 0; i < count; i++)
    {
        cout << "iteam code is  " << iteam_list[i] << "  and iteam price is  " << iteam_price[i] << "\n";
    }
}

void cart ::remove_iteam()
{
    int iteam_num;
    cout << "enter iteam code for remove it is into cart\n";
    cin >> iteam_num;

    for (int i = 0; i < count; i++)
    {
        if (iteam_num == iteam_list[i])
        {
            iteam_price[i] = 0;
            iteam_list[i]=0;
        }
    }
}

int main()
{
    cart order;
    order.CNT();
    int x;
    do
    {
        cout << "select one number which prosess you need to do ?\n";
        cout << "1 : add iteam in to cart\n";
        cout << "2 : show total price of all iteams \n";
        cout << "3 : remove an iteam from cart\n";
        cout << "4 :display all iteam from cart\n";
        cin >> x;

        switch (x)
        {
        case 1:
            order.setiteam();
            break;
        case 2:
            order.totalPrice();
            break;
        case 3:
            order.remove_iteam();
            break;
        case 4:
            order.display_iteam();
            break;
        case 5:
            break;
        default:
            cout << "invalide input !";
            break;
        }

    } while (x != 5);
    return 0;
}