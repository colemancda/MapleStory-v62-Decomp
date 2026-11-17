/* ptr_006a3775 - 0x006a3775 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a3775(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int unaff_ESI;
  
  (**(code **)(in_EAX + 8))();
  FUN_004a77eb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_004029b9(0xcc);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00609bca(uVar3);
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  uVar3 = FUN_00679e4e(unaff_EBP + -0x14,10);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x54) = **(undefined4 **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcVar1 = *(char **)(unaff_ESI + 0x94);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  iVar2 = unaff_ESI + 0x94;
  *(undefined4 *)(unaff_EBP + -0x38) = 300;
  *(undefined4 *)(unaff_EBP + -0x34) = 0x10e;
  *(undefined4 *)(unaff_EBP + -0x30) = 0x14;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
    iVar2 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  FUN_00414f8b(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
    FUN_00414ebb();
  }
  (**(code **)(**(int **)(unaff_ESI + 0x80) + 8))();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x1112);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x20))();
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x1113);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(unaff_ESI + 0x90) + 0x20))();
  FUN_008164fd(*(undefined4 *)(unaff_ESI + 0x78));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00608bf3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


