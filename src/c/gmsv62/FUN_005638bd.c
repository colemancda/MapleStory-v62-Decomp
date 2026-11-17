/* FUN_005638bd - 0x005638bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005638bd(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar3;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ebc64;
  extraout_ECX[-2] = &PTR_LAB_008ebc18;
  extraout_ECX[-1] = &PTR_FUN_008ebc14;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ebc10;
  bVar3 = DAT_00973abc != 0;
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  if (bVar3) {
    FUN_00867190();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0087a0b8(extraout_ECX + 0x6d,4,5,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0056ac65();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0045e621();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0056a7d2();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0056a7d2();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0056a7bc();
  iVar1 = extraout_ECX[0x61];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x61] = 0;
  }
  piVar2 = (int *)extraout_ECX[0x5f];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x5e];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x58] = &PTR_FUN_008ebc74;
  FUN_0056ac2b();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0056aac3();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0056aa2c();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0056ab22();
  piVar2 = (int *)extraout_ECX[0x4b];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0047cf76();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0056aac3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0056aa2c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0056a790();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0059f1bb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


