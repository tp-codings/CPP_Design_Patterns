#include "DataSource.h"
#include "EncryptionDecorator.h"
#include "CompressionDecorator.h"
#include "FileDataSource.h"

int main()
{

    std::string data = "Much much much much data";

    DataSource* source = new FileDataSource("source.txt");

    source->writeData(data);

    source = new CompressionDecorator(source);

    source->writeData(data);

    source = new EncryptionDecorator(source);

    source->writeData(data);

    std::cout << source->readData();

    return 0;
}