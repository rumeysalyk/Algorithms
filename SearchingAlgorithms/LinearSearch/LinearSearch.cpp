#include <iostream>
#include <vector>

int linearSearch( std::vector<int> &a_numberBag, int a_index )
{
    for( int index=0; index<a_numberBag.size(); index++ )
    {
        if( a_numberBag[index] == a_index ) 
        {
            return index;
        }
    }

    return -1;
}

int main()
{
    std::vector<int> m_numberBag = {1,5,95,1002,6,48,7};

    int result = linearSearch( m_numberBag, 1002 );

    if( result == -1 )
    {
        std::cout << "Not found";
    }
    else
    {   
        std::cout << "Found!" << std::endl <<"Index:" << result << ":"<<m_numberBag[result]; 
    }

    return 0;

}