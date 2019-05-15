#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <vector>
#include <sstream> 
#include <cstring>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"
#include"funcoes.hpp"


using namespace std;



int main(){
    /***********************************
     *       VARIAVEIS DE VAGAS        *
     * *********************************/
    vector<Vagas> vetor_de_vagas;
    vector<Vagas> skill_ordenado_por_id;
    vector<Vagas> empresa_ordenado_por_id;
    vetor_de_vagas = lerVagas();//copia do vetor pra main
    /***********************************
     *      VARIAVEIS DE DESEMPREGADO  *
     * *********************************/
    vector<Desempregado> vetor_de_desempregado;


    vetor_de_desempregado = lerDesempregado();
    vetor_de_desempregado[0].imprimeDesempregado();



    /************************************************************
    *                    QUESTAO 3                              *
    *     mostra vagas por skill ordenados pelo id              *
    *************************************************************/
   /*
    skill_ordenado_por_id = vagas_com_Skill("poledancing",vetor_de_vagas);
    int tam_skill_ordenado;
    tam_skill_ordenado = skill_ordenado_por_id.size();
    for(int i=0;i<tam_skill_ordenado;i++){
        skill_ordenado_por_id[i].imprimeVagas();
    }
    */
    //fim da impressao
    /************************************************************
    *                    QUESTAO 7                              *
    *     mostra vagas referente a empresa ordenadas por id     *
    *************************************************************/
   /*
    empresa_ordenado_por_id = retorna_Empresa_e_suas_vagas("city beat",vetor_de_vagas);
    int tam_empres_ordenado = empresa_ordenado_por_id.size();
    for(int i=0;i<tam_empres_ordenado;i++)
    {
        empresa_ordenado_por_id[i].imprimeVagas();
    }
    //fim da impressao
    */
    return 0;
}
