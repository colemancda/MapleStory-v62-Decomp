/* FUN_0041f74c - 0x0041f74c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0041f74c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = DAT_00973cc8;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (iVar3 == 1) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(int *)(unaff_EBP + -0x10) = DAT_00973ccc;
    iVar3 = FUN_004029b9(0x144);
    *(int *)(unaff_EBP + 0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      DAT_00973ac0 = (int *)0x0;
    }
    else {
      DAT_00973ac0 = (int *)FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),DAT_00973cd0,
                                         unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004524da(&DAT_00973ac8);
    FUN_004526dc(1);
  }
  else if (iVar3 == 2) {
    if (DAT_00973ac0 != (int *)0x0) {
      (**(code **)(*DAT_00973ac0 + 0x24))(1);
    }
    (*DAT_0097b514)(0);
  }
  else if (iVar3 == 0x10) {
    FUN_004526dc(0);
    (*DAT_0097b518)(*(undefined4 *)(unaff_EBP + 8));
  }
  else if (iVar3 == 0x20) {
    ShowCursor(1);
  }
  else if (iVar3 == 0x24) {
    iVar2 = (*DAT_0097b544)(7);
    iVar3 = *(int *)(unaff_EBP + 0x14);
    *(int *)(iVar3 + 0x20) = DAT_00973cc8 + iVar2 * 2;
    iVar2 = (*DAT_0097b544)(8);
    *(int *)(iVar3 + 0x24) = DAT_00973ccc + iVar2 * 2;
    iVar2 = (*DAT_0097b544)(7);
    *(int *)(iVar3 + 0x18) = DAT_00973cc8 + iVar2 * 2;
    iVar2 = (*DAT_0097b544)(8);
    *(int *)(iVar3 + 0x1c) = DAT_00973ccc + iVar2 * 2;
  }
  else if ((iVar3 != 0x112) || (*(int *)(unaff_EBP + 0x10) != 0xf060)) {
    uVar1 = (*DAT_0097b510)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                            *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    goto LAB_0041f8b7;
  }
  uVar1 = 0;
LAB_0041f8b7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


