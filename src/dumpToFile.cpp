#include <QTableWidget>
#include <QFile>
#include <QTextStream>

#include "dumpToFile.h"

void dumpToFile(myTableWidget *model, QString output)
{
    QString textData;
    int rows = model->rowCount();
    int columns = model->columnCount();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            textData += model->item(i,j)->text();
            textData += ", ";      // for .csv file format
        }
        textData += "\n";             // (optional: for new line segmentation)
    }

    if(output == "csv")
    {
        QFile csvFile("test.csv");
        if(csvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            QTextStream out(&csvFile);
            out << textData;
            csvFile.close();
        }
    } else if(output == "text")
    {
        // .txt
        QFile txtFile("test.txt");
        if(txtFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            QTextStream out(&txtFile);
            out << textData;
            txtFile.close();
        }
    }
}
