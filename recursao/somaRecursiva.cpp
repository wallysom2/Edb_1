/**
 * @file somaRecursiva.cpp
 * @brief Somar dois números inteiros usando adições sucessivas e recursão.
 * 
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */

 #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
 #include "../doctest.h"
 
 /**
  * @brief Soma dois números inteiros X e Y usando adições sucessivas e recursão.
  *
  * @param X O primeiro número a ser somado.
  * @param Y O segundo número a ser somado.
  * @return O resultado da soma de X e Y.
  */
 int soma(int X, int Y) {
     if (Y == 0){
         return X;
     }
     if (Y > 0){
         return soma (X + 1, Y - 1);
     }
     if (Y < 0){
         return soma (X - 1, Y + 1);
     }
     return 0;
 }
 
 TEST_CASE("Somar Dois Números Inteiros - Testes") {
     CHECK(soma(3, 4) == 7);
     CHECK(soma(0, 5) == 5);
     CHECK(soma(5, 0) == 5);
     CHECK(soma(3, 6) == 9);
     CHECK(soma(7, 3) == 10);
 }
 