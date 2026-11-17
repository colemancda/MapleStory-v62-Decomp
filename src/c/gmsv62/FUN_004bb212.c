/* FUN_004bb212 - 0x004bb212 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bb212(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar3 = param_2 - *param_1 >> 3;
    iVar1 = param_3 - *param_1 >> 3;
    if (iVar3 < iVar1) {
      iVar4 = 0;
      for (iVar2 = iVar1 - iVar3; iVar2 != 1; iVar2 = iVar2 >> 1) {
        iVar4 = iVar4 + 1;
      }
      FUN_004bbca9(param_1,iVar3,iVar1,iVar4 * 2,&stack0x00000010);
      FUN_004bbd7c(param_1,iVar3,iVar1,&stack0x00000010);
    }
  }
  return;
}


