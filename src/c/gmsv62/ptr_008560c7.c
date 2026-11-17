/* ptr_008560c7 - 0x008560c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008560c7(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_0042459a();
  iVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(unaff_EBP + -0x110) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      uVar2 = FUN_0045cdbc(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      if (*(int *)(unaff_EBP + -0xa0) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0xa0) + -0xc);
      }
      uVar2 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x10c) = uVar2;
      uVar2 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x108) = uVar2;
      uVar2 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x104) = uVar2;
      uVar2 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x100) = uVar2;
      uVar2 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0xfc) = uVar2;
      iVar4 = unaff_EBP + -0x110;
      FUN_00858909(0xffffffff);
      FUN_008584f2(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      FUN_00414ebb();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_004029b9(0x98);
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0052293c(unaff_EBP + -0x10);
  }
  uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar3 != 0) & uVar3 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_0085858b();
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  FUN_004bc6a2();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_008585a8();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00523535();
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
    FUN_0077e45e();
  }
  if (DAT_00978358 != 0) {
    FUN_007b02be();
  }
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
    FUN_0077e45e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


