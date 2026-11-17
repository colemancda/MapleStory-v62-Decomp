/* FUN_0052aada - 0x0052aada in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052aada(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int local_28;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x18);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar1 == 0) {
    *(int **)(unaff_EBP + -0x14) = &local_28;
    local_28 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    FUN_0052b501(0,0,0,0);
    local_28 = 0;
    FUN_0060142b(0xd9,0);
    local_28 = 5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda();
    local_28 = *(int *)(unaff_EBP + 8);
    FUN_00457d37();
    local_28 = 0;
    FUN_00457d37();
    local_28 = 0;
    FUN_00457d37();
    local_28 = 1;
    FUN_00457cda();
    local_28 = 1;
    FUN_00457cda();
    local_28 = 1;
    FUN_00457d37();
    *(int **)(unaff_EBP + 8) = &local_28;
    local_28 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    FUN_00459cb5();
    local_28 = unaff_EBP + -0x24;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18) = 1;
    local_28 = 0x52abaa;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


