/* FUN_00591cca - 0x00591cca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00591cca(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00593123();
  if (((iVar1 != 0) && (param_2 == 1000)) && (-1 < *(int *)(param_1 + 0xd4))) {
    FUN_00593031(*(int *)(param_1 + 0xd4));
  }
  return;
}


