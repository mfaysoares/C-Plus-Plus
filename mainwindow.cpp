#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QLabel>
#include <QTimer>
#include <QDebug>
#include <string.h>

int confirma_aux = 0;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*Timer para atualizar candidatos*/
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(5000);

    /*Logotipo do cabeçalho - Logo Raspberry Pi*/
    QPixmap pixmap_logo("/media/pi/USB/logo.png");
    ui->logo->setPixmap(pixmap_logo);

    /*Logotipo do cabeçalho - Bandeira Brasil*/
    QPixmap brasil_flag("/media/pi/USB/brazil.png");
    ui->brasil->setPixmap(brasil_flag);
}

MainWindow::~MainWindow()
{

    delete ui;
}

/*Função de Timer*/
void MainWindow::myfunction()
{
    /*Imagem dos candidatos*/
    QPixmap darthvader("/media/pi/USB1/imagens/darthvader.jpg");
    QPixmap got("/media/pi/USB1/imagens/got.png");
    QPixmap madruga("/media/pi/USB1/imagens/madruga.jpg");
    QPixmap yoda("/media/pi/USB/imagens/yoda.jpeg");
    QPixmap walterwhite("/media/pi/USB1/imagens/walterwhite.jpg");
    QPixmap frank("/media/pi/USB1/imagens/frank.jpg");
    QPixmap homer("/media/pi/USB1/imagens/homer.jpg");
    QPixmap chewbacca("/media/pi/USB1/imagens/chewbacca.jpg");
    QPixmap claire("/media/pi/USB1/imagens/claire.jpg");
    QPixmap gus("/media/pi/USB1/imagens/gus.jpg");
    QPixmap bojack("/media/pi/USB1/imagens/bojack.jpg");
    QPixmap lagertha("/media/pi/USB1/imagens/lagertha.jpg");
    QPixmap profile("/media/pi/USB1/imagens/profile.gif");
    QString nada = "";
    QString presidente = "PRESIDENTE";
    QString senador = "SENADOR";
    QString dep_estadual = "DEPUTADO ESTADUAL";
    QString dep_federal = "DEPUTADO FEDERAL";
    QString cargo = ui->cargo->text();
    QString aux1 = ui->num1->toPlainText();
    QString aux2 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux4 = ui->num4->toPlainText();
    QString aux5 = ui->num5->toPlainText();

    QString numero0 = "0";
    QString numero1 = "1";
    QString numero2 = "2";
    QString numero3 = "3";
    QString numero4 = "4";
    QString numero5 = "5";
    QString numero6 = "6";
    QString numero7 = "7";
    QString numero8 = "8";
    QString numero9 = "9";


    /*Presidente - Darth Vader - 45*/
    if((cargo==presidente)&&(aux5==numero4)&&(aux4==numero5)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(darthvader);
        ui->nome->setText("Darth Vader");
        ui->partido->setText("PDI - Partido do Império");

    }
    /*Presidente - Rei da Noite - 13*/
    else if((cargo==presidente)&&(aux5==numero1)&&(aux4==numero3)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(got);
        ui->nome->setText("Night's King");
        ui->partido->setText("PWW - Partido dos White Walkers");

    }
    /*Presidente - Seu Madruga - 28*/
    else if((cargo==presidente)&&(aux5==numero2)&&(aux4==numero8)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(madruga);
        ui->nome->setText("Seu Madruga");
        ui->partido->setText("PNPA - Partido Não Pago Aluguel");
    }
    /*Senador - Yoda - 130*/
    else if((cargo==senador)&&(aux5==numero1)&&(aux4==numero3)&&(aux3==numero0)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(yoda);
        ui->nome->setText("Yoda");
        ui->partido->setText("PDR - Partido dos Rebeldes");
    }
    /*Senador - Walter White - 455*/
    else if((cargo==senador)&&(aux5==numero4)&&(aux4==numero5)&&(aux3==numero5)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(walterwhite);
        ui->nome->setText("Walter White");
        ui->partido->setText("PBB - Partido Breaking Bad");
    }
    /*Senador - Frank Underwood - 282*/
    else if((cargo==senador)&&(aux5==numero2)&&(aux4==numero8)&&(aux3==numero2)&&(aux2==nada)&&(aux1==nada))
    {
        ui->foto->setPixmap(frank);
        ui->nome->setText("Frank Underwood");
        ui->partido->setText("PHH - Partido House of Cards");
    }
    /*Dep. Federal - Homer - 4512*/
    else if((cargo==dep_federal)&&(aux5==numero4)&&(aux4==numero5)&&(aux3==numero1)&&(aux2==numero2)&&(aux1==nada))
    {
        ui->foto->setPixmap(homer);
        ui->nome->setText("Homer Simpson");
        ui->partido->setText("PDS - Partido dos Simpsons");
    }
    /*Dep. Federal - Chewbacca - 1323*/
    else if((cargo==dep_federal)&&(aux5==numero1)&&(aux4==numero3)&&(aux3==numero2)&&(aux2==numero3)&&(aux1==nada))
    {
        ui->foto->setPixmap(chewbacca);
        ui->nome->setText("Chewbacca");
        ui->partido->setText("PDR - Partido dos Rebeldes");
    }
    /*Dep. Federal - Claire Underwood - 2814*/
    else if((cargo==dep_federal)&&(aux5==numero2)&&(aux4==numero8)&&(aux3==numero1)&&(aux2==numero4)&&(aux1==nada))
    {
        ui->foto->setPixmap(claire);
        ui->nome->setText("Claire Underwood");
        ui->partido->setText("PHH - Partido House of Cards");
    }
    /*Dep. Estadual - Gus - 45555*/
    else if((cargo==dep_estadual)&&(aux5==numero4)&&(aux4==numero5)&&(aux3==numero5)&&(aux2==numero5)&&(aux1==numero5))
    {
        ui->foto->setPixmap(gus);
        ui->nome->setText("Gustavo Fring");
        ui->partido->setText("PBB - Partido Breaking Bad");
    }
    /*Dep. Estadual - Bojack - 13197*/
    else if((cargo==dep_estadual)&&(aux5==numero1)&&(aux4==numero3)&&(aux3==numero1)&&(aux2==numero9)&&(aux1==numero7))
    {
        ui->foto->setPixmap(bojack);
        ui->nome->setText("Bojack Horseman");
        ui->partido->setText("PDN - Partido do Netflix");
    }
    /*Dep. Estadual - Lagertha - 28885*/
    else if((cargo==dep_estadual)&&(aux5==numero2)&&(aux4==numero8)&&(aux3==numero8)&&(aux2==numero8)&&(aux1==numero5))
    {
        ui->foto->setPixmap(lagertha);
        ui->nome->setText("Lagertha Lothbrok");
        ui->partido->setText("PDV - Partido dos Vikings");
    }
    /*Demais condições*/
    else if((aux5==nada)&&(aux4==nada)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
    {

    }
    /*Voto Nulo*/
    else
    {
        ui->foto->setPixmap(profile);
        ui->nome->setText("Número Errado");
        ui->partido->setText("Voto Nulo");

    }
}

/*Tecla 1*/
void MainWindow::on_pushButton_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("1");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("1");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("1");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("1");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("1");
                    }
                }
            }
        }
    }
}

