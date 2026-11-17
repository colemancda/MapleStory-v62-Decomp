/* FUN_00645bc9 - 0x00645bc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00645bc9(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_00449913(0);
    *(undefined4 *)(extraout_ECX + 0x38) = 0;
  }
  piVar2 = *(int **)(extraout_ECX + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (*(int *)(extraout_ECX + 0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


