/* FUN_00765a9f - 0x00765a9f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00765a9f(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0061aa2e(*(undefined4 *)(unaff_EBP + 0xc));
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x640 + iVar1 * 4) = uVar2;
  FUN_00414f8b(unaff_EBP + 0x10);
  *(undefined1 *)(iVar1 + 0x658 + extraout_ECX) = *(undefined1 *)(unaff_EBP + 0x14);
  *(undefined2 *)(extraout_ECX + 0x65c + iVar1 * 2) = *(undefined2 *)(unaff_EBP + 0x18);
  *(undefined1 *)(iVar1 + 0x662 + extraout_ECX) = *(undefined1 *)(unaff_EBP + 0x1c);
  *(undefined2 *)(extraout_ECX + 0x674 + iVar1 * 2) = *(undefined2 *)(unaff_EBP + 0x20);
  *(undefined4 *)(extraout_ECX + 0x668 + iVar1 * 4) = *(undefined4 *)(unaff_EBP + 0x24);
  FUN_00766048(iVar1);
  FUN_007667f6(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


