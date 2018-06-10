#ifndef FILECONTROLLER_DATAWRITER_H
#define FILECONTROLLER_DATAWRITER_H

namespace std {
class ostream;
}

namespace FileController
{
class DataWriter
{
    std::ostream& os_;
public:
    DataWriter(std::ostream& os);

    template<typename T>
    void write(T& val)
    {
        os_ << val;
    }
};
}

#endif // FILECONTROLLER_DATAWRITER_H
