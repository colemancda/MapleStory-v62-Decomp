/* FUN_00773393 - 0x00773393 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00773393(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x14) < *(int *)(param_2 + 0x14)) {
    bVar3 = false;
  }
  else if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
    bVar3 = true;
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