/*Confirma*/
void MainWindow::on_confirma_clicked()
{
    QString texto = ui->cargo->text();
    QString presidente = "PRESIDENTE";
    QString senador = "SENADOR";
    QString dep_estadual = "DEPUTADO ESTADUAL";
    QString dep_federal = "DEPUTADO FEDERAL";
    QString fim = "FIM";

    QString aux1 = ui->num1->toPlainText();
    QString aux2 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux4 = ui->num4->toPlainText();
    QString aux5 = ui->num5->toPlainText();
    QString nada = "";
    QString numero0 = "0";
    QString numero1 = "1";
    QString numero2 = "2";
    QString numero3 = "3";
    QString numero4 = "4";
    QString numero5 = "5";
    QString numero6 = "6";
    QString numero7 = "7";
    QString numero8 = "8";
    QString numero9 = "9";

    static int darthvader_cont=0;
    static int got_cont=0;
    static int madruga_cont=0;
    static int yoda_cont=0;
    static int walterwhite_cont=0;
    static int frank_cont=0;
    static int homer_cont=0;
    static int chewbacca_cont=0;
    static int claire_cont=0;
    static int gus_cont=0;
    static int bojack_cont=0;
    static int lagertha_cont=0;
    static int profile_cont=0;
    static int nulo_estadual=0;
    static int nulo_federal=0;
    static int nulo_senador =0;
    static int nulo_presidente=0;
    char text[50];



    if(texto==dep_estadual)
    {

        /*Gus - 45555*/
        if((aux5==numero4)&&(aux4==numero5)&&(aux3==numero5)&&(aux2==numero5)&&(aux1==numero5))
        {
            gus_cont++;
        }
        /*Dep. Estadual - Bojack - 13197*/
        else if((aux5==numero1)&&(aux4==numero3)&&(aux3==numero1)&&(aux2==numero9)&&(aux1==numero7))
        {
            bojack_cont++;
        }
        /*Dep. Estadual - Lagertha - 28885*/
        else if((aux5==numero2)&&(aux4==numero8)&&(aux3==numero8)&&(aux2==numero8)&&(aux1==numero5))
        {
            lagertha_cont++;
        }
        else
        {
            nulo_estadual++;
        }
        ui->cargo->setStyleSheet("font: 22pt;");
        ui->cargo->setText("DEPUTADO FEDERAL");
        ui->partido->clear();
        ui->nome->clear();
        ui->num1->clear();
        ui->num2->clear();
        ui->num3->clear();
        ui->num4->clear();
        ui->num5->clear();
        ui->foto->clear();
        ui->num1->setVisible(false);

    }
    else if(texto==dep_federal)
    {
        /*Dep. Federal - Homer - 4512*/
        if((aux5==numero4)&&(aux4==numero5)&&(aux3==numero1)&&(aux2==numero2)&&(aux1==nada))
        {
            homer_cont++;
        }
        /*Dep. Federal - Chewbacca - 1323*/
        else if((aux5==numero1)&&(aux4==numero3)&&(aux3==numero2)&&(aux2==numero3)&&(aux1==nada))
        {
            chewbacca_cont++;
        }
        /*Dep. Federal - Claire Underwood - 2814*/
        else if((aux5==numero2)&&(aux4==numero8)&&(aux3==numero1)&&(aux2==numero4)&&(aux1==nada))
        {
            claire_cont++;
        }
        else
        {
            nulo_federal++;
        }

        ui->cargo->setStyleSheet("font: 36pt;");
        ui->cargo->setText("SENADOR");
        ui->partido->clear();
        ui->nome->clear();
        ui->num1->clear();
        ui->num2->clear();
        ui->num3->clear();
        ui->num4->clear();
        ui->num5->clear();
        ui->foto->clear();

        ui->num2->setVisible(false);
    }
    else if(texto==senador)
    {
        /*Senador - Yoda - 130*/
        if((aux5==numero1)&&(aux4==numero3)&&(aux3==numero0)&&(aux2==nada)&&(aux1==nada))
        {
            yoda_cont++;
        }
        /*Senador - Walter White - 455*/
        else if((aux5==numero4)&&(aux4==numero5)&&(aux3==numero5)&&(aux2==nada)&&(aux1==nada))
        {
            walterwhite_cont++;
        }
        /*Senador - Frank Underwood - 282*/
        else if((aux5==numero2)&&(aux4==numero8)&&(aux3==numero2)&&(aux2==nada)&&(aux1==nada))
        {
            frank_cont++;
        }
        else
        {
            nulo_senador++;
        }

        ui->cargo->setStyleSheet("font: 36pt;");
        ui->cargo->setText("PRESIDENTE");
        ui->partido->clear();
        ui->nome->clear();
        ui->num1->clear();
        ui->num2->clear();
        ui->num3->clear();
        ui->num4->clear();
        ui->num5->clear();
        ui->foto->clear();

        ui->num3->setVisible(false);
    }
    else if(texto==presidente)
    {
        /*Presidente - Darth Vader - 45*/
        if((aux5==numero4)&&(aux4==numero5)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
        {
            darthvader_cont++;
        }
        /*Presidente - Rei da Noite - 13*/
        else if((aux5==numero1)&&(aux4==numero3)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
        {
            got_cont++;
        }
        /*Presidente - Seu Madruga - 28*/
        else if((aux5==numero2)&&(aux4==numero8)&&(aux3==nada)&&(aux2==nada)&&(aux1==nada))
        {
            madruga_cont++;
        }
        else
        {
            nulo_presidente++;
        }

        ui->cargo->setText("");
        ui->nome->setText("");
        ui->label_3->setText("");
        ui->label_4->setText("");
        ui->label_5->setText("");
        ui->label_6->setText("");
        ui->num5->setStyleSheet("");
        ui->num4->setStyleSheet("");
        ui->num3->setStyleSheet("");
        ui->num2->setStyleSheet("");
        ui->num1->setStyleSheet("");
        ui->nome->setStyleSheet("");
        ui->partido->setStyleSheet("");
        ui->foto->setStyleSheet("");
        ui->cargo->setGeometry(160,250,301,71);
        ui->cargo->setStyleSheet("font: 68pt;");
        ui->cargo->raise();
        ui->nome->clear();
        ui->num1->clear();
        ui->num2->clear();
        ui->num3->clear();
        ui->num4->clear();
        ui->num5->clear();
        ui->partido->clear();
        ui->foto->clear();
        ui->cargo->setText("FIM");

        /*Desabilita teclas*/
        ui->corrige->setEnabled(false);
        ui->branco->setEnabled(false);
        ui->pushButton->setEnabled(false);
        ui->pushButton_0->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_5->setEnabled(false);
        ui->pushButton_6->setEnabled(false);
        ui->pushButton_7->setEnabled(false);
        ui->pushButton_8->setEnabled(false);
        ui->pushButton_9->setEnabled(false);

        system("omxplayer -o local /media/pi/USB1/urna.mp3");

        /*Pen-drive*/
        QFile file("/media/pi/USB1/resultados.txt");
        if(!file.open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::warning(this,"ERRO","ERRO AO ABRIR O DISPOSITIVO USB");
        }
        else
        {
            QMessageBox::information(this,"USB","DADOS SALVOS COM SUCESSO");
            QTextStream out(&file);
            sprintf(text,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",gus_cont,lagertha_cont,bojack_cont,nulo_estadual,claire_cont,chewbacca_cont,homer_cont,nulo_federal,yoda_cont,walterwhite_cont,frank_cont,nulo_senador,darthvader_cont,got_cont,madruga_cont,nulo_presidente);
            out << text;
            qDebug() << gus_cont;
            file.flush();
            file.close();
        }



        }
    else if(texto==fim)
    {
        ui->cargo->setStyleSheet("font: 22pt;");
        ui->cargo->setText("DEPUTADO ESTADUAL");
        ui->cargo->setGeometry(20,100,301,71);
        ui->label_3->setText("Número:");
        ui->label_4->setText("Nome:");
        ui->label_5->setText("Partido:");
        ui->label_6->setText("SEU VOTO PARA");

        ui->foto->setStyleSheet("QLabel {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->num5->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->num4->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->num3->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->num2->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->num1->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->nome->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");
        ui->partido->setStyleSheet("QTextEdit {\nborder: 2px solid black;\nbackground-color: rgb(255,255,255);\n}");

        ui->num3->setVisible(true);
        ui->num2->setVisible(true);
        ui->num1->setVisible(true);

        /*Habilita teclas*/
        ui->corrige->setEnabled(true);
        ui->branco->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->pushButton_0->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
        ui->pushButton_8->setEnabled(true);
        ui->pushButton_9->setEnabled(true);
    }
}


/*Corrige*/
void MainWindow::on_corrige_clicked()
{
        ui->nome->clear();
        ui->num1->clear();
        ui->num2->clear();
        ui->num3->clear();
        ui->num4->clear();
        ui->num5->clear();
        ui->partido->clear();
        ui->foto->clear();
}


/*Tecla 2*/
void MainWindow::on_pushButton_2_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("2");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("2");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("2");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("2");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("2");
                    }
                }
            }
        }
    }
}


