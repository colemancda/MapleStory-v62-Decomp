/* FUN_005805dd - 0x005805dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005805dd(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar2 = FUN_00580a6f();
  if (iVar2 == 0) goto LAB_0058085c;
  iVar3 = *(int *)(unaff_EBP + 8) + -1000;
  iVar2 = extraout_ECX;
  if (iVar3 == 8) {
    if (*(char *)(extraout_ECX + 0xd4) != '\0') {
      *(undefined1 *)(extraout_ECX + 0xd4) = 0;
      goto LAB_00580623;
    }
    *(undefined1 *)(extraout_ECX + 0xd4) = 1;
LAB_00580634:
    if (*(char *)(extraout_ECX + 0xd4) == '\0') {
      piVar1 = (int *)(extraout_ECX + 0x16c + iVar3 * 4);
      iVar3 = *piVar1;
      if ((iVar3 != 0) && (1 < *(uint *)(iVar3 + -4))) {
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar3 + -4);
        }
        iVar3 = *piVar1;
        iVar2 = iVar2 * 8;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + -8 + iVar2);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414f8b(iVar3 + iVar2 + -4);
        iVar3 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00585252(iVar2 + -8 + iVar3);
        puVar4 = (undefined4 *)FUN_005851c2(0);
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        FUN_00414f8b(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = *(int *)(unaff_EBP + -0x14);
LAB_00580735:
        if (iVar2 != 0) {
          FUN_00434e38(iVar2 + -0xc);
        }
        iVar2 = *(int *)(unaff_EBP + -0x10);
      }
    }
    else if (*(char *)(extraout_ECX + 0xd4) == '\x01') {
      piVar1 = (int *)(extraout_ECX + 400 + iVar3 * 4);
      iVar3 = *piVar1;
      if ((iVar3 != 0) && (1 < *(uint *)(iVar3 + -4))) {
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar3 + -4);
        }
        iVar3 = *piVar1;
        iVar2 = iVar2 * 8;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + -8 + iVar3);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414f8b(iVar2 + iVar3 + -4);
        iVar3 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00585252(iVar2 + -8 + iVar3);
        puVar4 = (undefined4 *)FUN_005851c2(0);
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        FUN_00414f8b(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = *(int *)(unaff_EBP + -0x14);
        goto LAB_00580735;
      }
    }
  }
  else {
LAB_00580623:
    if ((-1 < iVar3) && (iVar3 < 9)) goto LAB_00580634;
  }
  iVar3 = *(int *)(unaff_EBP + 8) + -0x44c;
  if (iVar3 == 8) {
    if (*(char *)(iVar2 + 0xd4) != '\0') {
      *(undefined1 *)(iVar2 + 0xd4) = 0;
      goto LAB_00580768;
    }
    *(undefined1 *)(iVar2 + 0xd4) = 1;
LAB_00580779:
    if (*(char *)(iVar2 + 0xd4) == '\0') {
      piVar1 = (int *)(iVar2 + 0x16c + iVar3 * 4);
      puVar4 = (undefined4 *)*piVar1;
      if ((puVar4 != (undefined4 *)0x0) && (1 < (uint)puVar4[-1])) {
        *(undefined4 *)(unaff_EBP + -0x18) = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414f8b(puVar4 + 1);
        iVar2 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00585252(iVar2);
        puVar4 = (undefined4 *)FUN_005851c2(0xffffffff);
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        FUN_00414f8b(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00580842:
        FUN_00414ebb();
      }
    }
    else if (*(char *)(iVar2 + 0xd4) == '\x01') {
      piVar1 = (int *)(iVar2 + 400 + iVar3 * 4);
      puVar4 = (undefined4 *)*piVar1;
      if ((puVar4 != (undefined4 *)0x0) && (1 < (uint)puVar4[-1])) {
        *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        FUN_00414f8b(puVar4 + 1);
        iVar2 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00585252(iVar2);
        puVar4 = (undefined4 *)FUN_005851c2(0xffffffff);
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x20);
        FUN_00414f8b(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_00580842;
      }
    }
  }
  else {
LAB_00580768:
    if ((-1 < iVar3) && (iVar3 < 9)) goto LAB_00580779;
  }
  FUN_00569774();
  FUN_008161f1(0);
LAB_0058085c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


