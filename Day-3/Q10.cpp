    #include <iostream>
    int main()
    {
        int S,E,c;
        std::cout<<"Input a range: ";
        std::cin>>S>>E;
        if(S<E)
        { 
        for(int i=S;i<=E;i++)
        {  c=0;
            for(int j=1;j<=i;j++)
            { 
            if(i%j==0)
            {
            c++;
            }
            }
            if(c==2)
        {
            std::cout<<i<<" ";

        }
        }
        }
    else
    {
        std::cout<<"ERROR\nMake sure that the numbers are not equal and that first input number is smaller than second input number";
    }
        return 0;
    }