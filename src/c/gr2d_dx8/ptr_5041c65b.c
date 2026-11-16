/* ptr_5041c65b - 0x5041c65b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall ptr_5041c65b(void *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_5041c255(param_1,param_2 + *(int *)((int)param_1 + 0x1034),
                       param_3 + *(int *)((int)param_1 + 0x1040),1);
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)
             ((*(int *)((int)param_1 + 0x1030) - *(int *)((int)param_1 + 0x1070)) * 0x10 +
             *(int *)((int)param_1 + 0x106c));
    puVar3 = param_4;
    for (iVar1 = (*(uint *)((int)param_1 + 0x1058) & 0xfffffff) << 2; iVar1 != 0; iVar1 = iVar1 + -1
        ) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      FUN_50418f81(param_1,(uint)param_4);
    }
  }
  return;
}


