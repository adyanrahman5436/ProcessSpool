#include <iostream>

using namespace std;

void getOrder(int ordered, int stock, double shipHandle, char ShipNoOrYes)
{
    cout << "Please enter number of spools ordered: ";
    cin >> ordered;
    if (ordered < 1)
    {
        cout << "Error, spools ordered must be 1 or more.";
    }
    cout << "Please enter number of spools in stock: ";
    if (stock < 0)
    {
        cout << "Error, the spools in stock should be 0 or more.";
    }
    cin >> stock;
    cout << "Is there a custom shipping and handling charge (Enter Y for Yes and N for No): ";
    cin >> ShipNoOrYes;
    if (ShipNoOrYes = 'Y')
    {
        cout << "What is the shipping and handling cost? ";
        cin >> shipHandle;
    }
    if (ShipNoOrYes = 'N')
    {
        NULL
    }
}





int main()
{
   
    getOrder(ordered, stock, ShipNoOrYes, shipHandle);

    
}

