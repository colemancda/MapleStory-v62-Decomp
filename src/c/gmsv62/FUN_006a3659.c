/* FUN_006a3659 - 0x006a3659 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a3659(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xff000000;
  puVar2 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x84) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  pcVar1 = *(char **)(extraout_ECX + 0x98);
  iVar3 = extraout_ECX + 0x98;
  *(undefined4 *)(unaff_EBP + -0x68) = 0x23;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    iVar3 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00414f8b(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_00414ebb();
  }
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 8))
            (extraout_ECX,0,0x46,0x1b,0xdc,0xf,unaff_EBP + -0x98);
  FUN_004a77eb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_004029b9(0xcc);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00609bca(uVar4);
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  uVar4 = FUN_00679e4e(unaff_EBP + -0x14,10);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x54) = **(undefined4 **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcVar1 = *(char **)(extraout_ECX + 0x94);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  iVar3 = extraout_ECX + 0x94;
  *(undefined4 *)(unaff_EBP + -0x38) = 300;
  *(undefined4 *)(unaff_EBP + -0x34) = 0x10e;
  *(undefined4 *)(unaff_EBP + -0x30) = 0x14;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
    iVar3 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  FUN_00414f8b(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
    FUN_00414ebb();
  }
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 8))
            (extraout_ECX,2000,0x16,0x31,0x10e,0xf0,unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x1112);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))
            (extraout_ECX,1,0x73,0x139,0,unaff_EBP + -0x28);
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x1113);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))
            (extraout_ECX,2,0xb6,0x139,0,unaff_EBP + -0x28);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x78));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00608bf3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


