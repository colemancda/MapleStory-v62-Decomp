/* FUN_006d34a9 - 0x006d34a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d34a9(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 uVar4;
  int unaff_EBP;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  uVar4 = 0;
  if ((-1 < iVar1) && (iVar1 < 3)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    puVar2 = *(undefined4 **)(iVar1 * 0x20 + extraout_ECX + 0xd4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = *puVar2;
    }
    uStack_18 = 0x312;
    iStack_1c = unaff_EBP + -0x10;
    piVar3 = (int *)FUN_00679d86();
    iStack_1c = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_18 = uVar4;
    FUN_0041354c(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_18 = 0x6d351c;
    FUN_00402676();
    uStack_18 = 0xffffffff;
    *(int **)(unaff_EBP + -0x14) = &iStack_1c;
    iStack_1c = extraout_ECX_00;
    FUN_004343e4(unaff_EBP + 8);
    FUN_006d2ea2();
    if (*(int *)(extraout_ECX + 100) == 2) {
      uStack_18 = 1;
      iStack_1c = 0x6d3543;
      FUN_006d2e81();
    }
    uStack_18 = 0x6d354a;
    FUN_006d1da3();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_18 = 0x6d3556;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


