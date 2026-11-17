/* FUN_0082696f - 0x0082696f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082696f(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00526567();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(extraout_ECX + 0x9bc) = &PTR_FUN_008f2eec;
  FUN_00829ad4();
  piVar1 = *(int **)(extraout_ECX + 0x9b0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x97c,4,0xd,FUN_00411629);
  piVar1 = *(int **)(extraout_ECX + 0x978);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DAT_009784c0 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


