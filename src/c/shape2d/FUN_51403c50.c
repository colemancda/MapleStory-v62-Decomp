/* FUN_51403c50 - 0x51403c50 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51403c50(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)param_1 + 0x24) = DAT_5140c6c0;
  *(undefined4 *)((int)param_1 + 0x28) = DAT_5140c6c4;
  *(undefined4 *)((int)param_1 + 0x2c) = DAT_5140c6c8;
  *(undefined4 *)((int)param_1 + 0x30) = DAT_5140c6cc;
  puVar2 = *(undefined4 **)((int)param_1 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
    FUN_51403be6(param_1,(int *)*puVar2);
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}


