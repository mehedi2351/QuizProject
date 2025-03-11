#include <bits/stdc++.h>
using namespace std;

struct Student
{
    char name[20];
    char roll[10];
    int point, random;
};

Student st;
///////******************quiz for c++***************//////
void cpp()
{
    st.point = 0;
    char choose;
    system("CLS");
    int i = 0, arr[6] = {-1, -1, -1, -1, -1, -1};

    srand(time(0)); 

    while (i < 6)
    {
        st.random = rand() % 6;
        bool isUsed = false;
        for (int j = 0; j < 6; j++)
        {
            if (st.random == arr[j])
            {
                isUsed = true;
                break;
            }
        }

        if (isUsed)
        {
            continue;
        }

        arr[i] = st.random;

        switch (st.random)
        {
        case 0:
            cout << "Which of the following is the correct syntax to declare a pointer?" << endl;
            cout << "a) int* ptr;\nb) int ptr*;\nc) int ptr;\nd) int& ptr;" << endl;
            cin >> choose;
            if (choose == 'a')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 1:
            cout << "Which of the following is not a valid C++ data type?" << endl;
            cout << "a) int\nb) float\nc) bool\nd) charstr" << endl;
            cin >> choose;
            if (choose == 'd')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 2:
            cout << "What is the correct way to read a string input in C++?" << endl;
            cout << "a) cin >> input;\nb) cin.get(input);\nc) cin.getline(input, 100);\nd) cin.read(input, 100);" << endl;
            cin >> choose;
            if (choose == 'c')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 3:
            cout << "Which of the following is true about multiple inheritance in C++?" << endl;
            cout << "a) It is not allowed\nb) A class can inherit from only one base class\nc) A class can inherit from multiple base classes\nd) It is allowed only with abstract classes" << endl;
            cin >> choose;
            if (choose == 'c')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 4:
            cout << "What is the purpose of a virtual destructor in a C++ class?" << endl;
            cout << "a) To delete objects of the class\nb) To ensure that the destructor of the derived class is called\nc) To prevent inheritance\nd) To initialize objects of the class" << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }

            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 5:
            cout << "What does RAII stand for in C++?" << endl;
            cout << "a) Resource Allocation Is Instantiated\nb) Resource Allocation Is Implementation\nc) Resource Allocation Is Initialization\nd) Resource Allocation Is Invocation" << endl;
            cin >> choose;
            if (choose == 'c')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        }
        i++;
    }

    system("CLS");
}
/////////////********result******** ///////////
void result()
{
    cout << "student name :" << st.name << endl;
    cout << "Student Roll :" << st.roll << endl;
    cout << "Mark :" << st.point << endl;
    float parsentace = 100 * st.point / 6;
    cout << "parsentace :" << parsentace << endl;
    if (parsentace > 50)
    {
        cout << "Your result is passed" << endl;
    }
    else
    {
        cout << "Your result is fail" << endl;
    }
}
/////////////////********Quiz for Java ********////////////////////

void java()
{
    cout << "*******You selected Java.**********" << endl;
    st.point = 0;
    char choose;
    system("CLS");
    int i = 0, arr[6] = {-1, -1, -1, -1, -1, -1};

    srand(time(0)); 

    while (i < 6)
    {
        st.random = rand() % 6;

        
        bool isUsed = false;
        for (int j = 0; j < 6; j++)
        {
            if (st.random == arr[j])
            {
                isUsed = true;
                break;
            }
        }

        if (isUsed)
        {
            continue; 
        }

        arr[i] = st.random;

        switch (st.random)
        {
        case 0:
            cout << "Which of the following is true about the final keyword in Java?" << endl;
            cout << "a) final variables can be modified.\nb) final methods cannot be overridden.\nc) final classes can be subclassed.\nd) final methods can be overridden." << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 1:
            cout << "Which of the following statements about Java garbage collection is incorrect?\na) Garbage collection in Java is automatic.\nb) Java garbage collector uses reference counting.\nc) System.gc()" << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 2:
            cout << "Which of the following is true about the synchronized keyword in Java?\na) It can be used to make a class thread-safe.\nb) It can be used to make a method thread-safe.\nc) It can be used to synchronize access to a code block.\n d) All of the above.\n"
                 << endl;
            //   cout << "a) cin >> input;\nb) cin.get(input);\nc) cin.getline(input, 100);\nd) cin.read(input, 100);" << endl;
            cin >> choose;
            if (choose == 'd')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 3:
            cout << "Which of the following is true about Java exception handling?" << endl;
            cout << "a) A finally block is always executed.\nb) An exception is an object that wraps an error event.\nc) Checked exceptions are descendants of the Error class.\nd) Unchecked exceptions must be declared in the method's throws clause.\n"
                 << endl;
            cin >> choose;
            if (choose == 'a')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 4:
            cout << "Which of the following is not a feature of Java?" << endl;
            cout << "a) Platform independence.\nb) Multiple inheritance through classes.\nc) Memory management.\nd) Security.\n"
                 << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 5:
            cout << "What is the default access modifier in Java?\na) private\nb) protected\nc) public\nd) package-private (default)\n"
                 << endl;
            // cout << "a) Resource Allocation Is Instantiated\nb) Resource Allocation Is Implementation\nc) Resource Allocation Is Initialization\nd) Resource Allocation Is Invocation" << endl;
            cin >> choose;
            if (choose == 'd')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        }
        i++;
    }
    system("CLS");
}
/////*****************Quiz for HTML **********************////////

