/* FUN_0077a8bf - 0x0077a8bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077a8bf(void)

{
  uint uVar1;
  int *piVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  int local_18;
  
  FUN_00879bb8();
  piVar2 = (int *)(extraout_ECX + 0x14);
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(extraout_ECX + 0x14) + -4);
  }
  uVar1 = *(uint *)(*(int *)(extraout_ECX + 0x10) + 0x818);
  if (uVar1 < uVar3) {
    local_18 = *piVar2 + uVar1 * 0x14;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414f8b();
    local_18 = *piVar2 + *(int *)(*(int *)(extraout_ECX + 0x10) + 0x818) * 0x14;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0078290f();
    *(int **)(unaff_EBP + -0x14) = &local_18;
    local_18 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004f14ee();
    FUN_0047c541();
    if (*piVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar2 + -4);
    }
    *(undefined4 *)(*(int *)(extraout_ECX + 0x10) + 0x77c) = uVar4;
    *(int *)(*(int *)(extraout_ECX + 0x10) + 0x780) =
         (*(int *)(*(int *)(extraout_ECX + 0x10) + 0x77c) + 1) / 2;
    piVar2 = (int *)(*(int *)(extraout_ECX + 0x10) + 0x780);
    if (*piVar2 == 0) {
      *piVar2 = 1;
    }
    local_18 = 0;
    FUN_008161f1();
    if (*(int *)(DAT_00978368 + 0x2d08) != 0) {
      *(int **)(unaff_EBP + -0x14) = &local_18;
      local_18 = 0;
      FUN_00414f8b(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00429303();
      FUN_004f0f2f();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_18 = 0x77a9c3;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


