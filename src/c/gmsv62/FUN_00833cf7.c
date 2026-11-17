/* FUN_00833cf7 - 0x00833cf7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00833cf7(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  FUN_0083d2eb(unaff_EBP + 8);
  if (DAT_00978360 != 0) {
    FUN_00746e86();
  }
  FUN_0070238a(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  for (uVar2 = 0;
      (iVar1 = *(int *)(unaff_EBP + -0x10), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    *(uint *)(unaff_EBP + -0x14) =
         CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + uVar2 * 4));
    iVar1 = FUN_005ee726(unaff_EBP + -0x14);
    if (iVar1 == 0) {
      FUN_0070328a(CONCAT22((short)((uint)*(int *)(unaff_EBP + -0x10) >> 0x10),
                            *(undefined2 *)(*(int *)(unaff_EBP + -0x10) + uVar2 * 4)));
    }
  }
  FUN_00833dbd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0045e7c2(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


