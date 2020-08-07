class MyBook:public Book
{
    int price;
    public:
        MyBook(string title,string author,int price):Book(title,author)
        {
            this->price=price;
        }
        void display()
        {
            cout<<"Title: "<<title;
            cout<<"\nAuthor: "<<author;
            cout<<"\nPrice: "<<price;
        }
};
