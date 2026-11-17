/* ptr_00448209 - 0x00448209 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ptr_00448209(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  param_1[-2] = &PTR_LAB_008e8d48;
  param_1[-1] = &PTR_LAB_008e8cfc;
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  *param_1 = &PTR_FUN_008e8cf8;
  piVar1 = (int *)param_1[0x93];
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x92];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x91];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x90];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x8f];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = param_1[0x85];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_00449941(0);
    param_1[0x85] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  param_1[0x18] = &PTR_LAB_008e84a0;
  _DAT_0097835c = 0;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


