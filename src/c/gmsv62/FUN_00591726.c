/* FUN_00591726 - 0x00591726 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00591726(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0) {
    if (DAT_00979428 == 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x78);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x14c);
      iStack_24 = 0x108;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_28 = 0x591834;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == 0) goto LAB_00591849;
      iStack_24 = unaff_EBP + -0x24;
LAB_00591843:
      uStack_28 = 0x591849;
      FUN_00591859();
      goto LAB_00591849;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iStack_24 = 0;
        uStack_28 = 1;
        uStack_2c = 0;
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + 0xc) = auStack_34;
        FUN_00679d22(auStack_34,0x557);
        FUN_007db3ad();
        iStack_24 = 1;
        uStack_28 = 0x591789;
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x88 + *(int *)(extraout_ECX + 0x14c) * 8) + 4
                             ) + 0x1c))();
      }
      goto LAB_00591849;
    }
    iStack_24 = 0;
    uStack_28 = 1;
    uStack_2c = 0;
    uStack_30 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_34;
    FUN_00679d22(auStack_34,0x556);
    FUN_007db3ad();
    if (DAT_00979428 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x78);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x14c);
      iStack_24 = 0x108;
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_28 = 0x5917f1;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) goto LAB_00591849;
      iStack_24 = unaff_EBP + -0x18;
      goto LAB_00591843;
    }
  }
  iStack_24 = 1;
  uStack_28 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_2c = *(undefined4 *)(extraout_ECX + 0x14c);
  uStack_30 = 0x5917cb;
  FUN_00592a9b();
LAB_00591849:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


