/* FUN_006f0106 - 0x006f0106 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f0106(void)

{
  undefined4 *extraout_ECX;
  int iVar1;
  int unaff_EBP;
  int *piVar2;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008f0370;
  extraout_ECX[-1] = &PTR_FUN_008f0324;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0320;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  piVar2 = extraout_ECX + 0x172;
  iVar1 = 3;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (extraout_ECX[0x176] != 0) {
    FUN_00815de9();
    FUN_006f2ec0();
    FUN_006f2ec0();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0087a0b8(extraout_ECX + 0x17a,4,8,FUN_004115cc);
  piVar2 = (int *)extraout_ECX[0x179];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x178];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x177];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_006f2ec0();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006f3005();
  DAT_00979274 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


