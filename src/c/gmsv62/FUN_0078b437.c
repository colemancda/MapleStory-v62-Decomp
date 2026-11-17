/* FUN_0078b437 - 0x0078b437 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078b437(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1840;
  extraout_ECX[-1] = &PTR_LAB_008f181c;
  *extraout_ECX = &PTR_FUN_008f1818;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[0x1c] = &PTR_LAB_008f1804;
  puVar1 = (undefined4 *)extraout_ECX[0x5e1];
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
  }
  if (extraout_ECX[0x791] != 0) {
    FUN_007d4061(extraout_ECX[0x791]);
    extraout_ECX[0x791] = 0;
  }
  iVar2 = extraout_ECX[0x78a];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar2 != 0) {
    FUN_0079d926(0);
    extraout_ECX[0x78a] = 0;
  }
  iVar2 = extraout_ECX[0x787];
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar2 != 0) {
    FUN_00402b41(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0079e168();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  extraout_ECX[0x77f] = &PTR_FUN_008f187c;
  FUN_0079e12e();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0087a0b8(extraout_ECX + 0x5ff,0x18,0x3f,&LAB_0078b429);
  piVar3 = (int *)extraout_ECX[0x5fb];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x5fa];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x5f3];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x5ee] = &PTR_FUN_008f1880;
  FUN_0079dfa4();
  piVar3 = (int *)extraout_ECX[0x5e6];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)extraout_ECX[0x5e5];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  iVar2 = extraout_ECX[0x5e1];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 != 0) {
    FUN_00434d73(0);
    extraout_ECX[0x5e1] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x5d7] = &PTR_FUN_008f1884;
  FUN_0079de1a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x5d1] = &PTR_FUN_008f1888;
  FUN_0079dc79();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0079da17();
  iVar2 = extraout_ECX[0x5c8];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 != 0) {
    FUN_00402b41(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  piVar3 = (int *)extraout_ECX[0x35b];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0043dd27();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


