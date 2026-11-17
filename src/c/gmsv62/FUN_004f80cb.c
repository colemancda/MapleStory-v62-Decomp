/* FUN_004f80cb - 0x004f80cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f80cb(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = (param_2 - *param_1) / 0xc;
    iVar2 = (param_3 - *param_1) / 0xc;
    if (iVar1 < iVar2) {
      iVar4 = 0;
      for (iVar3 = iVar2 - iVar1; iVar3 != 1; iVar3 = iVar3 >> 1) {
        iVar4 = iVar4 + 1;
      }
      FUN_004f9702(param_1,iVar1,iVar2,iVar4 * 2);
      FUN_004f97ba(param_1,iVar1,iVar2);
    }
  }
  return;
}


