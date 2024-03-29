#include "japonesa.hpp"
#include <string>

Japonesa::Japonesa(const std::string& combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario) {
  combinado_ = combinado;
  sushis_ = sushis;
  temakis_ = temakis;
  hots_ = hots;
  m_valor_unitario = valor_unitario;
  m_qtd = qtd;
}

std::string Japonesa::descricao() const {
  std::string descricao = std::to_string(m_qtd) + "X " + "Comida japonesa - " + combinado_ + ", " + std::to_string(sushis_) +
                          " sushis, " + std::to_string(temakis_) + " temakis e " +
                          std::to_string(hots_) + " hots.";
  return descricao;
}
