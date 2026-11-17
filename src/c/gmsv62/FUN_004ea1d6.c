/* FUN_004ea1d6 - 0x004ea1d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea1d6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int local_28;
  
  FUN_00879bb8();
  if ((*(byte *)(extraout_ECX + 0x109) & 8) == 0) {
    if ((*(int *)(DAT_00978368 + 0x2b40) == 0) ||
       (*(int *)(DAT_00978368 + 0x2bf2) != *(int *)(DAT_00978368 + 0x2088))) {
      local_28 = 0x152;
      uVar4 = FUN_00679d22(unaff_EBP + -0x14);
      local_28 = 0xc;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      piVar1 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x14) = &local_28;
      local_28 = 0;
      FUN_00414f8b(piVar1);
      iVar2 = FUN_0085c5be();
      if (iVar2 != 0) {
        local_28 = 0;
        FUN_0060142b(0x70,0);
        local_28 = 6;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00457cda();
        local_28 = iVar2;
        FUN_00457d37();
        local_28 = unaff_EBP + -0x24;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_28 = 0x4ea2ce;
        FUN_0045ebca();
        goto LAB_004ea2fc;
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      local_28 = 0x154;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10);
      local_28 = *piVar1;
      uVar4 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + 8,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_28 = 0x4ea277;
      FUN_00414ebb();
      local_28 = 0xc;
      FUN_00471102(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    local_28 = 0x4ea2fc;
    FUN_00414ebb();
  }
LAB_004ea2fc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


