#pragma once
#include <QTableWidget>
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <vector>
#include "contractCrud.h"
#include "contract.h"
#include "service.h"

class ContractGUI : public QWidget, public Subject {
public:
    ContractGUI(Service& serv, Contract& cont) : service(serv), contract(cont) {
        init_GUI();
        init_connections();
    }

    /**
     * Incarca lista de discipline in widgetul grafic.
     * @param lista_discipline Vector de obiecte Disciplina.
     */
    void load_data(const std::vector<Disciplina>& lista_discipline);

private:
    Service& service;
    Contract& contract;
    QListWidget* lista_contract_GUI = new QListWidget();

    QLineEdit* id_GUI = new QLineEdit();
    QLineEdit* numar_contracte_generat_GUI = new QLineEdit();
    QLineEdit* export_contracte_GUI = new QLineEdit();

    QPushButton* adauga_button = new QPushButton("&Adauga");
    QPushButton* goleste_contract = new QPushButton("&Goleste Contract");
    QPushButton* generare_button = new QPushButton("&Genereaza");
    QPushButton* exporta_button = new QPushButton("&Exporta");
    QPushButton* exit_button = new QPushButton("&Exit");

    /**
     * Initializeaza si aranjeaza elementele vizuale ale interfetei grafice.
     */
    void init_GUI();

    /**
     * Creeaza conexiunile (signal-slot) pentru butoanele interfetei.
     */
    void init_connections();

    /**
     * Sterge textul din campurile de editare.
     */
    void clear_line_edits();
};