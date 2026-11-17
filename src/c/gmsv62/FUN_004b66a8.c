/* FUN_004b66a8 - 0x004b66a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b66a8(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar4 = FUN_0042459a();
  *extraout_ECX = uVar4;
  uVar4 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + 8) = 5;
  do {
    uVar4 = FUN_0045cdbc(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    piVar1 = (int *)(unaff_EBP + 8);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  uVar5 = FUN_0042452b();
  uVar5 = uVar5 & 0xff;
  FUN_004b8dfa(uVar5,unaff_EBP + 0xb);
  FUN_004b8e36(uVar5,unaff_EBP + 0xb);
  if (uVar5 != 0) {
    FUN_004245d2(extraout_ECX[3],uVar5 << 2);
    FUN_004245d2(extraout_ECX[4],uVar5 * 0x25);
  }
  uVar4 = FUN_0042459a();
  extraout_ECX[5] = uVar4;
  uVar3 = FUN_00424561();
  *(undefined2 *)(extraout_ECX + 6) = uVar3;
  uVar2 = FUN_0042452b();
  *(undefined1 *)((int)extraout_ECX + 0x1a) = uVar2;
  uVar3 = FUN_00424561();
  *(undefined2 *)((int)extraout_ECX + 0x1b) = uVar3;
  uVar2 = FUN_0042452b();
  *(undefined1 *)((int)extraout_ECX + 0x1d) = uVar2;
  uVar4 = FUN_0045cdbc(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  uVar4 = FUN_0042459a();
  *(undefined4 *)((int)extraout_ECX + 0x22) = uVar4;
  uVar4 = FUN_0042459a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)((int)extraout_ECX + 0x26) = uVar4;
  return;
}


