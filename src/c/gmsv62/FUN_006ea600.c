/* FUN_006ea600 - 0x006ea600 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006ea600(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined4 uStack_14;
  int local_10;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_10 = *(int *)(iVar2 + 8);
    if (*(int *)(*(int *)(extraout_ECX + 0xa74) + 0x34) != local_10) {
      uStack_14 = 0x6ea637;
      FUN_006e2dea();
      iVar2 = *(int *)(unaff_EBP + 0xc);
    }
    local_10 = *(int *)(iVar2 + 0xc) / 0x19;
    if (*(int *)(extraout_ECX + 0x578) != local_10) {
      uStack_14 = 0x6ea653;
      FUN_006e952f();
      iVar2 = *(int *)(unaff_EBP + 0xc);
    }
    local_10 = *(int *)(iVar2 + 0xc) % 0x19;
    if (*(int *)(extraout_ECX + 0x580) != local_10) {
      uStack_14 = 0x6ea66f;
      FUN_006e9576();
    }
    local_10 = 0;
    uStack_14 = 0x6ea67c;
    FUN_006e2dea();
    local_10 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(extraout_ECX + 0xab8) = 1;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_14;
    FUN_005e05a2();
    FUN_006e968b();
    local_10 = 0x6ea6a5;
    FUN_006e6684();
    local_10 = 1;
    uStack_14 = **(undefined4 **)(unaff_EBP + 0xc);
    FUN_007b404b();
    local_10 = 0x6ea6bd;
    FUN_006ea8a7();
    local_10 = **(undefined4 **)(unaff_EBP + 0xc);
    uStack_14 = 0x6ea6c7;
    uVar1 = FUN_007b3eda();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      local_10 = 0;
      uStack_14 = 0x6ea6de;
      FUN_005e064d();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


