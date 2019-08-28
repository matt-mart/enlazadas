
//------------------------------------------------------------//

int PILA_Extraer (
  PILA* _pila
){

  //----------------------------------------------------------//

  // PILA::NODO* ptr_nodo    =       _pila->raiz;
  // int         valor       =    ptr_nodo->valor;  /// error si pila vacia
  //             _pila->raiz = _pila->raiz->prox;

  // delete _pila->ptr_nodo;
  // return valor;

  //----------------------------------------------------------//

  PILA::NODO nodo = *( _pila->raiz );  /// error si pila vacia

  //----------------------------------------------------------//

  delete _pila->raiz;

  //----------------------------------------------------------//

  _pila->largo -= 1;
  _pila->raiz   = nodo.prox;

  //----------------------------------------------------------//

  return nodo.valor;

  //----------------------------------------------------------//

}

//------------------------------------------------------------//
