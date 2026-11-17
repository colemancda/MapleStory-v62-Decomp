/* FUN_008160ed - 0x008160ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_008160ed(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_00485656(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*piVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_00404a94();
  iVar4 = FUN_00404a94();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4 - iVar1;
}


