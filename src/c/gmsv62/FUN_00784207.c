/* FUN_00784207 - 0x00784207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00784207(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = (param_2 - *param_1) / 0x44;
    iVar2 = (param_3 - *param_1) / 0x44;
    if (iVar1 < iVar2) {
      iVar4 = 0;
      for (iVar3 = iVar2 - iVar1; iVar3 != 1; iVar3 = iVar3 >> 1) {
        iVar4 = iVar4 + 1;
      }
      FUN_007868b4(param_1,iVar1,iVar2,iVar4 * 2,&stack0x00000010);
      FUN_00786982(param_1,iVar1,iVar2,&stack0x00000010);
    }
  }
  return;
}


