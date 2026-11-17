/* ptr_00888b83 - 0x00888b83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_00888b83(int param_1)

{
  int unaff_ESI;
  int *unaff_EDI;
  DWORD nStdHandle;
  
  if (param_1 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_1 == 1) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_1 != 2) goto LAB_00888ba2;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,(HANDLE)0x0);
LAB_00888ba2:
  *(undefined4 *)(*unaff_EDI + unaff_ESI) = 0xffffffff;
  return 0;
}


