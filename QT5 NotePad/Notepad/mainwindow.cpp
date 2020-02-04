#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    // Global referencing the current file that we are clearing
        currentFile.clear();

        // Clear the textEdit widget buffer
        ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    // Opens a dialog that allows you to select a file to open
        QString fileName = QFileDialog::getOpenFileName(this, "Open the file");

        // An object for reading and writing files
        QFile file(fileName);

        // Store the currentFile name
        currentFile = fileName;

        // Try to open the file as a read only file if possible or display a
        // warning dialog box
        if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
            return;
        }
        // Set the title for the window to the file name
           setWindowTitle(fileName);

           // Interface for reading text
           QTextStream in(&file);

           // Copy text in the string
           QString text = in.readAll();

           // Put the text in the textEdit widget
           ui->textEdit->setText(text);

           // Close the file
           file.close();
}

void MainWindow::on_actionSave_as_triggered()
{
    // Opens a dialog for saving a file
        QString fileName = QFileDialog::getSaveFileName(this, "Save as");

        // An object for reading and writing files
        QFile file(fileName);

        // Try to open a file with write only options
        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }

        // Store the currentFile name
        currentFile = fileName;

        // Set the title for the window to the file name
        setWindowTitle(fileName);

        // Interface for writing text
        QTextStream out(&file);

        // Copy text in the textEdit widget and convert to plain text
        QString text = ui->textEdit->toPlainText();

        // Output to file
        out << text;

        // Close the file
        file.close();
}

void MainWindow::on_actionPrint_triggered()
{
    // Allows for interacting with printer
        QPrinter printer;

        // You'll put your printer name here
        printer.setPrinterName("Printer Name");

        // Create the print dialog and pass the name and parent
        QPrintDialog pDialog(&printer, this);

        if(pDialog.exec() == QDialog::Rejected){
            QMessageBox::warning(this, "Warning", "Cannot Access Printer");
            return;
        }

        // Send the text to the printer
        ui->textEdit->print(&printer);
}

void MainWindow::on_actionExit_2_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
        ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
      ui->textEdit->paste();

}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
      ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
      ui->textEdit->redo();
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save");
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}
