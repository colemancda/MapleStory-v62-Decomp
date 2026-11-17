/* FUN_006aabbe - 0x006aabbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006aabbe(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  int local_18;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x578) == 0) && (iVar1 = *(int *)(unaff_EBP + 8), iVar1 != 0)) {
    local_18 = 0x6aabf0;
    local_18 = FUN_0045e2eb();
    uStack_1c = 0x6aabfc;
    iVar2 = FUN_005540b6();
    uVar3 = extraout_ECX_00;
    if (iVar2 != 0) {
      local_18 = 0x6aac08;
      iVar2 = FUN_0045e2eb();
      uVar3 = 10000;
      if (iVar2 / 10000 != 0xb4) {
        local_18 = 0;
        uStack_1c = 0;
        uStack_24 = 0;
        uStack_28 = 10000;
        *(undefined4 **)(unaff_EBP + 8) = &uStack_28;
        FUN_00679d22(&uStack_28,0x1014);
        FUN_007db3ad();
        goto LAB_006aac9b;
      }
    }
    *(undefined4 **)(unaff_EBP + 8) = &uStack_1c;
    uStack_24 = 0x6aac2b;
    uStack_1c = uVar3;
    local_18 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + 4));
    uStack_24 = 0x6aac36;
    local_18 = FUN_006ab2ec();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_1c = 0x6aac45;
    FUN_004653ef();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_18 = 0;
      uStack_1c = 0x6aac57;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined4 *)(extraout_ECX + 0x88) = *(undefined4 *)(unaff_EBP + 0xc);
    local_18 = 0;
    *(undefined4 *)(extraout_ECX + 0x8c) = *(undefined4 *)(unaff_EBP + 0x10);
    uStack_1c = 0x6aac74;
    FUN_008161f1();
    uVar3 = 1;
  }
  else {
LAB_006aac9b:
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


