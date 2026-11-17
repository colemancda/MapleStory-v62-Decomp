/* FUN_006ab2ec - 0x006ab2ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006ab2ec(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0046575e();
  }
  else {
    FUN_004b58bf(unaff_EBP + -0x18,1);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar2 = FUN_0045e2eb();
    FUN_0045e3a0(uVar2);
    FUN_0045f03e(iVar4 + 0x28,*(undefined4 *)(iVar4 + 0x2a));
    uVar2 = FUN_004b8c01();
    *(undefined4 *)(iVar1 + 0x2a) = uVar2;
    FUN_0045f03e(iVar4 + 0x2e,*(undefined4 *)(iVar4 + 0x30));
    uVar2 = FUN_004b8c01();
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
    FUN_0045f084(iVar4 + 0x34,*(undefined4 *)(iVar4 + 0x38));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    FUN_0045f084(iVar4 + 0x3c,*(undefined4 *)(iVar4 + 0x40));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x40) = uVar2;
    FUN_0045f084(iVar4 + 0x44,*(undefined4 *)(iVar4 + 0x48));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    FUN_0045f084(iVar4 + 0x4c,*(undefined4 *)(iVar4 + 0x50));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    FUN_0045f084(iVar4 + 0x54,*(undefined4 *)(iVar4 + 0x58));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    FUN_0045f084(iVar4 + 0x5c,*(undefined4 *)(iVar4 + 0x60));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
    FUN_0045f084(iVar4 + 100,*(undefined4 *)(iVar4 + 0x68));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x68) = uVar2;
    FUN_0045f084(iVar4 + 0x6c,*(undefined4 *)(iVar4 + 0x70));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
    FUN_0045f084(iVar4 + 0x74,*(undefined4 *)(iVar4 + 0x78));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x78) = uVar2;
    FUN_0045f084(iVar4 + 0x7c,*(undefined4 *)(iVar4 + 0x80));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x80) = uVar2;
    FUN_0045f084(iVar4 + 0x84,*(undefined4 *)(iVar4 + 0x88));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x88) = uVar2;
    FUN_0045f084(iVar4 + 0x8c,*(undefined4 *)(iVar4 + 0x90));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x90) = uVar2;
    FUN_0045f084(iVar4 + 0x94,*(undefined4 *)(iVar4 + 0x98));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0x98) = uVar2;
    FUN_0045f084(iVar4 + 0x9c,*(undefined4 *)(iVar4 + 0xa0));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0xa0) = uVar2;
    FUN_0045f084(iVar4 + 0xa4,*(undefined4 *)(iVar4 + 0xa8));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0xa8) = uVar2;
    FUN_0045f084(iVar4 + 0xac,*(undefined4 *)(iVar4 + 0xb0));
    uVar2 = FUN_004b8c34();
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
    FUN_0087b200(iVar1 + 0xbc,iVar4 + 0xbc);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar1;
    iVar3 = 0;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar3 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      FUN_00449913(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


