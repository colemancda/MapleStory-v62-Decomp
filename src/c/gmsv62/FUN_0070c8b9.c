/* FUN_0070c8b9 - 0x0070c8b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070c8b9(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0950;
  extraout_ECX[-1] = &PTR_LAB_008f0904;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0900;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_0060142b(0xcd,0,0);
  uVar1 = extraout_ECX[0x17];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00457d37(uVar1);
  FUN_00457cda(0);
  FUN_004751b2(unaff_EBP + -0x20);
  FUN_00815de9();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0074d4c3();
  piVar2 = (int *)extraout_ECX[0x2e];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x2d];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x24,4,9,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


