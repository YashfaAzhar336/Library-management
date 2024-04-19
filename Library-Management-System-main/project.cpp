#include<iostream>
#include<conio.h>
using namespace std;
int menu();
int check();
class Node {
public:
	int Book_id;
	string book_Name,username,usernames="si";
	string author_name,password,passwords="si";
	string Publisher_Name;
	string user_name,father,email,gender;
	int contact;
	Node* next;
};

// Stores the head of the Linked List
Node* head = new Node();


//to check if record already exit
bool check(int x)
{

	if (head == NULL)
		return false;

	Node* ptr = new Node;
	ptr = head;

	// Traverse the Linked List
	while (ptr != NULL) {
		if (ptr->Book_id == x)
		{
		
		system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout << "\n\nBook with this "
			<< "record Already Exists\n";
			
			getch();
			menu();
			}

		ptr = ptr->next;
	}
	
	}



// Function to insert the record
void Insert_Record(int book_id, string book_Name,
				string author, string publisher)
{
	Node* new_node = new Node();
	
			system("CLS");
			cout<<"	\t\t	 ========================================\n";
			cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
			cout<<"		\t\t ========================================\n";
			cout<<"\n\nEnter User Name : ";
			cin>>new_node->user_name;
			cout<<"\n\nEnter Your Father Name : ";
			cin>>new_node->father;
			cout<<"\n\nEnter Your Email : ";
			cin>>new_node->email;
			cout<<"\n\nEnter Your Phone no : ";
			cin>>new_node->contact;
			cout<<"\n\nEnter Gender (MALE/FEMALE) : ";
			cin>>new_node->gender;		
			
			
			system("CLS");
			cout<<"	\t\t	 ========================================\n";
			cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
			cout<<"		\t\t ========================================\n";
			
			cout << "\n\nEnter Book ID : ";
			cin >>new_node->Book_id;
			check(new_node->Book_id);
			cout << "\n\nEnter Book Name : ";
			cin >>new_node->book_Name ;
			cout << "\n\nEnter Author Name : ";
			cin >>new_node->author_name;
			cout << "\n\nEnter publisher Name : ";
			cin >> new_node->Publisher_Name;
	new_node->next = NULL;

	// Insert at Begin
	if (head == NULL) {
		new_node->next = head;
		head = new_node;
	}

	// Insert at middle or End
	else {
		Node* ptr = head;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		new_node->next = ptr->next;
		ptr->next = new_node;
	}

	cout << "\n\n\t\t\t\tRecord Inserted "
		<< "Successfully...........s\n";
		getch();
}


//function to search record
void Search_Record()
{
	int book_ID;
	// if head is NULL
	if (head==NULL) {
		system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout << "\n\nNo Record "
			<< "Available\n";
		getch();
		return;
	}
		// Otherwise
	else {
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout << "\n\nEnter Book ID whose "
					"record you want to Search : ";
			cin >> book_ID;


		Node* ptr = head;
		while (ptr!=NULL) {
			if (ptr->Book_id == book_ID) {
				system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
				cout<<"\n\n\t\tBook Found........ ";
				cout<<"\n\n==========USER DETAIL==========";
				cout<<"\n\nUser Name : "
				<<ptr->user_name;
				cout<<"\n\nFather Name : "
				<<ptr->father;
				cout<<"\n\nEmail : "
				<<ptr->email;
				cout<<"\n\nPhone no : "
				<<ptr->contact;
				cout<<"\n\nGender (MALE/FEMALE) : "
				<<ptr->gender;
				
				
				cout<<"\n\n==========BOOK DETAIL==========";
				cout << "\n\nBook ID is : "
					<< ptr->Book_id << endl;
				cout << "\n\nBook Name : "
					<< ptr->book_Name << endl;
				cout << "\n\nAuthor Name : "
					<< ptr->author_name << endl;
				cout << "\n\nPublisher Name : "
					<< ptr->Publisher_Name  << endl;
						cout<<"\n===============================";

				getch();
				return;
			}
			ptr = ptr->next;
		}

		if (ptr == NULL){
			system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
			cout << "\n\nNo such Record "
				<< "Available\n";
			getch();
		}
	}
}


