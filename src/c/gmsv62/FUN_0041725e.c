/* FUN_0041725e - 0x0041725e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0041725e(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  FUN_0041a545();
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)FUN_004029b9(param_2 * 4 + 4);
    *param_1 = (int)(piVar4 + 1);
    *piVar4 = param_2;
    puVar1 = (undefined4 *)*param_1;
    puVar2 = puVar1;
    while (puVar5 = puVar2, puVar5 < puVar1 + param_2) {
      puVar2 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
      }
    }
    iVar3 = *param_1;
  }
  return iVar3;
}