/*Tecla 3*/
void MainWindow::on_pushButton_3_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("3");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("3");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("3");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("3");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("3");
                    }
                }
            }
        }
    }
}


/*Tecla 4*/
void MainWindow::on_pushButton_4_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("4");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("4");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("4");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("4");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("4");
                    }
                }
            }
        }
    }
}

/*Tecla 5*/
void MainWindow::on_pushButton_5_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("5");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("5");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("5");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("5");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("5");
                    }
                }
            }
        }
    }
}

/*Tecla 6*/
void MainWindow::on_pushButton_6_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("6");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("6");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("6");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("6");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("6");
                    }
                }
            }
        }
    }
}

/*Tecla 7*/
void MainWindow::on_pushButton_7_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("7");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("7");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("7");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("7");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("7");
                    }
                }
            }
        }
    }
}

/*Tecla 8*/
void MainWindow::on_pushButton_8_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("8");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("8");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("8");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("8");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("8");
                    }
                }
            }
        }
    }
}

/*Tecla 9*/
void MainWindow::on_pushButton_9_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("9");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("9");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("9");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("9");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("9");
                    }
                }
            }
        }
    }
}

/*Tecla 0*/
void MainWindow::on_pushButton_0_clicked()
{
    QString aux5 = ui->num1->toPlainText();
    QString aux4 = ui->num2->toPlainText();
    QString aux3 = ui->num3->toPlainText();
    QString aux2 = ui->num4->toPlainText();
    QString aux1 = ui->num5->toPlainText();
    QString numero1 = "";
    if(aux1==numero1)
    {
        ui->num5->setText("0");
    }
    else
    {
        if(aux2==numero1)
        {
            ui->num4->setText("0");
        }
        else
        {
            if(aux3==numero1)
            {
                ui->num3->setText("0");
            }
            else
            {
                if(aux4==numero1)
                {
                    ui->num2->setText("0");
                }
                else
                {
                    if(aux5==numero1)
                    {
                        ui->num1->setText("0");
                    }
                }
            }
        }
    }
}

/*Branco*/
void MainWindow::on_branco_clicked()
{
    ui->num5->setText("0");
    ui->num4->setText("0");
    ui->num3->setText("0");
    ui->num2->setText("0");
    ui->num1->setText("0");

}

