#include<iostream>
#include<sstream>

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	unsigned int i = std::stoul(std::to_string(a[2]) ,nullptr, 16);

	std::cout<<&a[i];
//	for(i=0;i<10;i++)
//    {
//        cin>>a[i];
//    }
//    for(i=0;i<10;i++)
//    {
//        cout<<endl<<a[i];
//        cout<<endl<<unsigned(&a[i]);
//    }
}
