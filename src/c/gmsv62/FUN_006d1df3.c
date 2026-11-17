/* FUN_006d1df3 - 0x006d1df3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d1df3(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  piVar2 = *(int **)(extraout_ECX + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(extraout_ECX + 4) != 0) {
    FUN_00449941(0);
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


