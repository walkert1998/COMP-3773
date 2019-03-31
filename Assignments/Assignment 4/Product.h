/**
@file   Product.h
@date   2013-03-01
@author Mark Young
@brief  brief information for a company product
*/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <istream>
#include <string>
using namespace std;

class Product {
    public:

        /**
        @brief construct the object
        @param code Product's identification code
        @param name Product's public name
        @param qty  Quantity of product on hand
        */
        Product(const string& code,
                const string& name,
                int           qty);

        /** get the ID code of this Product */
        string getCode() const;
        /** get the public name of this Product */
        string getName() const;
        /** get the quantity on hand of this Product */
        int getQuantity() const;

        /**
        @brief read the values of this Product from an input stream
        @param in the stream to read from (must be ready for input)
        */
        void read(istream& in);

    private:
        string code_;
        string name_;
        int    qty_;
};

/**
Overloaded input operator for client's convenience
@param in input stream to read from
@param p  Product to read data into
*/
istream& operator>>(istream& in, Product& p);

#endif

