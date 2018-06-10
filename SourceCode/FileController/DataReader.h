#ifndef FILECONTROLLER_DATAREADER_H
#define FILECONTROLLER_DATAREADER_H

namespace std {
class istream;
}

namespace FileController
{
class DataReader
{
    std::istream& is_;
public:
    DataReader(std::istream& is);

    template<typename T>
    void read(T& val)
    {
        is_ >> val;
    }
};

}

#endif // FILECONTROLLER_DATAREADER_H
