/* FUN_005665b3 - 0x005665b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005665b3(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int local_2c;
  
  FUN_00879bb8();
  if ((((*(int *)(extraout_ECX + 0x144) == 0) && (*(int *)(extraout_ECX + 0x1b0) == 0)) &&
      (iVar1 = *(int *)(extraout_ECX + 0x160), -1 < iVar1)) &&
     (((iVar1 < 6 && (*(int *)(extraout_ECX + 0x140) == 0)) &&
      (*(int *)(iVar1 * 0x280 + *(int *)(extraout_ECX + 0x164)) != 0)))) {
    local_2c = 0;
    FUN_0060142b(0x13,0);
    local_2c = *(int *)(*(int *)(extraout_ECX + 0x160) * 0x280 + *(int *)(extraout_ECX + 0x164));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457d37();
    local_2c = -1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd(&DAT_00978474);
    local_2c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0056a319();
    *(int **)(unaff_EBP + -0x18) = &local_2c;
    local_2c = 0;
    FUN_00414f8b(unaff_EBP + -0x14);
    FUN_00459cb5();
    local_2c = -1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474);
    local_2c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0056a485();
    *(int **)(unaff_EBP + -0x18) = &local_2c;
    local_2c = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    FUN_00459cb5();
    local_2c = unaff_EBP + -0x28;
    FUN_00565a2e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_2c = 0x5666cb;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_2c = 0x5666d6;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_2c = 0x5666e2;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


