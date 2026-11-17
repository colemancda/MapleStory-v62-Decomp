/* FUN_004908c6 - 0x004908c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004908c6(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 4000) {
    iVar2 = FUN_004029b9(0x7c);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00490a7c();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar3 != 0) & uVar3 - 8;
    FUN_00495cc1();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xd80);
    uVar5 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004bc5f0(uVar5,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + 8) + -0xc);
    }
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00495cde();
    goto LAB_00490a6b;
  }
  uVar3 = *(int *)(unaff_EBP + 8) - 2000;
  iVar2 = *(int *)(extraout_ECX + 0x170 + (uVar3 / 3) * 4);
  *(uint *)(unaff_EBP + 8) = uVar3 % 3;
  if (iVar2 < 0) goto LAB_00490a6b;
  FUN_004903a3(unaff_EBP + -0x14,iVar2);
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e46f();
    goto LAB_00490a6b;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0) {
    uVar5 = FUN_0045e2eb();
    FUN_0045db5e(uVar5,*(undefined4 *)(iVar2 + 0xc));
LAB_00490a59:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    if (iVar1 == 1) {
      iVar2 = FUN_0045e2eb();
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc);
      if (iVar2 / 10000 == 0x38e) {
        FUN_00459e34(uVar5);
      }
      else {
        FUN_00459924(uVar5);
      }
      goto LAB_00490a59;
    }
    if (iVar1 == 2) {
      if (*(int *)(*(int *)(extraout_ECX + 0x210) + 0x500) == 9) {
        FUN_0045b49e(*(undefined4 *)(iVar2 + 0xc));
      }
      else {
        FUN_0045b339(*(undefined4 *)(iVar2 + 0xc));
      }
      goto LAB_00490a59;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (iVar2 != 0) {
    FUN_0045e794(0);
  }
LAB_00490a6b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


