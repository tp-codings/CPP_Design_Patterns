#include "DataSource.h"
#include "EncryptionDecorator.h"
#include "CompressionDecorator.h"
#include "FileDataSource.h"

int main()
{

    DataSource* source = new FileDataSource("source.txt");

    source->writeData("Much much much much data");



    return 0;
}