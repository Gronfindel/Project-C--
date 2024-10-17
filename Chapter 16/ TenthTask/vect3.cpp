#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
struct Review
{
    std::string title;
    int rating;
    double price;
};
bool operator<(const std::shared_ptr<Review> r1,const std::shared_ptr<Review> r2)
{
    if (r1->rating<r2->rating)
        return true;
    else if(r1->rating==r2->rating&&r1->rating<r2->rating)
        return true;
    else return false;
}
bool worseThan(const std::shared_ptr<Review> r1,const std::shared_ptr<Review> r2)
{
    if (r1->rating<r2->rating)
        return true;
    else
        return false;
}
bool sortPrice(const std::shared_ptr<Review> r1,const std::shared_ptr<Review> r2)
{
    if (r1->price<r2->price)
        return true;
    else
        return false;
}
bool FillReview(Review &rr)
{
    std::cout<<"Enter book title (quit to quit): ";
    std::getline(std::cin,rr.title);
    if (rr.title=="quit")
        return false;
    std::cout<<"Enter book rating: ";
    std::cin>>rr.rating;
    std::cout<<"Enter book price: ";
    std::cin>>rr.price;
    if(!std::cin)
        return false;
    while(std::cin.get()!='\n')
        continue;
    return true;
}
void ShowReview(const std::shared_ptr<Review> &rr)
{
    std::cout<<rr->rating<<"\t"<<rr->title<<"\t"<<rr->price<<std::endl;
}
int main()
{
    using namespace std;
    vector<shared_ptr<Review>> books;
    Review temp;
    while(FillReview(temp))
    {
        shared_ptr<Review> ptr=make_shared<Review>(temp);
        books.push_back(ptr);//books.push_back(temp);
    }
    char select;
    cout<<"Thank you. You entered the following "<<books.size()<<endl;
    cout<<"Enter r(rating) p(price) t(title) to sort q to quit"<<endl;
    while(cin>>select&& select !='q')
    {
        switch (select)
        {
        case 'p':   sort(books.begin(),books.end(),sortPrice);
                    cout<<"Sorted by price: \nRating\tBoks\tPrice\n";
                    for_each(books.begin(),books.end(),ShowReview);
                    cout<<"Enter r(rating) p(price) t(title) to sort q to quit"<<endl;
            break;
        case 'r':   sort(books.begin(),books.end(),worseThan);
                    cout<<"Sorted by rating: \nRating\tBoks\tPrice\n";
                    for_each(books.begin(),books.end(),ShowReview);
                    cout<<"Enter r(rating) p(price) t(title) to sort q to quit"<<endl;
            break;
        case 't':   sort(books.begin(),books.end());
                    cout<<"Sorted by title: \nRating\tBook\tPrice\n";
                    for_each(books.begin(),books.end(),ShowReview);
                    cout<<"Enter r(rating) p(price) t(title) to sort q to quit"<<endl;
            break;
        
        default: cout<<"Thank you"<<endl;
            break;
        }
    }
    cout<<"Bye!\n";
    return 0;
}