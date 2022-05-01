#ifndef QBMATRIX_H
#define QBMATRIX_H


template<class T>

class qbMatrix
{
    public:
        //DEfine the various constructors

        qbMatrix2();
        qbMatrix2(int nRows,int nCols);
        qbMatrix2(int nRows,int nCols, const T * inputData);
        qbMatrix2(const qbMatrix2<T> & inputMatrix);


        // Destructor 
        ~qbMatrix2();


        //configuration methods

        bool resize( int numRows,int numCols);


        //Element access methods

        T GetElement(int row, int col);

        bool SetElement(int row, int col, T elementValue);

        int GetNumRows();
        int GetNumCols();


        //Overload == operator 
        //
        bool operator == (const qbMatrix <T> & rhs);


        // Overload +,- and * operators (friends).
        //

        template<class U> friend qbMatrix2<U> operator + (const qbMatrix2<U> & lhs, const qbMatrix2<U> & rhs);
        template<class U> friend qbMatrix2<U> operator +(const U& lhs,const qbMatrix2<U>&rhs);
        template<class U> friend qbMatrix2<U> operator +(const qbMatrix2<U> &lhs, const U& rhs);

        template<class U> friend qbMatrix2<U> operator - (const qbMatrix2<U> &lhs, const qbMatrix2<U> & rhs);
        template<class U> friend qbMatrix2<U> operator - (const U&lhs, const qbMatrix2<U> &rhs);
        template<class U> friend qbMatrix<U> operator -(const qbMatrix2<U> &lhs, const U & rhs);


        template<class U> friend qbMatrix2<U> operator *(const qbMatrix2<U> &lhs, const qbMatrix2<U> &rhs);
        template<class U> friend qbMatrix2<U> operator *(const qbMatrix2<U> &lhs, const U &rhs);
        template<class U> friend qbMatrix2<U> operator *(const U &lhs, const qbMatrix2<U> &rhs);
    private:
        int Sub2Ind(int row, int col);


    priavate:
        T *m_matrixData;
        int m_nRows, m_nCols, m_nElements;
};



