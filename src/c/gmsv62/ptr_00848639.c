/* ptr_00848639 - 0x00848639 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00848639(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  iVar1 = (*DAT_0097b4bc)();
  if (iVar1 != 0) {
    if (*(int *)(unaff_EBP + 8) == unaff_EBX) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
    }
    iVar2 = FUN_004538dc(unaff_EDI,unaff_EBX,unaff_EBX);
    FUN_0045e08c(unaff_EBP + -0x10,(iVar1 - iVar2) + -3);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uVar3 = FUN_00415015(0x400,1);
    FUN_00471777(uVar3);
    FUN_004150c0(0xffffffff);
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x40,0x707);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00434e21(unaff_EBP + 8,uVar3,*(undefined4 *)(unaff_EBP + -0x18),
                 *(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x40) != unaff_EBX) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x40) + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x10) != unaff_EBX) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
  }
  FUN_00471102(unaff_EBP + 8,0xd);
  *(int *)(unaff_EBP + -0x14) = unaff_EBX;
  iVar1 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar3 = FUN_00415015(0x400,1);
  iVar1 = FUN_00471a4c(uVar3,iVar1);
  FUN_004150c0(0xffffffff);
  if (iVar1 != unaff_EBX) {
    FUN_00471102(unaff_EBP + -0x14,8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != unaff_EBX) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0046575e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


