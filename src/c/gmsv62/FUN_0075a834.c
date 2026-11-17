/* FUN_0075a834 - 0x0075a834 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0075a834(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  uint uStack_34;
  uint auStack_30 [6];
  undefined4 uStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  for (uVar2 = 0;
      (iVar1 = *(int *)(extraout_ECX + 4), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    uStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
    auStack_30[4] = *(int *)(unaff_EBP + -0x10) + *(int *)(extraout_ECX + 4);
    auStack_30[5] = *(undefined4 *)(unaff_EBP + 0xc);
    auStack_30[3] = 0x75a872;
    iVar1 = (*DAT_0097b57c)();
    if (iVar1 != 0) {
      uStack_18 = 0;
      auStack_30[5] = unaff_EBP + -0x14;
      auStack_30[4] = 0x75a88d;
      FUN_00817e25();
      uStack_18 = 0;
      auStack_30[5] = (uint)(*(int *)(unaff_EBP + 0x14) == 0);
      auStack_30[4] = 0;
      auStack_30[3] = *(undefined4 *)(unaff_EBP + 0x14);
      auStack_30[2] = 0;
      auStack_30[1] = 0;
      uStack_34 = 0x75a8a5;
      auStack_30[0] = uVar2;
      iVar1 = FUN_0075bcc0();
      uStack_34 = iVar1 + 0x14;
      *(uint **)(unaff_EBP + 0x14) = auStack_30;
      FUN_00450368();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_34 = uVar2;
      iVar1 = FUN_0075bcc0();
      *(uint **)(unaff_EBP + 0x10) = &uStack_34;
      FUN_00450368(iVar1 + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0074da18(*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x10) + 0x14);
      goto LAB_0075a8f3;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x18;
  }
  uStack_18 = 0x75a8f0;
  FUN_0074d6fb();
  uVar2 = 0xffffffff;
LAB_0075a8f3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


