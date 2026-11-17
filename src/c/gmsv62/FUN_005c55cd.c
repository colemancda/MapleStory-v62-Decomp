/* FUN_005c55cd - 0x005c55cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c55cd(void)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_00879bb8();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_005c5810();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005d0c41();
  iVar2 = *(int *)(extraout_ECX + 500);
  uVar3 = -(uint)(*(int *)(extraout_ECX + 0xf0) != 0) & *(int *)(extraout_ECX + 0xf0) - 0xcU;
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0))
  {
    iVar4 = *(int *)(extraout_ECX + 0x15c);
  }
  if (((uVar3 != 0) && (*(int *)(uVar3 + 0x240) != 0)) && (*(int *)(iVar4 + 0x1d4) != 0)) {
    iVar2 = FUN_00413367(iVar4 + 0xac);
  }
  iVar4 = FUN_00413367();
  if (iVar4 == 0) {
    dVar1 = 0.0;
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 0x1f8) + iVar2;
    if (iVar2 < 0xb) {
      iVar2 = 10;
    }
    *(int *)(unaff_EBP + -0x10) = iVar2;
    if (0x8b < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
    }
    dVar1 = (double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0;
  }
  FUN_005d0f1a(dVar1);
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar2 = *(int *)(extraout_ECX + 0x160), iVar2 == 0))
  {
    iVar2 = *(int *)(extraout_ECX + 0x15c);
  }
  iVar2 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
  if (iVar2 == 3) {
    FUN_005d0f1a(0x3ff0000000000000);
    iVar2 = *(int *)(extraout_ECX + 0x1f8) + *(int *)(extraout_ECX + 500);
    if (iVar2 < 0xb) {
      iVar2 = 10;
    }
    *(int *)(unaff_EBP + -0x10) = iVar2;
    if (0x8b < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
    }
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
    FUN_005d0f1a(0x3ff0000000000000);
    iVar2 = *(int *)(extraout_ECX + 0x1f8) + *(int *)(extraout_ECX + 500);
    if (iVar2 < 0xb) {
      iVar2 = 10;
    }
    *(int *)(unaff_EBP + -0x10) = iVar2;
    if (0x8b < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
    }
    FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
    fVar5 = (float10)FUN_005d0e60();
    FUN_005d0f1a((double)fVar5);
  }
  FUN_005d0f1a(*(undefined8 *)(*(int *)(extraout_ECX + 0x15c) + 0x150));
  FUN_005d0f1a(*(undefined8 *)(*(int *)(extraout_ECX + 0x15c) + 0x150));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


