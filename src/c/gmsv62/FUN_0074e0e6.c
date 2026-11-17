/* FUN_0074e0e6 - 0x0074e0e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074e0e6(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(unaff_EBP + 0x14) == 0) && (iVar1 < 1)) goto LAB_0074e204;
  *(undefined4 *)(unaff_EBP + 0x14) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    if (iVar1 < 1) {
      iStack_18 = 0x7ee;
      pcStack_1c = (char *)(unaff_EBP + 0xc);
      iStack_20 = 0x74e17b;
      puVar3 = (undefined4 *)FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    else {
      iStack_18 = 0x7ed;
      pcStack_1c = (char *)(unaff_EBP + 8);
      iStack_20 = 0x74e15f;
      puVar3 = (undefined4 *)FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    pcStack_1c = (char *)*puVar3;
    iStack_20 = unaff_EBP + 0x14;
    iStack_24 = 0x74e196;
    iStack_18 = iVar1;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      iStack_18 = 0x74e1b2;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      iStack_18 = 0x74e1c2;
      FUN_00414ebb();
    }
LAB_0074e1c2:
    iStack_18 = 0x3e9;
    pcStack_1c = (char *)0x1;
    iStack_24 = unaff_EBP + 0x14;
    *(int **)(unaff_EBP + -0x10) = &iStack_20;
    FUN_00450368();
    *(int **)(unaff_EBP + -0x14) = &iStack_24;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00450368(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00757231(0xd,0xf);
  }
  else {
    if (iVar2 == 1) {
      pcStack_1c = &DAT_0096b768;
LAB_0074e12f:
      iStack_20 = unaff_EBP + 0x14;
      iStack_24 = 0x74e138;
      iStack_18 = iVar1;
      FUN_00434e21();
      goto LAB_0074e1c2;
    }
    if (iVar2 == 2) {
      pcStack_1c = s__d___0096b76c;
      goto LAB_0074e12f;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_18 = 0x74e204;
  FUN_00414ebb();
LAB_0074e204:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_18 = 0x74e210;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


