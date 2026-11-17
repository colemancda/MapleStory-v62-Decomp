/* FUN_007e10ae - 0x007e10ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e10ae(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x74);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11c7);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_007e1156:
    FUN_00402676();
  }
  else {
    if (iVar2 == 1) {
      uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11ca);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00419192(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_007e1156;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11cf);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00419192(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_007e1156;
    }
  }
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    uVar1 = 0x78;
  }
  else {
    uVar1 = 0x65;
  }
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))
            (extraout_ECX,1000,0x14,uVar1,0,unaff_EBP + -0x24);
  iVar2 = *(int *)(extraout_ECX + 0x74);
  if (iVar2 == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11c8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11cb);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (iVar2 != 2) goto LAB_007e122f;
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x11d0);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00402676();
LAB_007e122f:
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    uVar1 = 0x78;
  }
  else {
    uVar1 = 0x65;
  }
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,0x3e9,0x94,uVar1,0,unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


