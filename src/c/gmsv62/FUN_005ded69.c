/* FUN_005ded69 - 0x005ded69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ded69(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0xc) = uVar1;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x10) = uVar1;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x14) = uVar1;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_0042459a();
  *(int *)(extraout_ECX + 0x1c) = iVar2;
  if (iVar2 != 0) {
    uVar1 = FUN_005d90ec(iVar2);
    FUN_005e051c(uVar1);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00414f8b(*(int *)(unaff_EBP + -0x10) + 0x30);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_005dd104(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


