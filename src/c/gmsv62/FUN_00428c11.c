/* FUN_00428c11 - 0x00428c11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00428c11(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_00434c78();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iVar2 = FUN_00436d34();
  FUN_00428cb7(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_0043443b(unaff_EBP + -0x1c);
  uVar3 = FUN_004133f0();
  *(uint *)(iVar2 + 0x4c) = uVar3 % 0x168;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x18);
  FUN_00434cab();
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00434d73(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


