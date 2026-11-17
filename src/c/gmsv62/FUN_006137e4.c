/* FUN_006137e4 - 0x006137e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006137e4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar3;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ed128;
  extraout_ECX[-1] = &PTR_LAB_008ed104;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed100;
  bVar3 = DAT_0097951c != 0;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (bVar3) {
    FUN_00766983(*(undefined4 *)(extraout_ECX[0x1f] + 0xd78));
  }
  iVar1 = extraout_ECX[0x65];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_004d2023(0);
    extraout_ECX[0x65] = 0;
  }
  piVar2 = (int *)extraout_ECX[0x43];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x3c] = &PTR_FUN_008e8648;
  FUN_0041398d();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00617e03();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x2a,0x18,2,&LAB_0061397b);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  piVar2 = (int *)extraout_ECX[0x1e];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


