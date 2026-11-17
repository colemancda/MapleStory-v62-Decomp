/* FUN_00817d30 - 0x00817d30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00817d30(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2dec;
  extraout_ECX[-1] = &PTR_ptr_00817c0f_008f2da0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2d9c;
  iVar1 = extraout_ECX[0x29];
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if (iVar1 != -1) {
    (*DAT_0097b6d0)(extraout_ECX[0x27],iVar1);
  }
  if (extraout_ECX[0x28] != -1) {
    (*DAT_0097b6d8)(extraout_ECX[0x28]);
  }
  piVar2 = (int *)extraout_ECX[0x33];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0067a091();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0067a091();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0047cf76();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00817d17();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x17] = &PTR_FUN_008f2e20;
  FUN_008199fd();
  DAT_00978364 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