void html()
{
    cout << "You selected HTML." << endl;
    st.point = 0;
    char choose;
    system("CLS");
    int i = 0, arr[6] = {-1, -1, -1, -1, -1, -1};

    srand(time(0)); 

    while (i < 6)
    {
        st.random = rand() % 6;

      
        bool isUsed = false;
        for (int j = 0; j < 6; j++)
        {
            if (st.random == arr[j])
            {
                isUsed = true;
                break;
            }
        }

        if (isUsed)
        {
            continue; 
        }

        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << "Which of the following is true about the <!DOCTYPE> declaration in HTML?" << endl;
            cout << "a) It is not required for HTML5.\nb) It is case-sensitive.\nc) It should be the first line in an HTML document.\nd) It can be placed anywhere in the document." << endl;
            cin >> choose;
            if (choose == 'c')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 1:
            cout << "Which of the following elements is used to create a hyperlink in HTML?" << endl;
            cout << "a) <link>\nb) <a>\nc) <href>\nd) <ul>" << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 2:
            cout << "Which of the following is true about the <img> tag in HTML?" << endl;
            cout << "a) It is used to display images.\nb) It requires the src attribute to function properly.\nc) It is a self-closing tag.\nd) All of the above." << endl;
            cin >> choose;
            if (choose == 'd')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 3:
            cout << "Which of the following is an HTML5 element used for embedding video content?" << endl;
            cout << "a) <media>\nb) <video>\nc) <embed>\nd) <source>" << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 4:
            cout << "Which of the following attributes is used to provide alternative text for an image in HTML?" << endl;
            cout << "a) alt\nb) title\nc) description\nd) src" << endl;
            cin >> choose;
            if (choose == 'a')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        case 5:
            cout << "Which of the following elements is used to create a drop-down list in HTML?" << endl;
            cout << "a) <input>\nb) <select>\nc) <dropdown>\nd) <list>" << endl;
            cin >> choose;
            if (choose == 'b')
            {
                cout << "Your answer is correct." << endl;
                st.point++;
            }
            else
            {
                cout << "Your answer is wrong." << endl;
            }
            break;
        }
        i++;
    }
}

int main()
{
    char press;
    int select;

    do
    {
        cout << "\t\t*****************************\n"
             << endl;
        cout << "\t\t\tQuiz System\n"
             << endl;
        cout << "\t\t*****************************\n"
             << endl;
        cout << "\t\tEnter Name: ";
        cin.ignore();
        cin.getline(st.name, 20);
        cout << "\t\tEnter Roll: ";
        cin.getline(st.roll, 10);
        system("CLS");

        cout << "Your result is fail if score is less than 50%" << endl;
        cout << "\t*Select an option*" << endl;
        cout << "\t1) C++" << endl;
        cout << "\t2) Java" << endl;
        cout << "\t3) HTML" << endl;
        cout << "\tSelect: ";

        cin >> select;

        switch (select)
        {
        case 1:
            cpp();
            break;
        case 2:
            java();
            break;
        case 3:
            html();
            break;
        default:
            cout << "Invalid selection. Please try again." << endl;
            break;
        }
        result();

        cout << "Press Y to continue or press any key to go to terminal: ";
        cin.ignore();
        press = getchar();
        system("CLS");
    } while (press == 'y' || press == 'Y');

    return 0;
}