// Function to display the 
// Record
void Show_Record()
{
	Node* ptr = head;
	if (ptr == NULL) {
		system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout << "\n\nNo Record "
			<< "Available\n";
	}
	else {
		system("CLS");


		while (ptr != NULL) {
			system("CLS");
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
							cout<<"\n\n==========USER DETAIL==========";
				cout<<"\n\nUser Name : "<<ptr->user_name;
				cout<<"\n\nFather Name : "
				<<ptr->father;
				cout<<"\n\nEmail : "
				<<ptr->email;
				cout<<"\n\nPhone no : "
				<<ptr->contact;
				cout<<"\n\nGender (MALE/FEMALE) : "
				<<ptr->gender;
				
				
				cout<<"\n\n==========BOOK DETAIL=========== ";
				cout << "\n\nBook ID is : "
					<< ptr->Book_id << endl;
				cout << "\n\nBook Name : "
					<< ptr->book_Name << endl;
				cout << "\n\nAuthor Name : "
					<< ptr->author_name << endl;
				cout << "\n\nPublisher Name : "
					<< ptr->Publisher_Name  << endl;
			ptr = ptr->next;
		
		}
	}
	cout<<"\n================================";
		getch();
}




// Function to delete
// record with given id
// if it exist
int Delete_Record(int book_id)
{
	Node* prev = head;
	Node* ptr = NULL;

	// Deletion at Begin
	if (prev != NULL) {
		head = prev->next;
		delete prev;

		cout << "Record Deleted "
			<< "Successfully\n";
		return 0;
	}

	// Deletion Other than Begin
	while (prev != NULL) {
		ptr = prev;
		prev = prev->next;
	}
	if (prev == NULL) {
		cout << "Record does not Exist\n";
		return -1;
		ptr->next = prev->next;

		delete prev;
		cout << "Record Deleted "
			<< "Successfully\n";

		return 0;
	}
}







//update..................................................................
void update_reocrd(){
	int id,get=0;
	Node *ptr = new Node;
	system("CLS");

	
	if(head==NULL){
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout<<"\n\nNO RECORD FOUND.... "<<endl;
		getch();
					}
	else{
	cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";		
		cout<<"\n\nEnter Book ID : ";
		cin>>id;
	
		ptr=head;
	while(ptr!=NULL){
	
		if(id==ptr->Book_id){
			system("CLS");
			cout<<"\n"<<"	\t\t	 ========================================\n";
			cout<<"		 \t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
			cout<<"		 \t\t ========================================\n";
			cout<<"\n\n\t\tBook found.... ";
			cout<<"\n\nEnter book ID : ";
			cin>>ptr->Book_id;
			cout<<"\n\nEnter Book Name : ";
			cin>>ptr->book_Name;
			cout<<"\n\nEnter Author Name : ";
			cin>>ptr->author_name;
			cout<<"\n\nEnter Publisher Name : ";
			cin>>ptr->Publisher_Name;
			cout<<"\n\n\t\tBook Updated successfully........ ";	
			get++;
			getch();
						}
				
			ptr=ptr->next;
						}
	if(get==0){
		cout<<"	\t\t	 ========================================\n";
		cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
		cout<<"		\t\t ========================================\n";
		cout<<"\n\nBook ID is Invalid please! Try Again....... ";
		getch();
				}
			
				}
	
}






int menu(){
		string book_Name, author,publisher,user_name,father,gender,email;
	int book_ID,contact;

	// Menu-driven program
	while (true) {
		system("CLS");
	cout<<"	\t\t	 ========================================\n";
	cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
	cout<<"		\t\t ========================================\n";
		
		
		cout<<"\n\n1)ADD NEW RECORD\n";
		cout<<"\n\n2)UPDATE RECORD\n";
		cout<<"\n\n3)SEARCH RECORD\n";
		cout<<"\n\n4)DELETE RECORD\n";
		cout<<"\n\n5)VIEW RECORD\n";
		cout<<"\n\n6)EXIT\n";	
		
		cout << "\n\nEnter your Choice : ";
		int Choice;
		// Enter Choice
		cin >> Choice;
		switch(Choice){
		case 1:
			

			Insert_Record(book_ID,book_Name,author, publisher);
			break;
		case 4:
			cout << "Enter Book ID whose "
					"record is to be deleted\n";
			cin >> book_ID;
			Delete_Record(book_ID);
			break;
		
		case 3:			
			system("CLS");
			
			Search_Record();
			break;
			
		case 5:
			Show_Record();
			break;
		case 2:
		update_reocrd();
		break;	
			case 6:
			exit(0);
			break;
		
		default:
			cout << "Invalid Choice "
				<< "Try Again\n";
	}
	}
}




int main()
{
	head = NULL;
	Node *obj = new Node();
	cout<<"	\t\t	 ========================================\n";
	cout<<"		\t\t ======= LIBRARY MANAGEMENT SYSTEM ======\n";
	cout<<"		\t\t ========================================\n";
	cout<<"\n\nEnter username : ";
	cin>>obj->username;
	cout<<"\n\nEnter Password : ";
	cin>>obj->password;
	if(obj->username==obj->usernames&&obj->password==obj->passwords){
		menu();
	}
	else
	{
		cout<<"\n\nINVALID ID : ";
		exit(0);
	}
	return 0;
}

