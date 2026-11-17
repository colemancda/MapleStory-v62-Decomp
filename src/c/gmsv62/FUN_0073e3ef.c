/* FUN_0073e3ef - 0x0073e3ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte FUN_0073e3ef(void)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xd02);
  uVar2 = *puVar4;
  cVar3 = '\0';
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_004538dc(uVar2,0,0);
  if (iVar5 < 0) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xd03);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e537;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xd04);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e537;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xd05);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
    }
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e537;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xd06);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x1c) + -0xc);
    }
    cVar1 = *(char *)(unaff_EBP + 0xb);
    *(undefined1 *)(unaff_EBP + 0xb) = 0;
    if (cVar1 != '\0') goto LAB_0073e537;
  }
  else {
LAB_0073e537:
    *(undefined1 *)(unaff_EBP + 0xb) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x20) + -0xc);
  }
  if (*(char *)(unaff_EBP + 0xb) != '\0') {
    bVar6 = 0x71;
    goto LAB_0073e64d;
  }
  puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x30,0xd07);
  uVar2 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iVar5 = FUN_004538dc(uVar2,0,0);
  if (iVar5 < 0) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0xd08);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
    }
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e636;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x3db);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e636;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0xd0a);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar5 = FUN_004538dc(uVar2,0,0);
    *(bool *)(unaff_EBP + 0xb) = -1 < iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_0073e636;
  }
  else {
LAB_0073e636:
    cVar3 = '\x01';
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  bVar6 = -cVar3 & 0x73;
LAB_0073e64d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar6;
}


