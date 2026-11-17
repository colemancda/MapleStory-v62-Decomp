/* FUN_00607e5b - 0x00607e5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00607e5b(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008eceb8;
  extraout_ECX[-1] = &PTR_FUN_008ece6c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ece68;
  iVar1 = extraout_ECX[0x3d];
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 != 0) {
    FUN_00607fbb();
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x3e];
  if (iVar1 != 0) {
    FUN_0060805c();
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x3f];
  if (iVar1 != 0) {
    FUN_006080ff();
    FUN_00402b41(iVar1);
  }
  piVar2 = (int *)extraout_ECX[0x42];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x41];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x40];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00609ca4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x2e,8,4,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x26,8,4,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x22,8,2,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e5df();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


