/* FUN_004db58a - 0x004db58a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004db58a(void)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  bVar3 = FUN_0042452b();
  uVar5 = (uint)bVar3;
  piVar2 = (int *)(extraout_ECX + 400);
  FUN_004dba0c(uVar5,1,unaff_EBP + -0xd);
  *(undefined4 *)(extraout_ECX + 0x178) = 0;
  iVar7 = extraout_ECX;
  if (uVar5 != 0) {
    iVar6 = 0;
    *(uint *)(unaff_EBP + -0x14) = uVar5;
    do {
      uVar4 = FUN_0042459a();
      FUN_0045e3a0(uVar4);
      iVar7 = *piVar2;
      uVar5 = FUN_00424561();
      *(uint *)(iVar7 + iVar6 + 0xc) = uVar5 & 0xffff;
      iVar7 = *piVar2;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(iVar7 + iVar6 + 0x10) = uVar4;
      uVar4 = FUN_0045cdbc(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00414f8b(uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      iVar7 = *(int *)(unaff_EBP + -0x18);
      *(int *)(iVar7 + 0x178) = *(int *)(iVar7 + 0x178) + *(int *)(iVar6 + 0x10 + *piVar2);
      iVar6 = iVar6 + 0x18;
      piVar1 = (int *)(unaff_EBP + -0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uVar4 = FUN_0042459a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(iVar7 + 0x17c) = uVar4;
  return;
}


