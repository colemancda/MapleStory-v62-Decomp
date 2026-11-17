/* FUN_00773217 - 0x00773217 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00773217(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
    bVar3 = true;
  }
  else if (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc)) {
    bVar3 = false;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) == 0) {
      iVar1 = DAT_00980dfc;
    }
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = DAT_00980dfc;
    }
    iVar1 = FUN_008858f0(iVar2,iVar1);
    bVar3 = iVar1 < 0;
  }
  return bVar3;
}


