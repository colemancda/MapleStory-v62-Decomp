/* FUN_00719078 - 0x00719078 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00719078(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0ca4;
  extraout_ECX[-1] = &PTR_LAB_008f0c58;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0c54;
  piVar1 = (int *)extraout_ECX[0x177];
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0074d4c3();
  iVar2 = extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0071bbfc(0);
    extraout_ECX[0x39] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0071bd73();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x32] = &PTR_FUN_008f0ce0;
  FUN_0071bce6();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1e,8,8,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


