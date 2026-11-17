/* FUN_004b68af - 0x004b68af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b68af(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar3 = FUN_0042459a();
  *extraout_ECX = uVar3;
  uVar3 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + 8) = 5;
  do {
    uVar3 = FUN_0045cdbc(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    piVar1 = (int *)(unaff_EBP + 8);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  bVar2 = FUN_0042452b();
  uVar4 = (uint)bVar2;
  FUN_004b8dfa(uVar4,unaff_EBP + 0xb);
  if (uVar4 != 0) {
    FUN_004245d2(extraout_ECX[3],uVar4 << 2);
  }
  uVar3 = FUN_0042459a();
  extraout_ECX[4] = uVar3;
  uVar3 = FUN_0045cdbc(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


