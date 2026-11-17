/* FUN_00700788 - 0x00700788 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00700788(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x58c);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    iVar1 = unaff_EBP + -0x24;
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  else {
    iVar1 = FUN_006fb663(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 4);
  FUN_00705dac();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
     *(int *)(unaff_EBP + -0x20) != 0)) {
    FUN_00705e5b(0);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x28) != 0)) {
    FUN_00705e5b(0);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_006ff6fe();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iVar1 = *(int *)(extraout_ECX + 0x5cc + *(int *)(extraout_ECX + 0x588) * 4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar1 + -4);
    }
    if (*(uint *)(extraout_ECX + 0x58c) < uVar2) goto LAB_0070085f;
  }
  *(undefined4 *)(extraout_ECX + 0x58c) = 0xffffffff;
  FUN_00701905(0);
LAB_0070085f:
  if ((-1 < *(int *)(extraout_ECX + 0x58c)) && (*(int *)(extraout_ECX + 0x598) != 0)) {
    FUN_006fb663(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if ((*(short **)(unaff_EBP + -0x10) == (short *)0x0) ||
       (**(short **)(unaff_EBP + -0x10) != **(short **)(unaff_EBP + -0x18))) {
      *(undefined4 *)(extraout_ECX + 0x58c) = 0xffffffff;
      FUN_00701905(0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00705e5b(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  FUN_00700900();
  if ((-1 < *(int *)(extraout_ECX + 0x58c)) && (*(int *)(extraout_ECX + 0x598) != 0)) {
    FUN_006fbe67();
  }
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00705e5b(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


