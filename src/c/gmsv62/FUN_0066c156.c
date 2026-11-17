/* FUN_0066c156 - 0x0066c156 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066c156(undefined4 param_1,int param_2,int param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_00650dae(param_1,0x4fa6ab,&local_8);
  if ((0 < iVar2) && (*(int **)(param_2 + 0x96c) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x96c) + 4))();
    if (cVar1 != '\0') {
      iVar3 = FUN_005c4af4();
      if (iVar3 == param_3) {
        iVar2 = FUN_006509a1(iVar2);
        iVar2 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
        *param_4 = (double)(iVar2 + 100) * *param_4 * _DAT_008e8cd0;
      }
    }
  }
  return;
}


