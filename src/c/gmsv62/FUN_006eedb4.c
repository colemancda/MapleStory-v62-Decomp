/* FUN_006eedb4 - 0x006eedb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006eedb4(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(int *)(unaff_EBP + -0x34) = iVar2;
  FUN_00414f8b(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = FUN_00434e21(unaff_EBP + 8,&DAT_0096b12c,iVar2);
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  FUN_00414f8b(unaff_EBP + 0x14);
  if ((iVar2 < 1) || (0xc < iVar2)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = iVar2 + 0x6f;
  }
  iVar2 = unaff_EBP + -0x34;
  FUN_006f2f80(0xffffffff);
  FUN_006f2e6e(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006eee88();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


