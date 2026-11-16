/* FUN_5041c5b2 - 0x5041c5b2 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_5041c5b2(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = (undefined4 *)FUN_5041841d(this,(int)param_3);
  }
  iVar1 = FUN_5041c255(this,param_1 + *(int *)((int)this + 0x1034),
                       param_2 + *(int *)((int)this + 0x1040),
                       (uint)(*(int *)((int)this + 0x1088) != *(int *)((int)this + 0x1058)));
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)
             ((*(int *)((int)this + 0x1030) - *(int *)((int)this + 0x1070)) * 0x10 +
             *(int *)((int)this + 0x106c));
    for (iVar1 = (*(uint *)((int)this + 0x1058) & 0xfffffff) << 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(undefined4 *)((int)this + 0x108c) = 1;
  }
  return;
}


