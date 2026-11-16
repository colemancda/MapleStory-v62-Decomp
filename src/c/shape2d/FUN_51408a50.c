/* FUN_51408a50 - 0x51408a50 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51408a50(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_5140ad20();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  uVar2 = DAT_51411afc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_51408a12(unaff_EBP + 0x14,uVar2);
  puVar3 = (undefined4 *)FUN_5140a06a();
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = &PTR_FUN_5140d95c;
    puVar3[4] = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    puVar3[5] = 0;
    *puVar3 = &PTR_FUN_5140d950;
    puVar3[1] = &PTR_LAB_5140d94c;
    puVar4 = puVar3;
  }
  uVar1 = *(undefined8 *)(unaff_EBP + 0xc);
  puVar4[4] = DAT_51411afc;
  *(undefined8 *)(puVar4 + 2) = uVar1;
  puVar4[5] = uVar2;
  FUN_514072cf();
  FUN_5140833b();
  FUN_51408af1();
  return;
}


