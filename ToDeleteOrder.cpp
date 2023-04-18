// Function to delete order TC:O(n)
void computerType ::delete_order()
{
    system("cls");

    string str = "\t===========================================\n";

    if (start_ptr == NULL)
    {
        cout << endl;
        cout << str;
        cerr << "\t     Can not delete from an Empty List\n";
        cout << str;
        cout << endl;
    }

    else
    {
        int num;
        cout << "\nEnter the receipt number you want to delete: ";
        cin >> num;
        node *q;
        node *temp;
        bool found = false;

        if (start_ptr->receipt_number == num)
        {
            q = start_ptr;
            start_ptr = start_ptr->next;

            delete q;

            cout << "\n\t\t========================================\n";
            cout << "\t\t The Receipt is Deleted Successfully!!!" << endl;
            cout << "\t\t========================================\n\n";
        }

        else
        {
            temp = start_ptr;
            q = start_ptr->next;

            while ((!found) && (q != NULL))
            {
                if (q->receipt_number != num)
                {
                    temp = q;
                    q = q->next;
                }

                else
                    found = true;
            }

            if (found)
            {
                temp->next = q->next;

                cout << "\n\t\t========================================\n";
                cout << "\t\t The Receipt is Deleted Successfully!!!" << endl;
                cout << "\t\t========================================\n\n";
            }

            else
            {
                cout << "\n\t\t==========================================\n";
                cout << "\t\t Item to be deleted is not in the list!!!" << endl;
                cout << "\t\t==========================================\n\n";
            }
        }
    }

} // End func
