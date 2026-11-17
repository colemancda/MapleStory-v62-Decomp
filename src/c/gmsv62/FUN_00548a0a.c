/* FUN_00548a0a - 0x00548a0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00548a0a(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb980;
  extraout_ECX[-1] = &PTR_FUN_008eb934;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb930;
  iVar1 = extraout_ECX[0x162];
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_0048ba7b(0);
    extraout_ECX[0x162] = 0;
  }
  piVar2 = (int *)extraout_ECX[0x15d];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e5df();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


