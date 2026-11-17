/* FUN_0052abbb - 0x0052abbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052abbb(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int local_20;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    local_20 = 0;
    FUN_0060142b(0xd9,0);
    local_20 = 5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda();
    local_20 = *(int *)(extraout_ECX + 0x68);
    FUN_00457d37();
    iVar1 = *(int *)(unaff_EBP + 8);
    local_20 = iVar1;
    FUN_00457d37();
    local_20 = 0;
    FUN_00457d37();
    local_20 = *(int *)(unaff_EBP + 0xc);
    FUN_00457cda();
    local_20 = *(int *)(unaff_EBP + 0x10);
    FUN_00457cda();
    if (*(int *)(extraout_ECX + 0x6c) == iVar1) {
      local_20 = *(int *)(extraout_ECX + 0x1d6c);
      FUN_00457d37();
      *(int **)(unaff_EBP + 8) = &local_20;
      local_20 = 0;
      FUN_00414f8b(extraout_ECX + 0x1d70);
    }
    else {
      local_20 = 1;
      FUN_00457d37();
      *(int **)(unaff_EBP + 8) = &local_20;
      local_20 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
    }
    FUN_00459cb5();
    local_20 = unaff_EBP + -0x1c;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x18) = 1;
    local_20 = 0x52ac9b;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


