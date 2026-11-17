/* FUN_00765f9a - 0x00765f9a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00765f9a(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00766e22();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = 0;
  iVar4 = extraout_ECX;
  if (*piVar1 != 0) {
    iVar2 = *(int *)(*piVar1 + -4);
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_0084a5e4(unaff_EBP + -0x18,*(undefined4 *)(*piVar1 + iVar2 * 4));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      uVar3 = *(undefined4 *)(*piVar1 + iVar2 * 4);
      FUN_00766e61(0xffffffff);
      FUN_0045e3a0(uVar3);
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_0045e794(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  if (*(int *)(iVar4 + 0x5ec) != 0) {
    FUN_00760f0f();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


